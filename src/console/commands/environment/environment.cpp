#include "environment.h"
#include "console/commands/environment/environmentNew.h"
#include "console/commands/environment/environmentDelete.h"

using namespace LGen;

const std::string Command::Environment::KEYWORD = "environment";
const std::string Command::Environment::ALIAS = "env";
const std::string Command::Environment::MSG_NO_ENVIRONMENT = "No environment is loaded.";
const std::string Command::Environment::MSG_ENVIRONMENT_INCOMPLETE = "The current environment is incomplete.";

Command::Environment::Environment() :
	Command({ KEYWORD, ALIAS }, {
		std::make_shared<Command::Environment::New>(),
		std::make_shared<Command::Environment::Delete>()
	}) {

}
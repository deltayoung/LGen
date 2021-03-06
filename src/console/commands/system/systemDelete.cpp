#include "console/commands/system/systemDelete.h"

using namespace LGen;

const std::string Command::System::Delete::KEYWORD = "delete";
const std::string Command::System::Delete::FILE_HELP = "text/helpSystemDelete.txt";

Command::System::Delete::Delete() :
	Command({ KEYWORD }, FILE_HELP, 0) {

}

void Command::System::Delete::application(
	const std::vector<std::string> &arguments,
	Console &console) {
	workspace.system = nullptr;
}

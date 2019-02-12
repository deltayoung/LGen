#include "console/commands/exit.h"

using namespace LGen;

const std::string Command::Exit::KEYWORD = "exit";
const std::string Command::Exit::FILE_HELP = "text/helpExit.txt";
const std::string Command::Exit::MSG_ARGUMENTS = "The exit command takes no arguments.";

Command::Exit::Exit(Console *console) :
	Command({ KEYWORD }, FILE_HELP),
	console(console) {

}

void Command::Exit::application(
	const std::vector<std::string> arguments,
	Console &console,
	Workspace &workspace) {
	if(arguments.size() == 0)
		this->console->stop();
	else
		console.log(MSG_ARGUMENTS);
}
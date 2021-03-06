#pragma once

#include "console/command.h"

namespace LGen {
	class Command::Inspect final : public Command {
	public:
		Inspect();

	protected:
		void application(
			const std::vector<std::string> &arguments,
			Console &console) override;

	private:
		static const std::string KEYWORD;
		static const std::string FILE_HELP;
		static const std::string MSG_NO_AGENT_SELECTED;
		static const std::string MSG_NO_SIMULATION;
		static const std::string MSG_HEAD;
		static const std::string PROPERTY_INDENT;
		static const std::string PROPERTY_UTILITY;
		static const std::string PROPERTY_UTILITY_EXPOSURE;
		static const std::string PROPERTY_UTILITY_SEEDS;
		static const std::string PROPERTY_UTILITY_RULES;
		static const std::string PROPERTY_UTILITY_STABILITY;
		static const std::string PROPERTY_UTILITY_LEAVES;
		static const std::string PROPERTY_GENERATIONS;
		static const std::string PROPERTY_SYMBOLS;
		static const std::string PROPERTY_EXPOSURE;
		static const std::string PROPERTY_SEEDS;
	};
}
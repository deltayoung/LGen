#pragma once

#include "console/commands/simulation/mutator/simulationMutator.h"

namespace LGen {
	class Command::Simulation::Mutator::PSymbolChanceRotation final : public Command {
	public:
		PSymbolChanceRotation();

	protected:
		void application(
			const std::vector<std::string> &arguments,
			Console &console) override;

	private:
		static const std::string KEYWORD;
		static const std::string FILE_HELP;
		static const unsigned char ARG_PROBABILITY = 0;
	};
}
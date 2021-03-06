#include "environmentTerrain.h"
#include "console/commands/environment/terrain/environmentTerrainDropwave.h"
#include "console/commands/environment/terrain/environmentTerrainFlat.h"
#include "console/commands/environment/terrain/environmentTerrainValleys.h"

using namespace LGen;

const std::string Command::Environment::Terrain::KEYWORD = "terrain";

Command::Environment::Terrain::Terrain() :
	Command({ KEYWORD }, {
		std::make_unique<Dropwave>(),
		std::make_unique<Flat>(),
		std::make_unique<Valleys>()
	}) {

}
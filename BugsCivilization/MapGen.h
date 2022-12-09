#ifndef MAPGENH
#define MAPGENH


#include <vector>
#include <SFML/Graphics.hpp>
#include <random>
#include <ctime>
#include "MapBlock.h"


using namespace std;
using namespace sf;
class MapGen
{
	int Fx, Fy;
public:
	int gridLength = 0;
	int counter = 0;
	vector<MapBlock*> Blocks;
	vector<vector<MapBlock*>> MapBlocks2D;

	void MapFirstDraw(RenderWindow&);
	void MapDrawUpdate(RenderWindow&);

};

#endif

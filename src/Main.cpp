#include "LandBasedTracked/LandBasedTracked.h"
#include "LandBasedWheeled/LandBasedWheeled.h"
#include "Algorithm/Algorithm.h"
#include "Maze/Maze.h"

int main(int argc, char* argv[]) 
{
	std::shared_ptr<fp::LandBasedRobot> robot = std::make_shared<fp::LandBasedWheeled>("Husky");
	fp::Algorithm::drive(robot);
	
	return 0;
}

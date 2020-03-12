#pragma once 

#include "../API/API.h"
#include "../LandBasedRobot/LandBasedRobot.h"

namespace fp 
{ 
	enum Actions { Forward = 'f', Left = 'l', Right = 'r', Backward = 'b' };

/**
 * @class Algorithm
 * @author Group 4
 * @date 02/12/19
 * @file Algorithm.h
 * @brief A class which finds the solution path using BFS algorithm and navigates the robot through the maze, using the specified methods.
 */
	class Algorithm 
	{
	public:
		Algorithm() = delete;

		static void drive(std::shared_ptr<LandBasedRobot> robot);						// drives the robot
		static std::vector<Cell> planPath(std::shared_ptr<LandBasedRobot> robot); 		// provides a solution path using the BFS
		static std::vector<char> planActions(std::shared_ptr<LandBasedRobot> robot, const std::vector<Cell>& path);			////computes and returns set of actions required to drive through the solution path

	private:
		static bool isElementOf(const Cell& c, const std::vector<Cell>& path);			//bound checking
		static void highlightPath(std::shared_ptr<LandBasedRobot> robot, const std::vector<Cell>& path, int currentIndex);	////highlights the solution path
	};
}
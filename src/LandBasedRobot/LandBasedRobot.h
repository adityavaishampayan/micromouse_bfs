#pragma once

#include "../API/API.h" 
#include "../Maze/Maze.h"

namespace fp 
{
	enum Directions { North = 0, East = 1, South = 2, West = 3 };		//Directions stored as enumerations
	static std::array<char,4> directions { 'n','e','s','w' };			// Array of directions 
	
	/**
	 * @class LandBasedRobot
	 * @author Group 4
	 * @date 02/12/19
	 * @file LandBasedRobot.h
	 * @brief An abstract base class which contains all the attributes of the robot in the maze. 
	 */
	class LandBasedRobot
	{
	public:
	 /**
		* @brief Constructor of base class to initialize the name.
		*/
		LandBasedRobot(std::string name); 
		/**
		 * @brief Destructor of the base class.
		 * @return 
		 */
		virtual ~LandBasedRobot(); 

		virtual void MoveForward() = 0;			// moves the robot one step in forward direction
		virtual void TurnLeft() = 0;			// turns the robot to left to change the direction
		virtual void TurnRight() = 0;			// turns the robot to right to change the direction

		char GetDirection() const { return direction_; }			// Current direction of the robot.
		Cell GetCell() const { return { x_,y_ }; }					// Current position of the robot.
		std::tuple<Cell, Cell, Cell> GetSurroundingCells() const;	// returns [front, left, right] cells respectively

		Maze maze;		//object of class maze

	protected:
		void ScanSurroundings();		//Checks the surrounding and updates the maze
		void UpdatePosition();			//Updates the position of the robot

		std::string name_;
		int x_, y_;
		char direction_;
		double speed_, width_, length_, height_, capacity_; // dummy attributes
	};
}
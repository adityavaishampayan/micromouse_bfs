#pragma once

namespace fp
{
	class Maze; // forward class declaration

	enum Cells { NotConnected = 0, Connected = 1 };
	
	/**
	 * @class Cell
	 * @author Group 4
	 * @date 02/12/19
	 * @file Cell.h
	 * @brief 
	 */
	struct Cell
	{
		int x, y;			// x and y co-ordinates

		unsigned int index(const Maze& maze) const;			//cell index
		bool operator==(Cell other) const;
		bool operator!=(Cell other) const;
	};
}
#pragma once

#include "../LandBasedRobot/LandBasedRobot.h"

namespace fp
{
	/**
	 * @class LandBasedTracked
	 * @author Group 4
	 * @date 02/12/19
	 * @file LandBasedTracked.h
	 * @brief A concrete, derived class from LandBasedRobot. It has overridden virtual methods to allow dynamic binding. It has a protected atttribute which specifies the type of track mounted on the robot.
	 */
	class LandBasedTracked : public LandBasedRobot
	{
	public:
		LandBasedTracked(std::string name);			//constructor

		virtual void MoveForward() override;		//overridden move forward method
		virtual void TurnLeft() override;			//overridden turn left method
		virtual void TurnRight() override;			//overridden turn right method

	protected:
		std::string track_type;			// dummy attribute
	};
}
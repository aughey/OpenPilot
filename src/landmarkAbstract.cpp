/**
 * landmarkAbstract.cpp
 *
 *  Created on: 10/03/2010
 *      Author: jsola
 *
 *  \file landmarkAbstract.cpp
 *
 *  ## Add a description here ##
 *
 * \ingroup rtslam
 */

#include "rtslam/landmarkAbstract.hpp"
#include "rtslam/observationAbstract.hpp"

namespace jafar {
	namespace rtslam {
		using namespace std;


		/*
		 * constructor.
		 */
		LandmarkAbstract::LandmarkAbstract(MapAbstract & _map, const size_t _size) :
			MapObject(_map, _size) {
			categoryName("LANDMARK");
		}

		inline void LandmarkAbstract::addObservation(observation_t _obsPtr) {
			observations[_obsPtr->id()] = _obsPtr;
		}

	}
}

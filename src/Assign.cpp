/*
 * Assign.cpp
 *
 *  Created on: 25-Feb-2018
 *      Author: Deven Walia
 */

#include "TravelingDeliveryExecutivesAssignment.h"

void Assign::setAlgorithm(Algorithm* algorithm) {
	_algorithm = algorithm;
}

Algorithm* Assign::getAlgorithm() {
	NearestMileAlgorithm *nearestMileAlgorithm = new NearestMileAlgorithm();
	MaxWaitDelayAlgorithm *maxWaitDelayAlgorithm = new MaxWaitDelayAlgorithm();

retry:
	int n=-1;
	cout << "Enter the algorithm to use\n\n1 for NearestMileAlgorithm,\n2 for MaxWaitDelayAlgorithm\n\n:  ";
	cin >> n;

	switch(n-1) {
		case 0: return nearestMileAlgorithm;
		case 1: return maxWaitDelayAlgorithm;
		default : goto retry;
	}
}

mapping Assign::map(mapping* map) {

}

void Assign::print(mapping* map) {

}

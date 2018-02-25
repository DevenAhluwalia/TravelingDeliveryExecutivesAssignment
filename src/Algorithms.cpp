/*
 * algorithms.cpp
 *
 *  Created on: 25-Feb-2018
 *      Author: Deven Walia
 */

#include "TravelingDeliveryExecutivesAssignment.h"

void Assign::sort(deliveryExecutive** deliveryExecutives, int len) {
	return _algorithm->sort(deliveryExecutives, len);
}

void MaxWaitDelayAlgorithm::sort(deliveryExecutive* deliveryExecutives[numOfMockDE], int len) {
	qsort(deliveryExecutives, len, sizeof(deliveryExecutive), cmpFnMaxWaitDelay);
}

void NearestMileAlgorithm::sort(deliveryExecutive** deliveryExecutives, int len) {
	qsort(deliveryExecutives, len, sizeof(deliveryExecutive), cmpFnNearestMile);
}

int cmpFnNearestMile(const void *x, const void *y) {
	if(!x || !y) {
		return -1;
	}
	return -1;
//	return havensineDistance((*(deliveryExecutive*)x->loc, loc2)
}

int cmpFnMaxWaitDelay(const void *x, const void *y) {
	if(!x || !y) {
		return -1;
	}
	return (*(deliveryExecutive*)x).timeOfOrderDelivered->mins - (*(deliveryExecutive*)y).timeOfOrderDelivered->mins;
}

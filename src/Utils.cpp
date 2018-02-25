/*
 * Utils.cpp
 *
 *  Created on: 25-Feb-2018
 *      Author: Deven Walia
 */

#include "TravelingDeliveryExecutivesAssignment.h"
#include <Math.h>

double havensineDistance(location *loc1, location *loc2) {

	double latHome = loc1->lattitude;
	double lonHome = loc1->longitude;
	double latDest = loc2->lattitude;
	double lonDest = loc2->longitude;

	double pi = 3.141592653589793;
	int R = 6371; //Radius of the Earth
	latHome = (pi/180)*(latHome);
	latDest = (pi/180)*(latDest);
	double differenceLon = (pi/180)*(lonDest - lonHome);
	double differenceLat = (pi/180)*(latDest - latHome);
	double a = sin(differenceLat/2) * sin(differenceLat/2) +
	cos(latHome) * cos(latDest) *
	sin(differenceLon/2) * sin(differenceLon/2);
	double c = 2 * atan2(sqrt(a), sqrt(1-a));
	double distance = R * c;
	return distance;
}

//ll** convertToArr(ll *l) {
//	if(!l) {
//		return NULL;
//	}
//	ll **orders = (ll**)malloc(numOfMockOrders*sizeof(ll*));
//	ll *t = l;
//	int i = 0;
//
//	while(t) {
//		orders[i++] = t;
//		t = t->next;
//	}
//	return orders;
//}

ll* convertToLL(deliveryExecutive **deliveryExecutivesArr, int len) {
	if(!deliveryExecutivesArr) {
		return NULL;
	}
	ll *t = NULL;

	for(int i=0; i<len; i++) {
		t = addNode(t, deliveryExecutivesArr[i]);
	}
	return t;
}

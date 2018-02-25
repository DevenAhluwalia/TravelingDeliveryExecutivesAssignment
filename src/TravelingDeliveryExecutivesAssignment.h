/*
 * TravelingDeliveryExecutivesAssignment.h
 *
 *  Created on: 25-Feb-2018
 *      Author: Deven Walia
 */

#include <iostream>
using namespace std;

#define numOfMockDE 5
#define numOfMockOrders 10

struct location {
	double lattitude;
	double longitude;

	location(double _lat, double _long): lattitude(_lat), longitude(_long){}
};

struct timeInMins {
	int mins; //Holds minutes since last midnight.

	timeInMins(int _mins):mins(_mins){}
};

struct order {
	location *loc;
	long ID;
	timeInMins *timeOfOrderPlaced;

	order(){}
	order(location *_loc, timeInMins *_timeInMins, long _ID) : loc(_loc), ID(_ID), timeOfOrderPlaced(_timeInMins){}
};

struct deliveryExecutive {
	location *loc;
	long ID;
	timeInMins *timeOfOrderDelivered;

	deliveryExecutive(){}
	deliveryExecutive(location *_loc, timeInMins *_timeInMins, long _ID) : loc(_loc), ID(_ID), timeOfOrderDelivered(_timeInMins){}
};

struct assignment {
	order _order;
	deliveryExecutive _deliveryExecutive;
};

struct mapping {
	assignment **assignments;
};

class Algorithm {
	public:
		virtual void sort() = 0;
		virtual ~Algorithm(){};
};

class NearestMileAlgorithm : public Algorithm {
	public:
		void sort();
};

class MaxWaitDelayAlgorithm : public Algorithm {
	public:
		void sort();
};

class Assign {
	public:
		Algorithm *_algorithm;

		void sort();
		Algorithm* getAlgorithm();
		void setAlgorithm(Algorithm*);
		void mockInputs(deliveryExecutive**, order**);
		mapping map(mapping*);
		void print(mapping*);
};

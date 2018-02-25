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
#define SERVICE_RADIUS 25 //KMs

struct ll;
struct location;
struct timeInMins;
struct order;
struct deliveryExecutive;
struct assignment;

class Algorithm;
class NearestMileAlgorithm;
class MaxWaitDelayAlgorithm;
class Assign;

ll* addNode(ll*, deliveryExecutive*);
double havensineDistance(location*, location*);

struct ll {
	ll *next;
	deliveryExecutive *_deliveryExecutive;
};

struct location {
	double lattitude;
	double longitude;

	location(double _lat, double _long): lattitude(_lat), longitude(_long) {}
};

struct timeInMins {
	int mins; //Holds minutes since last midnight.

	timeInMins(int _mins):mins(_mins){}
};

struct order {
	location *loc;
	long ID;
	timeInMins *timeOfOrderPlaced;
	ll *DEList;

	order(){}
	order(location *_loc, timeInMins *_timeInMins, long _ID) : loc(_loc), ID(_ID), timeOfOrderPlaced(_timeInMins), DEList(NULL) {}
};

struct deliveryExecutive {
	location *loc;
	long ID;
	timeInMins *timeOfOrderDelivered;

	deliveryExecutive(){}
	deliveryExecutive(location *_loc, timeInMins *_timeInMins, long _ID) : loc(_loc), ID(_ID), timeOfOrderDelivered(_timeInMins) {}
};

struct assignment {
	order *_order;
	deliveryExecutive *_deliveryExecutive;

	assignment(order *order, deliveryExecutive *deliveryExecutive) : _order(order), _deliveryExecutive(deliveryExecutive) {}
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
		deliveryExecutive **_deliveryExecutives;
		order **_orders;
		assignment **_assignments;
		double _serviceRadius;

		Algorithm* getAlgorithm();
		void setAlgorithm(Algorithm*);
		void setServiceRadius(double);
		void mockInputs();
		void print();
		void sort();
		void map();
		void filter();

		Assign() {
			_algorithm = NULL;
			_deliveryExecutives = NULL;
			_orders = NULL;
			_assignments = NULL;
		}
};

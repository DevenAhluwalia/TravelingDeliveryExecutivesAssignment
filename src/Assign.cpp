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

void Assign::setServiceRadius(double serviceRadius) {
	_serviceRadius = serviceRadius;
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

void Assign::map() {
	_assignments = (assignment**)malloc(numOfMockOrders*sizeof(assignment*));

	for(int i=0; i<numOfMockOrders; i++) {
		_assignments[i] = new assignment(_orders[i], _orders[i]->DEList ? _orders[i]->DEList->_deliveryExecutive:NULL);
	}
}

void Assign::filter() {
	if(!_deliveryExecutives || !_orders) {
		perror("DeliveryExecutives || Orders found null");
	}
	for(int i=0; i<numOfMockOrders; i++) {
		deliveryExecutive *deliveryExecutivesArr[numOfMockDE];
		int k = 0;
		for(int j=0; j<numOfMockDE; j++) {
			if(havensineDistance(_orders[i]->loc, _deliveryExecutives[j]->loc) <= _serviceRadius) {
				deliveryExecutivesArr[k++] = _deliveryExecutives[j];
			}
		}
		sort(deliveryExecutivesArr, k);
		_orders[i]->DEList = convertToLL(deliveryExecutivesArr, k);
	}
}

void Assign::print() {
	cout << "\n\nAssignments are as follows :\n\n";

//	for(int i=0; i<numOfMockOrders; i++) {
//		cout<<endl<< "Order ID\t"<<_orders[i]->ID << "  ";
//		if(_orders[i]->DEList) {
//			ll *t = _orders[i]->DEList;
//			while(t) {
//				cout << "-> DE"<<t->_deliveryExecutive->ID<<"\t";
//				t = t->next;
//			}
//		}
//	}
	for(int i=0; i<numOfMockOrders; i++) {
		if(_assignments[i]->_deliveryExecutive) {
			cout << "Order ID\t" << _orders[i]->ID << "  -> DE" << _assignments[i]->_deliveryExecutive->ID << "\n";
		} else {
			cout << "Order ID\t" << _orders[i]->ID << "  -> DE not available\n";
		}
	}
}

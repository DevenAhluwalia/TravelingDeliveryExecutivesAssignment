//=========================================================================================
// Name        : TravelingDeliveryExecutivesAssignment.cpp
// Author      : Deven Walia
// Version     :
// Copyright   : NA
// Description : Traveling Delivery Executives Assignment - A combinatorial optimization
//=========================================================================================

#include "TravelingDeliveryExecutivesAssignment.h"

int main() {
	Assign assign;

	assign.mockInputs();
	assign.setServiceRadius(SERVICE_RADIUS);
	assign.filter();
	Algorithm *algo = assign.getAlgorithm();
	assign.setAlgorithm(algo);
	assign.sort();
	assign.map();
	assign.print();

	return 0;
}

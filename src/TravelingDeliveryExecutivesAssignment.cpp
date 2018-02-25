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

	Algorithm *algo = assign.getAlgorithm();
	assign.setAlgorithm(algo);
	assign.setServiceRadius(SERVICE_RADIUS);
	assign.mockInputs();
	assign.filter();
	assign.map();
	assign.print();

	return 0;
}

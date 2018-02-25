//=========================================================================================
// Name        : TravelingDeliveryExecutivesAssignment.cpp
// Author      : Deven Walia
// Version     :
// Copyright   : NA
// Description : Traveling Delivery Executives Assignment - A combinatorial optimization
//=========================================================================================

#include "TravelingDeliveryExecutivesAssignment.h"

int main() {
	deliveryExecutive **deliveryExecutives = NULL;
	order **orders = NULL;
	mapping *mapping = NULL;

	Assign assign;

	assign.mockInputs(deliveryExecutives, orders);

	Algorithm *algo = assign.getAlgorithm();
	assign.setAlgorithm(algo);
	assign.sort();
	assign.map(mapping);
	assign.print(mapping);

	return 0;
}

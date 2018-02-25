/*
 * mock.cpp
 *
 *  Created on: 25-Feb-2018
 *      Author: Deven Walia
 */

#include "TravelingDeliveryExecutivesAssignment.h"
#include <stdlib.h>

void Assign::mockInputs() {

	 _deliveryExecutives = (deliveryExecutive**)malloc(numOfMockDE*sizeof(deliveryExecutive*));
	 _orders = (order**)malloc(numOfMockOrders*sizeof(order*));

	 _deliveryExecutives[0] = new deliveryExecutive(new location(12.22, 12.45), new timeInMins(840), 123);
	 _deliveryExecutives[1] = new deliveryExecutive(new location(12.32, 12.55), new timeInMins(900), 124);
	 _deliveryExecutives[2] = new deliveryExecutive(new location(12.42, 12.65), new timeInMins(950), 125);
	 _deliveryExecutives[3] = new deliveryExecutive(new location(12.52, 12.75), new timeInMins(800), 126);
	 _deliveryExecutives[4] = new deliveryExecutive(new location(12.62, 12.85), new timeInMins(360), 127);

	 _orders[0] = new order(new location(12.22, 12.45), new timeInMins(840), 786);
	 _orders[1] = new order(new location(12.32, 12.55), new timeInMins(850), 787);
	 _orders[2] = new order(new location(12.42, 12.65), new timeInMins(860), 788);
	 _orders[3] = new order(new location(12.52, 12.75), new timeInMins(780), 789);
	 _orders[4] = new order(new location(12.62, 12.85), new timeInMins(900), 790);
	 _orders[5] = new order(new location(12.72, 12.95), new timeInMins(400), 791);
	 _orders[6] = new order(new location(12.82, 13.05), new timeInMins(540), 792);
	 _orders[7] = new order(new location(12.92, 13.45), new timeInMins(780), 793);
	 _orders[8] = new order(new location(12.02, 14.35), new timeInMins(870), 794);
	 _orders[9] = new order(new location(13.22, 16.85), new timeInMins(880), 795);
}

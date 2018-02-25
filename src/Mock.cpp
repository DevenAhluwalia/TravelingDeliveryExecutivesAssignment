/*
 * mock.cpp
 *
 *  Created on: 25-Feb-2018
 *      Author: Deven Walia
 */

#include "TravelingDeliveryExecutivesAssignment.h"
#include <stdlib.h>

void Assign::mockInputs(deliveryExecutive** _deliveryExecutives, order** _orders) {

	 deliveryExecutive *deliveryExecutives[numOfMockDE];
	 order *orders[numOfMockOrders];

	 deliveryExecutives[0] = new deliveryExecutive(new location(12.22, 12.45), new timeInMins(840), 123);
	 deliveryExecutives[1] = new deliveryExecutive(new location(12.32, 12.55), new timeInMins(900), 124);
	 deliveryExecutives[2] = new deliveryExecutive(new location(12.42, 12.65), new timeInMins(950), 125);
	 deliveryExecutives[3] = new deliveryExecutive(new location(12.52, 12.75), new timeInMins(800), 126);
	 deliveryExecutives[4] = new deliveryExecutive(new location(12.62, 12.85), new timeInMins(360), 127);

	 orders[0] = new order(new location(12.22, 12.45), new timeInMins(840), 786);
	 orders[1] = new order(new location(12.32, 12.55), new timeInMins(840), 787);
	 orders[2] = new order(new location(12.42, 12.65), new timeInMins(840), 788);
	 orders[3] = new order(new location(12.52, 12.75), new timeInMins(840), 789);
	 orders[4] = new order(new location(12.62, 12.85), new timeInMins(840), 790);
	 orders[5] = new order(new location(12.72, 12.95), new timeInMins(840), 791);
	 orders[6] = new order(new location(12.82, 13.05), new timeInMins(840), 792);
	 orders[7] = new order(new location(12.92, 13.45), new timeInMins(840), 793);
	 orders[8] = new order(new location(12.02, 14.35), new timeInMins(840), 794);
	 orders[9] = new order(new location(13.22, 16.85), new timeInMins(840), 795);

	 _deliveryExecutives = deliveryExecutives;
	 _orders = orders;
}

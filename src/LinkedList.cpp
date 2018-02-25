/*
 * LinkedList.cpp
 *
 *  Created on: 25-Feb-2018
 *      Author: Deven Walia
 */

#include "TravelingDeliveryExecutivesAssignment.h"

ll* addNode(ll *l, deliveryExecutive *_deliveryExecutive) {
	ll *t = (ll*)malloc(sizeof(ll));
	t->next = NULL;
	t->_deliveryExecutive = _deliveryExecutive;

	if(!l) {
		return t;
	}
	ll *h = l;
	while(h->next) {
		h = h->next;
	}
	h->next = t;
	return l;
}

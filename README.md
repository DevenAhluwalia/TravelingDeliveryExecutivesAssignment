# TravelingDeliveryExecutivesAssignment
Cumulative optimisation of task assignment based on differing strategies

Problem statement :

We are trying to build auto assignment system for Swiggy’s delivery fleet. For simplicity we will solve the problem within context of an area.
Given a list of orders and a list of Delivery executives(DE), System should output list of assignments such that following attributes are cumulatively optimised:
-> First mile (Distance between restaurant and DE’s current location): Prioritise assignment pairs with low first mile.
-> DE waiting time(Time elapsed since DE last delivered the order): Prioritise DE with already high waiting time.
-> Order delay time (Time elapsed since Order was placed): Prioritize Order with already high order delay.
Input:
Orders: [{“restaurant_location”:”lat1,long1”,”ordered_time”:”T1”,”id” : 123},{“restaurant_location”:”lat3,long3”,”ordered_time”:”T2”,”id”:321}]
DEs : [{“id”:567,”current_location”:”lat5,long5”,”last_order_delivered_time”:”T3”},{“id”:765,”current_loca tion”:”lat7,long7”,”last_order_delivered_time”:”T4”},{“id”:766,”current_location”:”lat9,long9”,”last_ order_delivered_time”:”T5”}]
Output:  Assignments: [{“order_id”:123,”de_id”:765}]

Assumptions : 
Static inventory of order list & DE location list. There are no dynamic changes (like, DE1 after delivering order O1 at location L1 is at location L2 now)

Features:
Strategy design pattern to quickly introduce any new task assignment algorithm (demoed are : NearestMileAlgorithm, MaxWaitDelayAlgorithm)
Prompts user to choose preferred algorithm
Uses Havensine distance as sorting criteria.
Modular (Inheritance, Encapsulation) based code. Easy to extend.

Extensions:
Need to make precision cells (Blog src : Swiggy bytes)
Cumulative optimisation

How to run:
clone the git (link above)
cd src;
g++ *
./a.out

Sample output:

Enter the algorithm to use

1 for NearestMileAlgorithm,
2 for MaxWaitDelayAlgorithm

:  1

Assignments are as follows :

Order ID 786  -> DE123
Order ID 787  -> DE124
Order ID 788  -> DE125
Order ID 789  -> DE126
Order ID 790  -> DE127
Order ID 791  -> DE not available
Order ID 792  -> DE not available
Order ID 793  -> DE not available
Order ID 794  -> DE not available
Order ID 795  -> DE not available

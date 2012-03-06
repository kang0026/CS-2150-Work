/*
 * Adarsh Solanki
 * as5nr
 * 2/1/12
 * ListItr.cpp
 */

#include "ListItr.h"

// Constructor
ListItr::ListItr()
{
	current = NULL;
}

//one param constructor
ListItr::ListItr(ListNode * theNode)
{
	current = theNode;
}

bool ListItr::isPastEnd() const
{
	return current->next == NULL;
	//is this correct ?
	//header says returns true if past end position in list
	// does this mean that it should do it once you have HIT the dummy node ?
	//Should this be a factor in moveForward ? if so ,how ?
	//is the goal to bound the ListItr movement by the dummy nodes ?
}

bool ListItr::isPastBeginning() const
{
	return current->previous == NULL;
}

void ListItr::moveForward() 
{
    if (!isPastEnd()) 
    {
	    current = current->next;
	}
}

void ListItr::moveBackward() 
{
	if (!isPastBeginning()) 
    {
		current = current->previous;
	}
}

int ListItr::retrieve() const
{
	return current->value;
}

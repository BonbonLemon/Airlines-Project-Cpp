#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include "citylist.h"
int CityList::count = 0;

using namespace std;

void CityList::minusCount()
{
  count--;
} //minusCount

int CityList::getCount()
{
  return count;
} //getCount

CityNode::CityNode(City city, CityNode* n):cityNodeCity(city), next(n) {}

CityList::CityList():head(NULL), tail(NULL) {}

CityList::~CityList()
{
  CityNode *ptr;

  for (ptr = head; ptr; ptr = head)
  {
    head = ptr->next;
    delete ptr;
  } //deleting each CityNode

}//deconstructor 

const City& CityList::operator[] (int index) const
{
  int i;
  CityNode *ptr;

  for(i = 0, ptr = head; ptr && i < index; i++, ptr = ptr->next);

  return ptr->cityNodeCity;
}  // operator[] const

City& CityList::operator[] (int index)
{
  int i;
  CityNode *ptr;

  for(i = 0, ptr = head; ptr && i < index; i++, ptr = ptr->next);

  return ptr->cityNodeCity;
}  // operator[]

CityList& CityList::operator+=(City &city)
{
  if (tail!=NULL)
  {
    tail->next = new CityNode(city, NULL);
    tail = tail->next;
  } //tail doesn't exist
  else //tail esists
  {
    head = tail = new CityNode(city, NULL); 
  } //tail exists

  count++;

  return *this;
}  //operator+=

CityList& CityList::operator-=(City &city)
{
  CityNode *ptr, *prev = NULL;

  for (ptr = head; ptr && !(ptr->cityNodeCity == city); ptr = ptr->next)
    prev = ptr;

  if (ptr && (ptr->cityNodeCity == city))
  {
    if (!prev)
      head = head->next;
    else // not at head
      if (!ptr->next) 
      {
        tail = prev;
        tail->next = NULL;
      } // at tail
      else // in the middle of list
        prev->next = ptr->next;

    delete ptr;
  }  // through all nodes

  count--;

  return *this;
}  //operator-=

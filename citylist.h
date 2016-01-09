#ifndef CITYLIST_H
#define	CITYLIST_H
#include "city.h"
#include <iostream>


class CityNode
{
  City cityNodeCity;
  CityNode *next;
public:
  CityNode(City city, CityNode *n);
  friend class CityList;
}; //CityNode


class CityList 
{
  CityNode* head;
  CityNode* tail;
  static int count;
public:
  CityList();
  ~CityList();
  void minusCount();
  static int getCount();
  const City& operator[] (int index) const;
  City& operator[] (int index);
  CityList& operator+= (City &city);
  CityList& operator-= (City &city);
}; //CityNode



#endif 

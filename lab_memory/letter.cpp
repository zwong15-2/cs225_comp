/**
 * @file letter.cpp
 */

#include "letter.h"
#include <iostream>
using namespace std;

Letter::Letter(){
    letter = '-';
    count = 0;
}

void Letter::addStudent()
{
    count++;
}

Letter::Letter(const Letter& other)
{
    copy(other);
}


bool Letter::operator<(const Letter& other) const
{
    return count > other.count;
}

Letter& Letter::operator=(const Letter& other)
{
    if (this != &other) {
	     copy(other);
    }
    return *this;
}

void Letter::copy(const Letter& other)
{
    count = other.count;
    letter = other.letter;
}

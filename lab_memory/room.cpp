/**
 * @file room.cpp
 */

#include <iostream>
#include "room.h"
using namespace std;

Room::Room(){
  capacity = 1024;
  count = 0;
  max_letters = 26;
  letters = new Letter[max_letters];
  letterCount = 0;

}

Room::Room(const string& init_name, int init_capacity)
{     name = init_name;
      capacity = init_capacity;
      count = 0;
      max_letters = 26;
      letterCount = 0;
      letters = new Letter[max_letters];
}

Room::Room(const Room& other)
{
    clear();
    copy(other);
}

Room& Room::operator=(const Room& other)
{
    if (this != &other) {
        copy(other);
    }
    return *this;
}

Room::~Room()
{
 if(letters != NULL){

 delete [] letters;
}

}

void Room::addLetter(const Letter& L)
{
    if(letterCount < max_letters){
      letters[letterCount].letter = L.letter;
      letters[letterCount].count = L.count;

      //cout << letters[letterCount].letter << endl;
      //cout << letters[letterCount].letter << endl;

      letterCount++;
      count += L.count;
    }
}

int Room::spaceRemaining(){
    return capacity - count;
}

void Room::print(std::ostream& stream /*= std::cout */ )
{
    stream << name << " " << count << " " << capacity << " " <<endl;
    for(int z = 0; z < letterCount; z++){
        stream << " " << letters[z].letter;
    }
    stream << endl;
}

void Room::clear()
{
    if (letters != NULL){

       delete [] letters;
       letters = NULL;}
}

void Room::copy(const Room& other)
{
    name = other.name;
    capacity = other.capacity;
    count = other.count;
    letterCount = other.letterCount;
    letters = other.letters;
    letters = new Letter[other.letterCount];
    for (int i = 0; i < letterCount; i++) {
	letters[i].letter = other.letters[i].letter;
	letters[i].count = other.letters[i].count;
    }
}

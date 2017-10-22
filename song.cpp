#include <iostream>
#include <cstring>
#include "song.h"
using namespace std;

ostream& operator<<(ostream& os, const Song& s){
//	os << title << (35 - strlen(title)) * " " << artist << (20 - strlen(artist)) * " ";
//	os << category << " " << size;
	os << title;
	return os;
}
Song::Song(){
	title[0] = 0;
	artist[0] = 0;
	category = POP;
	size = 0;
}


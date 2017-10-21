#include <iostream>
using namespace std;

#ifndef _SONG_H
#define _SONG_H

enum Style {POP, ROCK, ALTERNATIVE, COUNTRY, HIPHOP, PARODY};

class Song{
	friend ostream& operator<<(ostream& os, const Song& s);

public:
	Song();

	void Set(const char* t, const char* a, Style st, int sz);

	const char* GetTitle() const;
	const char* GetArtist() const;
	int GetSize() const;
	Style GetCategory() const;

private:
	char title[36];
	char artist[21];
	Style category;
	int size;
};

#endif

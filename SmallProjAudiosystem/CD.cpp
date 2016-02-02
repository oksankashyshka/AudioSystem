#include <fstream>
#include <iostream>

#include "CD.h"

//in each folder we have plenty of txt files with information about song
void CCD::load(std::string way_to_file, const int quantity_songs)
{
	std::string buffer;
	int duration_song;
	std::string s_title, s_lyrics;

	for (long i = 1; i <= quantity_songs; ++i)
	{
		//pattern for name of file [1..quantitySongs].txt
		std::ifstream in(way_to_file + std::to_string(i) + ".txt");
		if (!in)
			continue;
		//first line in our txt file belongs to title of song
		std::getline(in, buffer, '\n');
		s_title = buffer;
		//second line in out=r txt file belongs to duration in sec
		std::getline(in, buffer);
		duration_song = std::stoi(buffer);
		//what is left in txt file is part of lyrics
		while (!in.eof())
		{
			std::getline(in, buffer);
			s_lyrics += buffer;
			s_lyrics += "\n";
		}

		vec_songs_.push_back(Song(duration_song, s_title, s_lyrics));
	}
}

void CCD::showDevice() const
{
	std::cout << "You are working with CD." << std::endl;
}
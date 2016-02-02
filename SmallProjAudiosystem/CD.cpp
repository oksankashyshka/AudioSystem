#include <fstream>
#include <iostream>

#include "CD.h"

//in each folder we have plenty of txt files with information about song
void CCD::load(std::string sWay, const int quantitySongs)
{
	std::string buffer;
	int durationSong;
	std::string sTitle, sLyrics;

	for (long i = 1; i <= quantitySongs; ++i)
	{
		int durationSong;
		std::string sTitle, sLyrics = "No lyrics";

		//pattern for name of file [1..quantitySongs].txt
		std::ifstream in(sWay + std::to_string(i) + ".txt");
		if (!in)
			continue;
		//first line in our txt file belongs to title of song
		std::getline(in, buffer, '\n');
		sTitle = buffer;
		//second line in out=r txt file belongs to duration in sec
		std::getline(in, buffer);
		durationSong = std::stoi(buffer);
		//what is left in txt file is part of lyrics
		while (!in.eof())
		{
			std::getline(in, buffer);
			sLyrics += buffer;
			sLyrics += "\n";
		}
		vecSongs_.push_back(Song(durationSong, sTitle, sLyrics));
	}
}

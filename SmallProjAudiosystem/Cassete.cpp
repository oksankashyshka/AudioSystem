#include <fstream>
#include <iostream>

#include "Cassete.h"

//in each folder we have plenty of txt files with information about song
void CCassete::load(std::string sWay, const int quantitySongs)
{
	std::string buffer;
	int durationSong;
	std::string sTitle, sLyrics = "No lyrics";

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
		
		vecSongs_.push_back( Song(durationSong, sTitle, sLyrics) );
	}
}

void CCassete::showDevice() const
{
	std::cout << "You are working with Cassete." << std::endl;
}

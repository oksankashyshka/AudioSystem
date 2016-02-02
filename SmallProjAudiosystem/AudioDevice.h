//header to class CAudioDevice
#pragma once
#ifndef AUDIO_DEVICE_H_
#define AUDIO_DEVICE_H_

#include <vector>

#include "Song.h"

class CAudioDevice
{
public:
	CAudioDevice() = default;

	Song getSong(int numSong) const { return vecSongs_[numSong]; }
	int getCurrSong() const { return numCurrSong_; }//number of current song

	void setCurrSong(int numSong)
	{
		if ((numSong >= 0) && (numSong < vecSongs_.size())) numCurrSong_ = numSong;
	}

	virtual void load(std::string sAress, const int quantitySongs) = 0;//
	virtual void showDevice() const = 0;//pure virtual function

protected:
	std::vector<Song> vecSongs_;//here we will contain our songs
	int numCurrSong_;//number of current song
};

#endif //AUDIO_DEVICE_H_	

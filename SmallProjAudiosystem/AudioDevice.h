//header to class CAudioDevice
#pragma once
#ifndef AUDIO_DEVICE_H_
#define AUDIO_DEVICE_H_

#include <vector>

#include "Song.h"

class CAudioDevice
{
public:

	Song getSong(int num_song) const { return vec_songs_[num_song]; }
	int getCurrSong() const { return num_curr_song_; }//number of current song

	void setCurrSong(int num_song)
	{
		if ((num_song >= 0) && (num_song < vec_songs_.size())) num_curr_song_ = num_song;
	}

	virtual void load(std::string adress, const int quantity_songs) = 0;//
	virtual void showDevice() const = 0;//pure virtual function

	virtual ~CAudioDevice();
protected:
	CAudioDevice() = default;

	std::vector<Song> vec_songs_;//here we will contain our songs
	int num_curr_song_;//number of current song
};

#endif //AUDIO_DEVICE_H_	

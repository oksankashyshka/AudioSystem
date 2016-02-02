#pragma once

#ifndef SONG_H_
#define SONG_H_

#include <string>

class CSong
{
public:
	CSong() = default;
	
	CSong(const int durationSeconds, const std::string title, const std::string lyrics) :
		_durationSeconds{ durationSeconds }, _title{ title }, _lyrics{ lyrics }
	{}

	int GetDuration() { return _durationSeconds; }
	std::string GetTitle() { return _title; }	
	std::string GetLyrics() { return _lyrics; }

private:
	int _durationSeconds;//duration of song in seconds
	std::string _title;//singer or group + name of song
	std::string _lyrics;//small part of lyrics
};

#endif //SONG_H_
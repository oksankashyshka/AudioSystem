#pragma once

#ifndef SONG_H_
#define SONG_H_

#include <string>

struct Song
{
	Song() = default;
	
	Song(const int durationSeconds, const std::string title, const std::string lyrics) :
		durationSeconds_{ durationSeconds }, title_{ title }, lyrics_{ lyrics }
	{}

	int GetDuration() { return durationSeconds_; }
	std::string GetTitle() { return title_; }	
	std::string GetLyrics() { return lyrics_; }

	int durationSeconds_;//duration of song in seconds
	std::string title_;//singer or group + name of song
	std::string lyrics_;//small part of lyrics
};

#endif //SONG_H_
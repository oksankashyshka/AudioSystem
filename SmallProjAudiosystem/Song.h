//struct song header
#pragma once
#ifndef SONG_H_
#define SONG_H_

#include <string>

struct Song
{
public:
	Song() = default;

	Song(const int durationSeconds, const std::string title, const std::string lyrics) :
		durationSeconds_{ durationSeconds }, title_{ title }, lyrics_{ lyrics }
	{}

	int GetDuration() const { return durationSeconds_; }
	std::string GetTitle() const { return title_; }
	std::string GetLyrics() const { return lyrics_; }
private:
	int durationSeconds_;//duration of song in seconds
	std::string title_;//singer or group + name of song
	std::string lyrics_;//small part of lyrics
};

#endif //SONG_H_

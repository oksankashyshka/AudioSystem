//struct song header
#pragma once
#ifndef SONG_H_
#define SONG_H_

#include <string>

struct Song
{
 public:
  Song() = default;
  
  Song(const int& durationSeconds, const std::string& title, const std::string& lyrics) :
  	duration_in_seconds_( durationSeconds ), title_( title ), lyrics_( lyrics )
  {}
  
  int getDuration() const { return duration_in_seconds_; }
  std::string getTitle() const { return title_; }
  std::string getLyrics() const { return lyrics_; }
 private:
  int duration_in_seconds_;//duration of song in seconds
  std::string title_;//singer or group + name of song
  std::string lyrics_;//small part of lyrics
};

#endif //SONG_H_

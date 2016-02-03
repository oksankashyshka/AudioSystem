//class LoadSpeaker
#pragma once
#ifndef LOAD_SPEAKER_H_
#define LOAD_SPEAKER_H_

class CLoadSpeaker
{
 public:
  CLoadSpeaker() = default;
  
  //if volume less than 100, increase it
  CLoadSpeaker& operator++() 
  {
	  if (num_volume_ < MAX_VOL) ++num_volume_;
	  return *this; 
  }
  //if volume more than 0, decrease it
  CLoadSpeaker& operator--() 
  {
	  if (num_volume_ > MIN_VOL) --num_volume_;
	  return *this; 
  }
  
  int getVolume() { return num_volume_; }
  
 private:
  int num_volume_ = 50;
  
  const int MAX_VOL = 100;//here we declarate maximum size of volume
  const int MIN_VOL = 0;//here we declarate minimal size of volume
};

#endif //LOAD_SPEAKER_H_

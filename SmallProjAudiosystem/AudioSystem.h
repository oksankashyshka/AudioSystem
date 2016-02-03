//header to class CAudioSystem
#pragma once
#ifndef AUDIO_SYSTEM_H_
#define AUDIO_SYSTEM_H_

#include <vector>
#include <memory>

#include "Cassete.h"
#include "CD.h"
#include "LoadSpeaker.h"
#include "Song.h"

class CAudioSystem
{
 public:
  CAudioSystem();
  ~CAudioSystem();

 private:
  enum eDeviceType { eCD, eCassete };

  //void deleteDevice() { if (p_audio_device_ != nullptr) delete p_audio_device_; }
  void playCurrSong();//here we "play" our song
  //vars
  //CAudioDevice* p_audio_device_;
  CLoadSpeaker load_speaker_;
  std::vector<Song> vec_favourite_song_;
  eDeviceType device_type_ = eCD;//at first, our Audiodevice is CD
  bool system_on_ = false;//at first, our system is off

  //std::unique_ptr<CAudioDevice> p_audio_device_ = std::unique_ptr<CAudioDevice>(new CCD);

};

/*
	AudioSystem()
	{
		p_audio_device_ = nullptr;//we clear pointer of class Device
		setDevice(eCD);//here we load our CD
	}
	~AudioSystem()//here we delete our pointer
	{
		deleteDevice();
	}
	void run();//here is our menu
	void increaseVolume() { load_speaker_.Increment(); playCurrSong(); }
	void decreaseVolume() { load_speaker_.Decrement(); playCurrSong(); }
	void changeDevice() //here we change device
	{
		if (device_type_ == eCD)
			setDevice(eCassete);
		else
			setDevice(eCD);
		p_audio_device_->SetCurrSong(0);
	}
	bool OnOff();//turn of/onn our system
	void NextSong() { p_audio_device_->SetCurrSong(p_audio_device_->GetCurrSong() + 1); playCurrSong(); }
	void PrevSong() { p_audio_device_->SetCurrSong(p_audio_device_->GetCurrSong() - 1); playCurrSong(); }
	void setDevice(eDeviceType eType)//here we load device
	{
		deleteDevice();
		device_type_ = eType;
		if (eType == eCD)
		{
			p_audio_device_ = new (CD);
			((CD*)p_audio_device_)->Load("CD\\");
			((CD*)p_audio_device_)->ShowDevice();
			playCurrSong();
		}
		if (eType == eCassete)
		{
			p_audio_device_ = new (Cassete);
			((Cassete*)p_audio_device_)->Load("Cassete\\");
			((Cassete*)p_audio_device_)->ShowDevice();
			playCurrSong();

		}

	}
	AudioDevice* GetDevice() { return p_audio_device_; }
	void AddToFavourites(Song);
	void ShowFavourites();
	void DeleteFromFavourites();

};*/
#endif //AUDIO_SYSTEM_H_

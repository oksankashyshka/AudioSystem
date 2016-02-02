#ifndef AUDIO_DEVICE_H_
#define AUDIO_DEVICE_H_
	
#pragma once

#include <vector>


class CAudioDevice
{
public:
	CAudioDevice();
	~CAudioDevice();

	//vector<Song> m_vecSongs;//here we will contain our songs
	int m_nCurrSong;//number of current song
};

/*class AudioDevice
{
public:
	AudioDevice()//default construct
	{
		m_vecSongs.clear();//before work we clear our vector
		m_nCurrSong = 0;
	}
	virtual void ShowDevice() = 0;//pure virtual function
	Song GetSong(int nSong) { return m_vecSongs[nSong];}
	int GetCurrSong() { return m_nCurrSong; }//give us number of current song
	void SetCurrSong( int nSong ) 
	{ if ( nSong >= 0 && nSong < m_vecSongs.size() ) m_nCurrSong = nSong; } 
	virtual void Load(string sAress) = 0;//pure virtual function
//vars
	vector<Song> m_vecSongs;//here we will contain our songs
	int m_nCurrSong;//number of current song
	};*/

#endif

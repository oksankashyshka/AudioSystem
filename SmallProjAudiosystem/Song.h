#ifndef SONG_H_
#define SONG_H_

#pragma once
class CSong
{
public:
	CSong();
	~CSong();
};

/*
class Song
{
public:
Song()//default construct
{
m_sTitle = "";
m_sLyrics = "";
m_nSeconds = 0;
}
Song( string sTitle, int nSeconds, string sLyrics)//construct with parameters
{
m_sTitle = sTitle;
m_sLyrics = sLyrics;
m_nSeconds = nSeconds;
}

string GetTitle() { return m_sTitle; }	//function that give(return) to us title
string GetLyrics() { return m_sLyrics; }//function that give(return) to us lyrics
int GetDuration() { return m_nSeconds; }// -//- to us duration in sec
//var
private:
string m_sTitle;//singer or group + name of song
int m_nSeconds;//duration of song in seconds
string m_sLyrics;//small part of lyrics
};

*/

#endif
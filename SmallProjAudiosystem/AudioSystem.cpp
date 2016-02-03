#include "AudioSystem.h"


CAudioSystem::CAudioSystem()
{
}
/*
//here we "play" our song
void CAudioSystem::playCurrSong()
{
	if (system_on_ != true)
		return;
	int min, sec;
	system("cls");
	cout << p_audio_device_->GetSong(p_audio_device_->GetCurrSong()).GetTitle() << endl;
	min = (p_audio_device_->GetSong(p_audio_device_->GetCurrSong()).GetDuration()) / 60;
	sec = (p_audio_device_->GetSong(p_audio_device_->GetCurrSong()).GetDuration()) % 60;
	cout << (min < 10 ? "0" : "") << min << ":" <<
		(sec < 10 ? "0" : "") << sec << endl;
	cout << p_audio_device_->GetSong(p_audio_device_->GetCurrSong()).GetLyrics() << endl;
	cout << "Volume: " << load_speaker_.GetVolume() << " %" << endl;
	cout << endl;


}

CAudioSystem::~CAudioSystem()
{
}


#include <fstream>
#include <conio.h>

void AudioSystem::run()//here is our menu
{
	bool flag = false;
	while (!flag)
	{
		cout << "1.On/Off" << endl;
		cout << "2.Increase volume" << endl;
		cout << "3.Decrease volume" << endl;
		cout << "4.Change device. " << endl;
		cout << "5.Play next song." << endl;
		cout << "6.Play previous song." << endl;
		cout << "7.Add to favourites." << endl;
		cout << "8.Show favourites." << endl;
		cout << "9.Delete from favourites." << endl;
		cout << "10.Quit." << endl;
		int i = 0;
		//i = getch();
		cin >> i;
		//switch(i)
		switch (i)
		{
		case 1:
			OnOff();
			break;
		case 2:
			if (true == system_on_)
				increaseVolume();
			else
				cout << "Turn me on , I`m off !" << endl;
			break;
		case 3:
			if (true == system_on_)
				decreaseVolume();
			else
				cout << "Turn me on , I`m off !" << endl;
			break;
		case 4:
			if (true == system_on_)
				changeDevice();
			else
				cout << "Turn me on , I`m off !" << endl;
			break;
		case 5:
			if (true == system_on_)
				NextSong();
			else
				cout << "Turn me on , I`m off !" << endl;
			break;
		case 6:
			if (true == system_on_)
				PrevSong();
			else
				cout << "Turn me on , I`m off !" << endl;
			break;
		case 7:
			if (true == system_on_)
				AddToFavourites(p_audio_device_->GetSong(p_audio_device_->GetCurrSong()));
			else
				cout << "Turn me on , I`m off !" << endl;
			break;
		case 8:
			if (true == system_on_)
				ShowFavourites();
			else
				cout << "Turn me on , I`m off !" << endl;
			break;
		case 9:
			if (true == system_on_)
				DeleteFromFavourites();
			else
				cout << "Turn me on , I`m off !" << endl;
			break;
		case 10:
			flag = true;
			break;
		default:
			cout << "Incorrect answer" << endl;
			system("cls");
		}
	}
}

bool AudioSystem::OnOff()//turn of/onn our system
{
	system("cls");
	if (system_on_ == false)
	{
		system_on_ = true;
		cout << "Device is on" << endl;
		playCurrSong();
	}
	else
	{
		system_on_ = false;
		cout << "Device is off" << endl;
	}
	return system_on_;
}

void AudioSystem::AddToFavourites(Song S)
{
	vec_favourite_song_.push_back(S);
	playCurrSong();
	cout << "Song is add to favourites." << endl << endl;
}

void AudioSystem::ShowFavourites()
{
	playCurrSong();

	for (int i = 0; i < vec_favourite_song_.size(); i++)
	{
		int min, sec;
		cout << i + 1 << ": " << vec_favourite_song_[i].GetTitle() << " ";
		min = (vec_favourite_song_[i].GetDuration()) / 60;
		sec = (vec_favourite_song_[i].GetDuration()) % 60;
		cout << (min < 10 ? "0" : "") << min << ":" <<
			(sec < 10 ? "0" : "") << sec << endl;
	}
	cout << endl;
}

void AudioSystem::DeleteFromFavourites()//we delete last element of collection
{
	vec_favourite_song_.pop_back();
	ShowFavourites();
	cout << "Song is delete from favourites." << endl << endl;
}

*/
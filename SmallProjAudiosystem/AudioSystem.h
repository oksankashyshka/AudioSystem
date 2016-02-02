#pragma once
class CAudioSystem
{
public:
	CAudioSystem();
	~CAudioSystem();
};

/*
class AudioSystem
{
public:
	enum eDeviceType { eCD, eCassete };
	AudioSystem()
	{
		m_pDevice = NULL;//we clear pointer of class Device
		m_bCondition = false;//at first, our system is off
		m_eType = eCD;//at first, our Audiodevice is CD
		SetDevice(eCD);//here we load our CD
		PlayCurrSong();//here we "play" song
	}
	~AudioSystem()//here we delete our pointer
	{
		DeleteDevice();
	}
	void Run();//here is our menu
	void IncreaseVolume() { m_Speaker.Increment(); PlayCurrSong(); }
	void DecreaseVolume() { m_Speaker.Decrement(); PlayCurrSong(); }
	void ChangeDevice() //here we change device
	{
		if (m_eType == eCD)
			SetDevice(eCassete);
		else
			SetDevice(eCD);
		m_pDevice->SetCurrSong(0);
	}
	bool OnOff();//turn of/onn our system
	void NextSong() { m_pDevice->SetCurrSong(m_pDevice->GetCurrSong() + 1); PlayCurrSong(); }
	void PrevSong() { m_pDevice->SetCurrSong(m_pDevice->GetCurrSong() - 1); PlayCurrSong(); }
	void SetDevice(eDeviceType eType)//here we load device
	{
		DeleteDevice();
		m_eType = eType;
		if (eType == eCD)
		{
			m_pDevice = new (CD);
			((CD*)m_pDevice)->Load("CD\\");
			((CD*)m_pDevice)->ShowDevice();
			PlayCurrSong();
		}
		if (eType == eCassete)
		{
			m_pDevice = new (Cassete);
			((Cassete*)m_pDevice)->Load("Cassete\\");
			((Cassete*)m_pDevice)->ShowDevice();
			PlayCurrSong();

		}

	}
	AudioDevice* GetDevice() { return m_pDevice; }
	void AddToFavourites(Song);
	void ShowFavourites();
	void DeleteFromFavourites();
private:
	void DeleteDevice() { if (m_pDevice != NULL) delete m_pDevice; }
	void PlayCurrSong()//here we "play" our song
	{
		if (m_bCondition != true)
			return;
		int min, sec;
		system("cls");
		cout << m_pDevice->GetSong(m_pDevice->GetCurrSong()).GetTitle() << endl;
		min = (m_pDevice->GetSong(m_pDevice->GetCurrSong()).GetDuration()) / 60;
		sec = (m_pDevice->GetSong(m_pDevice->GetCurrSong()).GetDuration()) % 60;
		cout << (min < 10 ? "0" : "") << min << ":" <<
			(sec < 10 ? "0" : "") << sec << endl;
		cout << m_pDevice->GetSong(m_pDevice->GetCurrSong()).GetLyrics() << endl;
		cout << "Volume: " << m_Speaker.GetVolume() << " %" << endl;
		cout << endl;
	}
	//vars
	AudioDevice* m_pDevice;
	LoadSpeaker m_Speaker;
	bool m_bCondition;
	eDeviceType m_eType;
	vector<Song> sFavourites;
};*/

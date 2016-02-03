//header to class CD
#pragma once
#ifndef CD_H_
#define CD_H_

#include "AudioDevice.h"
class CCD :
	public CAudioDevice
{
public:
	CCD() = default;
	void load(const std::string& adress, const int& quantity_songs = 10) override;
	void showDevice() const override;
};

#endif//CD_H_

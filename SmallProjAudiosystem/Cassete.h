//header to class Cassete
#pragma once
#ifndef CASSETE_H_
#define CASSETE_H_

#include "AudioDevice.h"

class CCassete :
	public CAudioDevice
{
public:
	CCassete() = default;
	void load(std::string sAdress, const int quantitySongs = 10) override;
	void showDevice() const override;
};

#endif //CASSETE_H_

#pragma once
#include "Hand.h"
#include <string>
#include <iostream>

class GenericPlayer : public Hand {
private:
	std::string m_Name; // Имя игрока
public:
	GenericPlayer(const std::string& name = ""); 
	virtual ~GenericPlayer();
	virtual bool isHitting() const = 0; //Указывает, нужна ли игроку еще одна карта. Чистая виртуальная функция
	bool isBoosted() const; // Указывает, что у игрока перебор
	void Bust() const; //Объявляет, что у игрока перебор
};


GenericPlayer::GenericPlayer(const std::string& name) : m_Name(name) {}
GenericPlayer::~GenericPlayer() {}

bool GenericPlayer::isBoosted() const {
	return (GetTotal() > 21);
}

void GenericPlayer::Bust() const{
	std::cout << m_Name << " busts. \n";
}


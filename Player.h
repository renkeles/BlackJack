#pragma once
#include "GenericPlayer.h"
#include <string>

class Player : public GenericPlayer
{
public:
    Player(const std::string& name = "");

    virtual ~Player();

    // показывает, хочет ли игрок продолжать брать карты
    virtual bool IsHitting() const;

    // объявляет, что игрок победил
    void Win() const;

    // объявляет, что игрок проиграл
    void Lose() const;

    // объявляет ничью
    void Push() const;
};

bool Player::IsHitting() const
{
    std::cout << m_Name << ", do you want a hit? (Y/N): ";
    char response;
    std::cin >> response;
    return (response == 'y' || response == 'Y');
}

void Player::Win() const
{
    std::cout << m_Name << " wins.\n";
}

void Player::Lose() const
{
    std::cout << m_Name << " loses.\n";
}

void Player::Push() const
{
    std::cout << m_Name << " pushes.\n";
}

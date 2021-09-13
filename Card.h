#pragma once

enum class Suit { //Масть карты (трефы, бубны, червы и пики)
    CLUBS, DIAMONDS, HEARTS, SPADES
};
enum class Value { // Значение карты (туз, двойка, тройка и так далее)
    ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
};

class Card {
private:
    Suit _suit;
    Value _value;
    bool _faceDown;  //Указывает, как расположена карта — вверх лицом или рубашкой.Влияет на то, отображается она или нет
public:
    Card(Suit suit, Value value, bool faceDown) : _suit(suit), _value(value), _faceDown(faceDown) {}
    Suit getSuit() {
        return _suit;
    }
    Value getValue() { //Возвращает значение карты
        return _value;
    }
    bool getFaceDown() {
        return _faceDown;
    }

    bool setFaceDown(bool faceDown) {
        _faceDown = faceDown;

        return _faceDown;
    }

    bool Flip(Card& card) { //Переворачивает карту. Может использоваться для того, чтобы перевернуть карту лицом вверх или вниз
        return card.setFaceDown(!card.getFaceDown());
    }
};

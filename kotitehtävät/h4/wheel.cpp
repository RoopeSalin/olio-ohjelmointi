#include "wheel.h"

Wheel::Wheel() {}

Wheel::Wheel(int newSize, string newType) {
    setSize(newSize);
    setType(newType);
}

int Wheel::getSize() const {
    return size;
}

void Wheel::setSize(int newSize) {
    size = newSize;
}

string Wheel::getType() const {
    return type;
}

void Wheel::setType(const string &newType) {
    type = newType;
}


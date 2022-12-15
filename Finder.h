#pragma once
#include <iostream>

class Finder{
public:
	Finder();
	~Finder();
	void inputNumberCount();
	void inputList();
private:
	int list[100];
	int count, i, sum = 0, allSum = 0;
};

Finder::Finder()
{
}

Finder::~Finder()
{
}

void Finder::inputNumberCount() {
	std::cin >> this->count;
}

void Finder::inputList() {
	for (int i = 0; i < this->count; i++){
		std::cin >> list[i];
		sum += list[i];
	}
}
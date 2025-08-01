#pragma once
#include "IShape.h"
#include <stdio.h>
class Rectangle : public IShape {
public:
	void Size() override;
	void Draw() override;
private:
	int answer = 0;
};
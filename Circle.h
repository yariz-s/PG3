#pragma once
#include "IShape.h"
#include <stdio.h>
class Circle : public IShape {
public:
	void Size()override;
	void Draw()override;
private:
	float answer = 0;
};

#include "Circle.h"
#include <iostream>

void Circle::Size() {
	answer = radius * radius * 3.14f;
}

void Circle::Draw() {
	printf("円の面積: %.2f\n", answer);

}
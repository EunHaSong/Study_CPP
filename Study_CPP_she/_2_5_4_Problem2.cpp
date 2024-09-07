#include <iostream>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

typedef struct __Point {
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point& p1, const Point& p2) {

	Point * sum = new Point;
	
	sum->xpos = p1.xpos + p2.xpos;
	sum->ypos = p1.ypos + p2.ypos;

	return *sum;

}

int main(void) {

	Point* X = new Point;
	X->xpos = 1;
	X->ypos = 1;
	Point* X1 = new Point;
	X1->xpos = 1;
	X1->ypos = 1;

	Point & R = PntAdder(*X, *X1);

	cout << R.xpos << "," << R.ypos << endl;

	delete X;
	delete X1;
}
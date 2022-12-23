#include <iostream>

class CRectangleClass {

private:
	double x1;
	double x2;
	double y1;
	double y2;

public:
	CRectangleClass(double x1, double y1, double x2, double y2) {
		this->x1 = x1;
		this->y1 = y1;
		this->x2 = x2;
		this->y2 = y2;
	}

	bool isintersect(const CRectangleClass& other) {
		return !(this->y1 < other.y2 || this->y2 > other.y1 || this->x2 < other.x1 || this->x1 > other.x2);
	}
};

int main() {
	CRectangleClass A(1, 2, 2, 1);
	CRectangleClass B(2, 3, 4, 1);
	std::cout << A.isintersect(B);


	return 0;
}
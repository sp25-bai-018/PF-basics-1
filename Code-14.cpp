#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x1, y1, x2, y2, distance;

    cout << "Input x1 : ";
    cin >> x1;
    cout << "Input y1 : ";
    cin >> y1;
    cout << "Input x2 : ";
    cin >> x2;
    cout << "Input y2 : ";
    cin >> y2;

    distance = sqrt (pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "Distance between the points = " << distance;

    return 0;
}

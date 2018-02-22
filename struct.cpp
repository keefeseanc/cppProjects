#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    float x;
    float y;
};

float calculateDistance (Point* p1, Point* p2){
    float distance;
    distance = sqrt((p1->x - p2->x) * (p1->x - p2->x) + (p1->y - p2->y) * (p1->y - p2->y));
    return distance;
}

int main(){
    
    Point p1;
    Point p2;
    float distance = 0.0;
    
    cout << "\nEnter X1: ";
    cin >> p1.x;
    cout << "\nEnter Y1: ";
    cin >> p1.y;
    cout << "\nEnter X2: ";
    cin >> p2.x;
    cout << "\nEnter Y2: ";
    cin >> p2.y;
    
    distance = calculateDistance(&p1, &p2);
    cout << "\nDistance: " << distance;
    
    return 0;
}
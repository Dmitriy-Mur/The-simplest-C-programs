#include <iostream>
using namespace std;

void square();
void rectangel();
void triangle_lower_left();
void triangle_lower_right();
void triangle_top_left();
void triangle_top_right();
void triangle_top_middle();
void triangle_lower_middle();

int main() {
    int choice;
    while (true) {
        cout << "enter \"1\" to draw a square" << '\n';
        cout << "enter \"2\" to draw a rectangel" << '\n';
        cout << "enter \"3\" to draw a triangle with corner at bottom left" << '\n';
        cout << "enter \"4\" to draw a triangle with corner at bottom right" << '\n';
        cout << "enter \"5\" to draw a triangle with corner at top left" << '\n';
        cout << "enter \"6\" to draw a triangle with corner at top right" << '\n';
        cout << "enter \"7\" to draw a triangle with corner at the top in the middle" << '\n';
        cout << "enter \"8\" to draw a triangle with corner at the bottom in the middle" << '\n';
        cin >> choice;
        switch (choice) {
        case 1:
            square();
            break;
        case 2:
            rectangel();
            break;
        case 3:
            triangle_lower_left();
            break;
        case 4:
            triangle_lower_right();
            break;
        case 5:
            triangle_top_left();
            break;
        case 6:
            triangle_top_right();
            break;
        case 7:
            triangle_top_middle();
            break;
        case 8:
            triangle_lower_middle();
            break;
        }
        cout << '\n';
    }
    return 0;
}


void square() {
    int length;
    cout << "enter the length of the square leg: ";
    cin >> length;
    cout << '\n';
    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= length; j++) {
            cout << '*';
        }
        cout << '\n';
    }
}

void rectangel() {
    int wight;
    int hight;
    cout << "enter the length of the side of the rectangle: ";
    cin >> hight >> wight;
    cout << '\n';
    for (int i = 1; i <= wight; i++) {
        for (int j = 1; j <= hight; j++) {
            cout << '*';
        }
        cout << '\n';
    }
}

void triangle_lower_left() {
    int length;
    cout << "enter the length of the triangle leg: ";
    cin >> length;
    cout << '\n';
    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
}

void triangle_lower_right() {
    int length;
    cout << "enter the length of the triangle leg: ";
    cin >> length;
    cout << '\n';
    for (int i = 1; i <= length; i++) {
        for (int j = length; j >= i; j--) {
            cout << ' ';
        }
        for (int k = 1; k <= i; k++) {
            cout << '*';
        }
        cout << '\n';
    }
}

void triangle_top_left() {
    int length;
    cout << "enter the length of the triangle leg: ";
    cin >> length;
    cout << '\n';
    for (int i = 1; i <= length; i++) {
        for (int j = length; j >= i; j--) {
            cout << '*';
        }
        cout << '\n';
    }
}

void triangle_top_right() {
    int length;
    cout << "enter the length of the triangle leg: ";
    cin >> length;
    cout << '\n';
    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ' ';
        }
        for (int k = length; k >= i; k--) {
            cout << '*';
        }
        cout << '\n';
    }
}

void triangle_top_middle() {
    int height;
    cout << "enter the height of the triangle: ";
    cin >> height;
    cout << '\n';
    for (int i = 1; i <= height; i++) {
        for (int j = height; j >= i; j--) {
            cout << ' ';
        }
        for (int k = 1; k <= (i * 2 - 1); k++) {
            cout << '*';
        }
        cout << '\n';
    }
}

void triangle_lower_middle() {
    int height;
    cout << "enter the height of the triangle: ";
    cin >> height;
    cout << '\n';
    int currentHeight = height;
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ' ';
        }
        for (int k = (currentHeight * 2 - 1); k >= 1; k--) {
            cout << '*';
        }
        cout << '\n';
        currentHeight = currentHeight - 1;
    }
}


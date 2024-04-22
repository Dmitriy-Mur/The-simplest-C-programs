#include <iostream>
using namespace std;

int main() {
    int desiredNumber, sequenceLength, numberOfDesiredNumber, sequenceElement;
    bool desiredNumberFound = false;
    cout << "Введите длину последовательности и искомое число";
    cin >> sequenceLength >> desiredNumber;
    numberOfDesiredNumber = 1;
    while ((numberOfDesiredNumber <= sequenceLength) and (!desiredNumberFound)) {
        cin >> sequenceElement;
        if (sequenceElement == desiredNumber) {
            desiredNumberFound = true;
        }
        else {
            numberOfDesiredNumber++;
        }
    }
    if (desiredNumberFound) {
        cout << "Число " << desiredNumber << " встретилось под номером " << numberOfDesiredNumber;
    }
    else {
        cout << "Число " << desiredNumber << " не встретилось в последовательности";
    }
}


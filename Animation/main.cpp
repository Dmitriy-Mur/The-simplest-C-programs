#include <iostream>
#include <windows.h>

void toYCoord(unsigned yCoord);
void toXCoord(unsigned xCoord);
std::string TITLE = "SOMETEXT";
unsigned WIGHT = 63;
unsigned HIGHT = 28;
unsigned PAUSE = 160;

int main(int argc, char argv[]) {
    unsigned xCoord = 0;
    unsigned yCoord = 0;
    bool xDirectoion = true;
    bool yDirectoion = true;
    WIGHT = WIGHT - std::size(TITLE);
    while (true) {
        std::cout << TITLE;
        Sleep(PAUSE);
        xCoord += xDirectoion * 2 - 1;  //if true, then + 1, else -1
        yCoord += yDirectoion * 2 - 1;
        if (xCoord == 0) { xDirectoion = true; }
        if (yCoord == 0) { yDirectoion = true; }
        if (xCoord > WIGHT) { xDirectoion = false; }
        if (yCoord > HIGHT) { yDirectoion = false; }
        system("cls");
        toYCoord(yCoord);
        toXCoord(xCoord);
    }
    return 0;
}

void toYCoord(unsigned yCoord) {
    for (unsigned i = 0; i < yCoord; i++) {
        std::cout << '\n';
    }
}

void toXCoord(unsigned xCoord) {
    for (unsigned i = 0; i < xCoord; i++) {
        std::cout << "  ";
    }
}
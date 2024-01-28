#include <iostream>
using namespace std;

class door
{
private:
bool isOpen;
bool isLocked;
public:
 Door() : isOpen(false), isLocked(false) {}
void opendoor();
void closedoor();
void lockdoor();
bool isDoorOpen();
bool isDoorLocked();
};
h
void door::opendoor() {
    if (!isLocked)
        isOpen = true;
    else
        cout << "The door is locked. Cannot open.\n";
}
 void door::closedoor() {
    isOpen = false;
}

void door::lockdoor() {
    if (!isOpen)
        isLocked = true;
    else
        cout << "Cannot lock the door when it's open.\n";
}

int main()
{
}
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
void door::opendoor() {
    if (!isLocked)
        isOpen = true;
    else
        cout << "The door is locked. Cannot open.\n";
}
int main()
{
}
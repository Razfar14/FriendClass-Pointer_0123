#include <iostream>
using namespace std;

class mahasiwa{
    public:
        int nim;
        void showNim(){
            cout << "No Induk: " << nim << endl;
        }
};

int main(){
    mahasiwa mhs{1};
    mhs.showNim();

    mahasiwa &refMhs = mhs;
    refMhs.nim = 2;
    mhs.showNim();

    mahasiwa *ptrMhs = &mhs;
    ptrMhs->nim = 3;
    mhs.showNim();
    return 0;
}
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
    mahasiwa *mhs= new mahasiwa{1};
    mhs->nim = 2;
    mhs->showNim();
    delete mhs;
    return 0;
}
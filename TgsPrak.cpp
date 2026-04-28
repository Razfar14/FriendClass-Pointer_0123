#include <iostream>
using namespace std;

class belahketupat;
class layanglayang{
private:
    int d1, d2;
    int sisi1, sisi2;
public:
    void input(){  
        cout << "Masukkan Diagonal 1: ";
        cin >> d1;
        cout << "Masukkan Diagonal 2: ";
        cin >> d2;
        cout << "Masukkan Sisi 1: ";
        cin >> sisi1;
        cout << "Masukkan Sisi 2: ";
        cin >> sisi2;
    }
    int luas(){
         return (d1 * d2) / 2;
        
    }

    int keliling(){
        return 2 * (sisi1 + sisi2);
        
    }
    void output(){
        cout << "luas:" << luas() << endl;
        cout << "keliling:" << keliling() << endl;
    }

friend class belahketupat;
};

class belahketupat{
private:
    int d1, d2;
    int sisi;
public:
    void input(){  
        cout << "Masukkan Diagonal 1: ";
        cin >> d1;
        cout << "Masukkan Diagonal 2: ";
        cin >> d2;
        cout << "Masukkan Sisi: ";
        cin >> sisi;
    }
    int luas(){
         return (d1 * d2) / 2;
        
    }
    int keliling(){
        return 4 * sisi;
        
    }
    void output(){
        cout << "luas:" << luas() << endl;
        cout << "keliling:" << keliling() << endl;
    }
};

int main(){
    layanglayang ll;
    belahketupat bk;

    cout << "Layang-layang:" << endl;
    ll.input();
    ll.output();

    cout << "Belah Ketupat:" << endl;
    bk.input();
    bk.output();

    return 0;
}
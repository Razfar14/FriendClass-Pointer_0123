#include <iostream>
using namespace std;

class pelajar;
class manusia{
    public:
    void showNilaiDariPelajar(pelajar &x);

};

class pelajar{
    private:
        int nilai;
    public:

    pelajar(){nilai = 100;}
    friend void manusia::showNilaiDariPelajar(pelajar &x);
};

void manusia::showNilaiDariPelajar(pelajar &x){
    cout << x.nilai;
}

int main(){
    manusia budi;
    pelajar pbudi;
    budi.showNilaiDariPelajar(pbudi);
    return 0;
}
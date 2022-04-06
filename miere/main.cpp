#include <fstream>
using namespace std;

int nr,x,t;

int MA(int n)
{
    if(n<=40)return n-12;else return n-15;
}

int main()
{
    nr=0;
    t=0;

    ifstream fi("Miere.in");
        while(fi>>x){
            nr++;
            t=t+MA(x);
        }
    fi.close();

    ofstream fo("Miere.out");
        fo<<nr<<' '<<t;
    fo.close();

    return 0;
}

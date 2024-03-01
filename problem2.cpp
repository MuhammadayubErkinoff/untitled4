#include <iostream>
#include <utility>
#include <cmath>
#include <map>
using namespace std;



class Timer{
    int hours,minutes, seconds;
public:
    Timer(int h, int m, int s) {
        seconds=s%60;
        m+=s/60;
        minutes=m%60;
        h+=m/60;
        hours=h%24;
    }

public:
    void print(){
        cout<<hours<<":"<<minutes<<":"<<seconds<<"\n";
    }
};



int main() {
    int a,b,c;
    cin>>a>>b>>c;
    Timer t=Timer(a,b,c);
    t.print();
}


#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char nomi[10][20];
    char a[20];

    for(int x=0;x<20;x++){
        a[x]=' ';
    }
    for(int b=0;b<10;b++){
        for(int y=0;y<20;y++){
            nomi[b][y]=' ';
        }
    }

    for(int i=0;i<10;i++){
        cin>>nomi[i];
    }
    cin>>a;

    trova(nomi,a);

    return 0;
}

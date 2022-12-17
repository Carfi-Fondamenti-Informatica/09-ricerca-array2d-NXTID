#include <iostream>

void trova(char insieme[10][20],char n[20]){
    bool x=false;
    int posizione;

    for(posizione=0;posizione<10;posizione++){
        for(int a=0;a<20;a++){
            if(n[a]==insieme[posizione][a]){
                x=true;
            }else{
                x=false;
                a=20;
            }
        }
        if(x==true){
            std::cout<<posizione;
            break;
        }
    }
    if(x==false)
        std::cout<<"non presente";
}

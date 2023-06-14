#include <iostream>
#include <cstring>
using namespace std;
class BasketballPlayer{
private:
    char ime[20],prezime[20];
    int dres,p1,p2,p3;
public:
    BasketballPlayer(){
    }
    BasketballPlayer(char Ime[20],char Prezime[20],int Dres, int P1, int P2, int P3){
        strcpy(ime,Ime);
        strcpy(prezime,Prezime);
        dres=Dres;
        p1=P1;
        p2=P2;
        p3=P3;
    }
    ~BasketballPlayer(){
    }
    float avg(){
        float average;
        average=p1+p2+p3;
        return average/3;
    }
    void print(){
        cout<<"Player: "<<ime<<" "<<prezime<<" with number: ";
        cout<<dres<<" has "<<avg()<<" point on average"<<endl;
    };

};
int main() {
    BasketballPlayer player;
    int dres,p1,p2,p3;
    char ime[20],prezime[20];
    cin>>ime>>prezime>>dres>>p1>>p2>>p3;
    player=BasketballPlayer(ime,prezime,dres,p1,p2,p3);
    player.print();
    return 0;
}

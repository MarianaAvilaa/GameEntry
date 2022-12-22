#include <iostream>
#include "GameEntry.h"
#include "Scores.h"
using namespace std;
int main() {
    GameEntry Mariana("Mariana",100);
    GameEntry Andrew("Andrew",120);
    Scores s(5);
    s.add(Mariana);
    s.add(Andrew); //adding andrew begnning
    cout<<"Adding Andrew top:"<<endl;
    s.print();
    cout<<endl;

    GameEntry jay("jay",50);
    s.add(jay); //last entrie
    cout<<"Jay Last Entrie:"<<endl;
    s.print();
    cout<<endl;

    GameEntry bay("bay",70);
    s.add(bay); //adding bay to middle
    cout<<"Adding bay middle:"<<endl;
    s.print();
    cout<<endl;

    GameEntry loras("loras",20);
    s.add(loras); //adding loras last entries
    cout<<"Print Loras as last Entrie: " <<endl;
    s.print();
    cout<<endl;

    GameEntry ruby("ruby",40); //lower than all entries
    s.add(ruby);
    cout<<"Ruby as the lowest from all entries:"<<endl;
    s.print();
    cout<<endl;

    GameEntry dany("Dany",150); //highest than all entries
    s.add(dany);
    cout<<"Dany as highest than all entries"<<endl;
    s.print();

    return 0;
}

#include <cstdlib>
#include "Sequential.h"
#include "Linked.h"
#include <iostream>

using std::cout;
using std::endl;
using namespace std;

int main() {
    Sequential seq;
    seq.importTxt("NomeRG10.txt");
    seq.insertion();
    seq.showList();
    
    Linked lin;
    /*lin.insertEnd("otavio", 12);
    //lin.insertEnd("otavio", 3);
    //lin.insertEnd("otavio", 1);
    //lin.insertEnd("otavio", 1);
    //lin.insertEnd("otavio", 8);
    //lin.insertEnd("otavio", 6);
    //lin.insertEnd("otavio", 1);
    lin.insertEnd("otavio", -1);
    lin.insertEnd("otavio", 10);
    lin.insertEnd("otavio", 15);
    lin.insertEnd("otavio", 4);
    lin.insertEnd("otavio", 1000);
    lin.insertEnd("otavio", 1);*/
    //cout << "Antes" << endl;
    /*lin.importTxt("NomeRG10.txt");
    //lin.showList();
    lin.insertion();
    //cout << "Depois" << endl;
    lin.showList();*/

    return 0;
}


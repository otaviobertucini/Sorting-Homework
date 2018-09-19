#include <cstdlib>
#include "Sequential.h"
#include "Linked.h"
using namespace std;

int main() {
    /*Sequential seq;
    seq.importTxt("NomeRG10.txt");
    seq.mergeSort(0, 9);
    seq.showList();*/
    
    Linked lin;
    lin.importTxt("NomeRG10.txt");
    //lin.mergeSort(0, 9);
    lin.showList();

    return 0;
}


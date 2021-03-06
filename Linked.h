#ifndef LIST_H
#define LIST_H
#include "Node.h"
#include <string.h>
#include <fstream>
#include <string>
#include <stdlib.h>

class Linked {
public:
    Linked();
    ~Linked();
    void insertBeg(char* name, int rg, long = 0, long = 0);
    void insertEnd(char* name, int rg, long = 0, long = 0);
    void insertIndex(char* name, int rg, int index);
    void removeBeg(long = 0, long = 0);
    void removeEnd(long = 0, long = 0);
    void removeIndex(int index);
    void searchRg(int rg);
    void adjustPosition(Node* start, int amnt, long* m);
    void showList();
    void mergeSort();
    void insertion();
    void bubble();
    void exportTxt(char* name);
    void importTxt(char* name);
    void printInfo(char* name, int rg, long c, long m, 
         double time, char* action);
private:
    void merge(int begin, int end);
    Node* getIndex(int index);
    void swap(Node* node1, Node* node2);
    void split(Node* start, Node* a, Node* b);
    
    Node *first;
    Node *last;
    int n_nodes;
};

#endif /* LIST_H */


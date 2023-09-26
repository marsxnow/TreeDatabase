#include <iostream>
#include "tree.hpp"
using namespace std;

int main(){
    string intro = "hi there \n";
    Node <int>n1;
    Node <int>n2; 
    n1.setValue(5);
    n2.setLeft(&n1);
    cout<<(n1.getValue());
    n2.getLeft();
    return 0;
}
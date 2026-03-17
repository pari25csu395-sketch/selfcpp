#include <iostream>
#include <string>
using namespace std;

class Block{
    public:
    string shape;
    int size;

    void setBlock(string s , int sz){
        shape = s;
        size = sz;
    }
    void displayBlock(){
        cout << "Shape:" << shape << "Size:" << size << endl;
    }
};

int main() {
    Block b1 , b2;
    b1.shape = "square\n";
    b2.shape = "I\n";
    b1.size = 1;
    b2.size = 2;

    b1.displayBlock(); 
    b2.displayBlock();

return 0;
}
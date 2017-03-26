#include <iostream>

using namespace std;

void printBox(int, char, char);
void printMidLine(int, char, char);
void printFullLine(int, char);

int main() {

   printBox(15, '#', '@');


    return 0;
}

void printBox(int size, char ch, char spaceFill){
    printFullLine(size, ch);
        printMidLine(size, ch, spaceFill);
    printFullLine(size, ch );
}

void printFullLine(int size, char ch){

    for(int i = 1; i <= size; i++){
        cout << ch;
    }
    cout << endl;
}

void printMidLine(int size, char ch, char spaceFill){

    for(int i = 1; i <= size - 2; i++){
        cout << ch;
        for(int i = 1;  i <= size - 2; i++ ){
            cout << spaceFill;
        }
        cout << ch;
        cout << endl;
    }
}

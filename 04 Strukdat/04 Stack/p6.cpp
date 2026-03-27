#include <iostream>
using namespace std;

// ukuran stack
const int ukuran = 5;

// deklarasi stack
struct Stack {
    int data[ukuran];
    int top;
}; Stack s;

void createStack(){
    s.top = -1;
}

bool isEmpty(){
    if(s.top == -1){
        return true;
    } else {
        return false;
    }
}

bool isFull(){
    if(s.top == ukuran-1){
        return true;
    } else {
        return false;
    }
}

void pushStack(int data){
    if(!isFull()){
        s.top++;
        s.data[s.top] = data;
        cout << "Data: " << s.data[s.top] << " telah ditanbahkan\n";
    } else {
        cout << "Stack penuh!\n";
    }
}

void showStack(){
    if(!isEmpty()){
        cout << "Isi stack: ";
        for(int i = s.top; i>=0; i--){
            cout << s.data[i] << " ";
        }
    } else {
        cout << "Stack kosong!";
    }
}

int main(){
    createStack();
    pushStack(1);
    pushStack(2);
    pushStack(3);
    pushStack(4);
    pushStack(5);
    pushStack(1);
    showStack();

    return 0;
}
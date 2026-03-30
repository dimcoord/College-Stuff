#include <iostream>
#include <string>
using namespace std;

// ukuran stack
const int ukuran = 5;

// deklarasi stack
struct Stack {
    string data[ukuran];
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

void pushStack(string data){
    if(!isFull()){
        s.top++;
        s.data[s.top] = data;
        cout << "Data: " << s.data[s.top] << " telah ditanbahkan\n";
    } else {
        cout << "Stack penuh!\n";
    }
}

void popStack(){
    if(isEmpty()){
        cout << "Stack kosong!\n";
    } else {
        s.data[s.top] = "";
        s.top--;
        cout << "Pop berhasil!\n";
    }
}

void showStack(){
    if(!isEmpty()){
        cout << "Isi stack: ";
        for(int i = s.top; i>=0; i--){
            cout << s.data[i] << " ";
        } cout << "\n";
    } else {
        cout << "Stack kosong!\n";
    }
}

int main(){
    createStack();
    pushStack("Alpha");
    pushStack("Beta");
    pushStack("Charlie");
    pushStack("Delta");
    // pushStack("Echo");
    // pushStack("Foxtrot");
    showStack();
    popStack();
    showStack();
    popStack();
    showStack();
    popStack();
    showStack();
    popStack();
    showStack();
    popStack();
    showStack();

    return 0;
}
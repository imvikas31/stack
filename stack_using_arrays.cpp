#include<bits/stdc++.h>
using namespace std;

class ArrayStack{
    public:
    int* arr;
    int s;
    int topIndex;

    ArrayStack(int s = 1000){
        this->s = s;
        topIndex = -1;
        arr = new int[s];
        cout<<"Stack Created\n";
    }

    void push(int data){
        if(topIndex == s-1){
            cout<<"stack overflow\n";
            return;
        }
        topIndex++;
        arr[topIndex] = data;
        cout<<data<<" added to the stack\n";
    }


    ~ArrayStack(){
        delete[] arr;
    }

};

int main(){

    ArrayStack s1(5);

    


    s1.push(10);
    

    return 0;

}
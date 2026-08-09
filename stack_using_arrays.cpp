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
    int pop(){
        if(topIndex == -1){
            cout<<"Stack Empty\n";
            return -1;
        }

        int topElement = arr[topIndex];
        topIndex--;
        return topElement;
    }

    int top(){
        return arr[topIndex];
    }

    bool isEmpty(){
        if(topIndex == -1){
            return true;
        }

        return false;
    }

   void display() {
    cout << "Stack elements are: ";

    for(int i = topIndex; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    cout << endl;
}
    ~ArrayStack(){
        delete[] arr;
    }

};

int main(){

    ArrayStack s1(5);

if(s1.isEmpty() == 1){
        cout<<"Stack is Empty"<<endl;
    }else{
        cout<<"Stack is Empty"<<endl;
    }


cout<<endl;
    s1.display();

    cout<<"Element removed: "<<s1.pop()<<endl;

    s1.display();
    cout<<endl;

    s1.push(20);
    s1.display();
    cout<<endl;

    s1.push(30);
    cout<<endl;
    s1.display();
    cout<<endl;

    s1.push(40);
    cout<<endl;
    s1.display();
   
    cout<<"Element removed: "<<s1.pop()<<endl;
    cout<<"Top Element : "<<s1.top()<<endl;

    cout<<endl;

    s1.push(50);
    cout<<endl;
    s1.display();
    cout<<endl;

     if(s1.isEmpty() == 1){
        cout<<"Stack is Empty"<<endl;
    }else{
        cout<<"Stack is Not Empty"<<endl;
    }


    cout<<"Top Element : "<<s1.top()<<endl;
    return 0;

}
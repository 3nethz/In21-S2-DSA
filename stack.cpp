#include <bits/stdc++.h>
#define MAX 20

using namespace std;
using namespace std::chrono;

int stack_arr[MAX];
int top = -1;

void push(int x){
    if(top < MAX){
        top++;
        stack_arr[top] = x;
    }
    else{
        std:: cout << "Stack Overflow";
    }
}

int pop(){
    if(top != -1){
        int value = stack_arr[top];
        top--;
        return value;
    }
    else{
        std:: cout << "Stack Underflow";
        exit(1);
    }
}

void display(int arr[]){
    for (int i = 0; i <= top; i++)
    {
        cout << stack_arr[i] << " " ;
    }
}


int main(){
    auto start = high_resolution_clock::now();

    push(8);
    push(10);
    push(5);
    push(11);
    push(15);
    push(20);
    push(9);
    push(7);
    push(30);
    push(4);
    display(stack_arr);
    pop();
    pop();
    pop();
    pop();
    pop();
    display(stack_arr);
    push(9);
    push(10);
    push(18);
    push(42);
    display(stack_arr);

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);
 
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;

}




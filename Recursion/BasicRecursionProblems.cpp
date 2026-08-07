/*
------------------------------------------------------------
Language  : C++
Author    : Harsh Pandey

Description:
In this programm I have created 7 basic recursive programms
i.e. print_1_to_n, print_n_to_1, sum, fibonacchi, factorial
array reversal and power.

Key Idea:
Just solve the single problem out of a huge task and leave
the rest to the same function to solve. 

Key terms:
Call stack, backtracking, recurssion tree

------------------------------------------------------------
*/
#include <iostream>
using namespace std;

void print_n_to_1(int n) {
    if (n==1) {
        cout << 1 << endl;
        return;
    }
    cout << n << " ";
    print_n_to_1(n-1);
}

void print_1_to_N(int n) {
    if (n==1) {
        cout << 1 << " ";
        return;
    }
    print_1_to_N(n-1);
    cout << n << " ";
}

int power(int x, int n){
    if (n==0) {
        return 1;
    }
    return x * power(x, n-1);
}

int sum(int n){
    if (n==0) {
        return 0;
    }
    return n + sum(n-1);
}

void reverse(int arr[], int start, int end) {
    if (start < end) {
        swap(arr[start], arr[end]);
        reverse(arr, start+1, end-1);
    }
}

void display (int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int fibonacchi(int n) {
    if (n==0 || n==1) {
        cout << 1 << " ";
        return 1;
    }
    int num = n * fibonacchi(n-1);
    cout << num << " ";
    return num;
}

int factorial(int n) {
    if (n==1) {
        return 1;
    }
    return n * factorial(n-1);
}


int main () {
    int arr[] = {5,4,3,2,1};
    string name = "abcbc";
    print_n_to_1(10);
    print_1_to_N(10);
    cout << endl << power(5, 4);
    cout << endl << sum(10) << endl;
    reverse(arr, 0, 4);
    display(arr, 5);
    fibonacchi(5);
    cout << endl << factorial(7);
    return 0;
}
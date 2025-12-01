#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Arrays are contsant and we can't modify it
    // Vectors are dynamic and we can add, remove elements

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    // Using pair
    vector<pair<int, int>> p;
    p.push_back({1,2});
    // syntax is changed for emplace_back(it is also faster than push_back)
    p.emplace_back(3,4);

    vector<int> s(5, 100); // {100,100,100,100,100}
    vector<int> s2(5); // {0,0,0,0,0} or any garbage instances depends on the compiler and despite of giving the size we can push,empace value to it so it will dynamically allocate it on the back

    vector<int> s3(5,20);
    vector<int> s4(s3);// pass by value so it will copy the s3
    // we can access the elements what we do using arrays and v.at() but v[] is preffered



}


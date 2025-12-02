#include<bits/stdc++.h>

bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // If they are same then its ok
    // BUT
    if(p1.first > p2.first) return true; // then descending
    // Otherwise
    return false;

    // Whenever you try to write a comparator always analyze everything in terms of pairs(not arrays or vectors), just pick one pair and second pair and try to analyze them

}

void someAlgorithms(){
    int a[4] = {4, 3, 2, 1};
    // sorting array
    sort(a, a+4);

    // sorting vectors
    sort(a.begin(), a.end());

    // to sort the portion of an array
    sort(a+2, a+4);
    
    // sorted array in a descending order or reverse, the portion
    sort(a, a+n, greater<int>/*comparator*/);

    pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};
    /*
    sort it according to second element,
    if second element is same then sort it according to first element but in descending
    */
    // My way(striver)
    sort(a, a+n, comp);
    // {{4, 1}, {2, 1}, {1, 2}};


    int num = 7;
    int cnt = __builtin_popcount();


    long long num = 165786578687;
    int cnt = __builtin_popcountll();

    string s = "123";

    do{
        cout<< s << endl;
    } while(next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a,a+n);

}
#include<bits/stdc++.h>
using namespace std;
// C++ STL

// Algorithms
// Containers
// Functions
// Iterators

//CONTAINERS
//Pairs
void explainPair() {
    pair<int, int>p = {1, 3};
    cout<<p.first<<" "<<p.second;

    pair<int, pair<int, int>> p = {1, {2, 3}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}}; //it lies in Utility Library
    cout<<arr[1].second; //4
}

//Vectors
void explainVector() {
    vector<int>v;

    v.push_back(1);
    v.emplace_back(2); //faster 

    vector<pair<int, int>>vec;
    
    v.push_back({1, 2});
    v.emplace_back(1, 2); //assumes pair without {}

    vector<int>v(5, 100); //{100, 100, 100, 100, 100};
    vector<int>v(5);

    vector<int>v1(5, 20);
    vector<int>v2(v1); //copy of v1

    //it points to the memory address
    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";

    it = it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it = v.end(); //end will point to right after last element

    vector<int>::iterator it = v.rend(); //reverse end ~ point before begining 

    vector<int>:: iterator it = v.rbegin(); //it will point last element m/m add
                                            // it++ it will move to prev ele

    cout<<v[0]<<" "<<v.at(0);

    cout<<v.back()<<" ";


    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<<*(it)<<" ";
    }

    for(auto it = v.begin(); it != v.end(); it++){ //here auto = vector<int>::iterator
        cout<< it<<" ";
    }

    for(auto it: v){ //for each loop //here auto is datatype
        cout<<it<<" ";
    }

    //{10, 20, 12, 23}
    v.erase(v.begin()+1); //{10, 12, 23} //erase single ele

    //{10, 20, 12, 23, 35}
    v.erase(v.begin()+2, v.begin()+4) // {10, 20, 35} // [start, end]


    //Insert function
    
    vector<int>v(2, 100) //{100, 100}
    v.insert(v.begin(), 300) //{300, 100, 100}
    //       pos, occurences, ele
    v.insert(v.begin()+1, 2, 10) // {300, 10, 10, 100, 100}

    vector<int>copy(2, 50); //{50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); //{50, 50, 300, 10, 10, 100, 100}

    //{10, 20}
    cout<<v.size(); //2

    //{10, 20}
    v.pop_back(); //{10}

    //v1 -> {10, 20}
    //v2 -> {30, 40}
    v1.swap(v2); // v1 -> {30, 40} , v2 -> {10, 20}

    v.clear(); //erases the entire vector

    cout<< v.empty();

}

//List

void explainList() {
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2, 4}

    //insert function in vector is costly as compared to list as singly LL is maintained for vector and double LL is maintained for list

    ls.push_front(5); // {5, 2, 4}

    ls.emplace_front(4); //{4, 5, 2, 4}

    //rest functions same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap, size
}

//Deque

void explainDeque() {
    
    deque<int>dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); //{1, 2}
    dq.push_front(3); //{3, 1, 2}
    dq.emplace_front(4); // {4, 3, 1, 2}

    dq.pop_back(); //{3, 4, 1}
    dq.pop_front(); //{4, 1}

    dq.back(); 

    dq.front();

    //rest functions same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap, size
}

//Stack

void explainStack() { //LIFO

    stack<int>st;
    st.push(1); //{1}
    st.push(2); //{2, 1}
    st.push(3); //{3, 2, 1}
    st.push(4); //{4, 3, 2, 1}
    st.emplace(5); // {5, 4, 3, 2, 1}

    cout<< st.top(); //prints 5 "** st[2] is invalid **"

    st.pop(); // st looks like {3, 3, 2, 1}

    cout<< st.top(); //3

    cout<< st.size(); //4

    cout<< st.empty();

    stack<int>st2, st2;
    st1.swap(st2);

    //All operations are TC:O(1)
}

//Queue

void explainQueue() { //FIFO
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1, 2}
    q.emplace(4); //{1, 2, 4}

    q.back() += 5; //{1, 2, 9}

    cout<<q.back(); //prints 9

    cout<< q.front(); //prints 1

    q.pop(); //{2, 9}

    cout<< q.front(); //prints 2

    //All operations are TC:O(1)
    //size , swap, empty functions same as stack

}

//Priority Queue ~ a tree is maintained internally

void explainPQ() {
    //Max Heap
    priority_queue<int>pq;

    pq.push(5); //{5}
    pq.push(2); //{5, 2}
    pq.push(8); //{5, 2, 8}
    pq.emplace(10); //{10, 8, 5, 2}

    cout << pq.top(); //prints 10

    pq.pop(); //{8, 5, 2}

    cout<<pq.top(); //prints 8

    //size , swap, empty functions same as others
    
    //Min Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); //{5}
    pq.push(2); //{2, 5}
    pq.push(8); //{2, 5, 8}
    pq.emplace(10); //{2, 5, 8, 10}

    cout << pq.top(); //prints 2

    //push TC: O(logn)
    //pop TC: O(logn)
    //top TC:O(1)
}

//set ~ a tree is maintained
//sorted and unique

void explainSet() {
    set<int>st;
    st.insert(1); //{1, 2, 3, 4}
    st.emplace(2); //{1, 2}
    st.insert(3); //{1, 2, 3}
    st.insert(4); //{1, 2, 3, 4}

    //Functionality of insert in vector
    //can be used also, that only increase efficiency

    //begin(), end(), rbegin(), rend(), size()
    //empty() and swap() are same as those of above

    //{1, 2, 3, 4, 5}
    auto it = st.find(3); //returns iterator which points to this 3

    //{1, 2, 3, 4, 5}
    auto it = st.find(6); // if an ele is not in the set, it return st.end()

    //{1, 4, 5}
    st.erase(5); //erases 5 //takes logarithmic time

    int cnt = st.count(1); // returns 1 if exists else returns 0

    auto it = st.find(3);
    st.erase(it); // it takes both ele and address of ele TC:O(1)

    //{1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); //after erase {1, 4, 5} [first, last]

    //lower_bound() and upper_bound() function works in the
    //same way as in vector it does

    //This is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

    // all functions TC of set : O(log n)
}

//MultiSet

void explainMultiSet() {
    // Everything is same as set
    // but it stores duplicate elements also in sorted order

    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1, 1}
    ms.insert(1); //{1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1); 

    //only a single one erased
    ms.erase(ms.find(1));

    //erase two 1s
    ms.erase(ms.find(1), ms.find(1)+2);

    //rest all functions are same as set
}

//unordered set

void explainSet() {
    unordered_set<int> st;
    //lower_bound and upper_bound function doesn't works
    //rest all functions are same as above
    //it doesn't stores in any particular order 
    //it has better complexity
    //then set in most cases, except some when collision happens

    //avg case TC: O(1)
    //worst case TC: O(n)
}

//Map

void explainMap() {
    //it stores unique keys and in sorted order
    // key, value
    map<int, int> mpp;

    map<int, pair<int, int>> mpp;

    map< pair<int, int>, int>> mpp;

    mpp[1] = 2;
    mpp.emplace({3, 1});

    mpp.insert({2, 4});

    //mpp[key] = value;
    mpp[{2, 3}] = 10;

    // {
    //     {1, 2}
    //     {2, 4}
    //     {3, 1}
    // }

    for(auto it: mpp){
        cout << it.first << " " << it.second << endl; //1 2
    }

    cout<< mpp[1];
    cout<< mpp[5]; // if doesn't exits, it returns 0

    auto it = mpp.find(3) // accesses address of 3
    cout<< *(it).second;

    auto it = mpp.find(5); //if 5 doesn't exits, it points to mpp.end() which is after the map

    //This is the syntax
    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);

    //erase, swap, size, empty  same as above
}

//Multi map

void explainMultiMap() {
    //everything same as map, only it can store multiple keys
    //only mpp[key] cannot be used here
}

// Unordered map

void explainUnorderedMap() {
    //same as set and unordered_Set difference
}


//EXTRA

bool comp(pair<int, int>p1, pair<int, int>p2){
    if(p1.second < p2.second){
        return true;
    }
    else if(p1.second == p2.second){
        if(p1.first > p2.first)
            return true;
    }
}

void explainExtra() {

    sort(a, a+n);
    sort(v.begin(), v.end());

    sort(a+2, a+4);

    sort(a, a+n, greater<int>); //descending order

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    //sort it acc. to second element
    // if second element is same, 
    // then sort it acc. to first element but in descending

    sort(a, a+n, comp);

    // {{4, 1}, {2, 1}, {1, 2}}

    int num = 7; // 0000....111 //32 bit
    int cnt = _builtin_popcount(); // return number of set bits

    long long num = 165786578687;
    int cnt = _builtin_popcountll(); // for long long

    string s = "123";

    //prints all permutations of the string
    //for "123" = {123, 132, 213, 231, 312, 321, null}
    //for "231" = {231, 312, 321, null}

    //if you want to print all the permutations , you need to sort it by sort(s.begin(), s.end());
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(), s.end())); 


    int maxi = *max_element(a, a+n); //it returns max ele
    int mini = *min_element(a, a+n) 
}


//=================================================================================//
//Binary Search

void explainBS {
    int a[] = {1, 4, 5, 8, 9};
    int n = 5;
    bool res = binary_search(a, a+n, 3);

    //TC of binary_search : O(log n) 
}


//UPPER_BOUND function
//It returns the element if exists and if not it returns NGR

void explainLB {

    int n = 6;
    int a[] = {1, 4, 5, 6, 9, 9};

    int ind = lower_bound(a, a+n, 4) - a; // ind 1

    //if 7 doesn't exist, it'll return NGR (next greater right)
    int ind = lower_bound(a, a+n, 7);  // ele 9

    //it'll return index of the element (not the element)
    int ind = lower_bound(a, a+n, 7) - a;  // ind 4

    int ind = lower_bound(a, a+n, 10) - a; // ind 6 as neither 10 exits nor NGR exist of 10 

    //for vector
    int ind = lower_bound(a.begin(), a.end(), x) - a.begin();
}

//UPPER_BOUND
//It returns NGR of the element only whether it exists or not

void explainLB {

    int ind = upper_bound(a, a+n, 4) - a; // ind 2

    int ind = upper_bound(a, a+n, 7) - a; // ind 4

    int ind = upper_bound(a, a+n, 10) - a; // ind 6 out of bound

    //for vector
    int ind = upper_bound(a.begin(), a.end(), x) - a.begin();

    //TC of lower_bound & upper_bound : O(log n) 

}


int main(){
    return 0;
}
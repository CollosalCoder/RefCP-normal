#include<bits/stdc++.h>
#define output(x) for(auto k : x) cout<<k<<'\t'; cout<<'\n'
using namespace std;
int main()
{   // strings
/*  string a = "hatti";
string b = a+a;
cout<<b<<"\n"; // hattihatti
b[5] = 'v';
cout<<b<<"\n"; // hattivatti
string c = b.substr(3,4);
cout<<c<<"\n"; // tiva        */
    // sets : 2 types
// normal (structured) sets : 'set' uses a balanced binary tree
// has a few functions more than unordered_set and maintains order
// 'unordered_set' : uses Hashing works in O(1)
// more efficient
//  sets contain unique elements only i.e if '10' is inserted twice, second time is discarded/disregarded.
// The elements can't be accessed like normal arrays/vectors, but the fact that all elements are unique is sufficient
// to access any specific element directly.
// sets can be used when 'order' or position of data in a data set has meaning
// unordered_set can be used when only presence of a particular piece of data in a set has meaning
/*     set<int> s;
        s.insert(3);
        s.insert(2);
        s.insert(5);
        s.insert(2);
        cout<<s.size()<<"\t"<<s.empty()<<"\n";  // size(): represents number of elements, empty()=0 (here) since non-empty set
        output(s);   //  2  3  5 : maintains an ascending order by default
        set<int> s_copy(s.begin(),s.end());     // Using copy contructor to copy elements in second set s_copy
        output(s_copy);   // 2  3  5
    cout << s.count(3) << "\n"; // 1  ; since elements are unique, count() returns either 0 or 1 (only)
    cout << s.count(4) << "\n"; // 0
        s.erase(3);
        s.insert(4);
    cout << s.count(3) << "\n"; // 0
    cout << s.count(4) << "\n"; // 1
    cout<<"\n";
     output(s);
     s.erase(s.find(4));         // find(): returns iterator to element
     output(s);
    unordered_set<int> q;
    q.insert(10);
    q.insert(56);
    q.insert(15);            // ouput and insertion are completely random, no specific order followed
    output(q);               // i.e. unordered_set
    if(q.find(5)==q.end())   // when an element is not found in a set it returns the end() iterator
    output(q);
    s_copy.insert(10);
    s_copy.insert(22);
    s_copy.insert(1);
    output(s_copy);
    cout<<*s_copy.upper_bound(5)<<"\t"<<*s_copy.lower_bound(5)<<"\n";
    s_copy.insert(18);      //  s_copy : 1   2   3   5   10   18   22
    // lower_bound returns iterator to that element(x) or one which will definitely not be less than x
    cout<<*s_copy.lower_bound(15)<<"\t"<<*s_copy.upper_bound(5);   // returns 18 since its smallest number greater than 15
        // upper_bound returns iterator to first element after x                          */
      //  multiset :  stores multiple instances
      // and also unordered_multiset
    /*  multiset<int> z;
      z.insert(5);
      z.insert(5);
      z.insert(5);
      cout<<z.count(5)<<"\n";  // 3
      z.erase(z.find(5));     // erases single instance
      cout<<z.count(5)<<"\n";  // 2
      z.erase(5);     // erases all instances of 5
      cout<<z.count(5);  // 0                    */
// map
// consists of <key,value> pairs, similar to index in an array like <index,x[index]> but much more versatile
// key can be of any data type and need not be consecutive
// 2 types :  map and unordered_map
/*      map<string,int> m;
        m["monkey"] = 4;
        m["banana"] = 3;
        m["harpsichord"] = 9;
      cout << m["banana"] << "\n"; // 3
    // similar to vector pair, follows similar principles
    cout<<m["ibnbatuta"]<<"\n";  // 0
    // ibnbatuta doesn't exist so new key gets created with this value and default assigned 0
    if(m.count("ibnbatuta"))    // same as set (since keys are unique)
      cout<<"Key exists"<<"\n";
    m.insert(pair<string,int>("babushka",23));
    for(auto i : m)
    cout<<i.first<<"\t"<<i.second<<"\n";      // keys are arranged in dictionary order   */
// bitset : higly memory efficient since each element takes one bit of memory
// But size to be known at compile time !
// for comparison an int array of size n takes 32n bits of memory whereas bitset takes n bits of memory
/*   bitset<10> s;   // On declaration, all elements are set to 0 by default
    s[3]=1;
    s[5]=1;
    s[2]=1;
    s[7]=1;
    cout<<s.count()<<"\n";    // 4 i.e. count() gives back the number of ones in the set
    cout<<s[4]<<"\t"<<s[5]<<"\t"<<s[6]<<"\n";
// If we want a completely defined bitset
    bitset<10> s1(string("0010011010")); // ```allocation of bits from right to left !!!```
    cout << s1[4] << "\n"; // 1
    cout << s1[5] << "\n"; // 0
// All bit operations can be performed on the bitset directly
    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));
    cout << (a&b) << "\n"; // 0010010000
    cout << (a|b) << "\n"; // 1011111110
    cout << (a^b) << "\n"; // 1001101110
    // s1 = 0010011010
    s1.set(0);        // by deafault set() sets bit to 1
    s1.set(7,0);      // else set value can be passed
    s1.set(9,1);      // 1000011011
    cout<<s1<<"\n";   // bits are displayed as assigned, Note only the array-style indexing has been reversed
    s1.flip(8);       // flips the bit at given index -> 1100011011
    s1.flip();        // flips the entire set if no argument is passed
    cout<<s1<<"\n";   // 0011100100
    s1.reset();       // reset() performs literally what you wrote :)
    cout<<s1<<"\n";   // 0000000000
    if(a.any())                                   // any() returns 1 if bitset has atleast one set bit
    cout<<"'a' has some(atleast 1) set bit\n";
    if(!b.none())                                 // none() returns 1 if bitset has NO set bits
    cout<<"'b' has some(atleast 1) set bit\n";
  ////// Converting a decimal number to binary using bitset
  int num=100;
  bitset<8> g=bitset<8>(num);
  cout<<"Binary representation of num=100 is "<<g<<"\nOr can be printed directly as "<<bitset<8>(num)<<"\n";   */
// deque : like vector array, ```has all the functions of vector``` : benifit of push_front and pop_front
// Refer Vectorstud for all operations.
// demerits : slower than vector
// Insertion and removal both take O(1) time.
/*    deque<int> d;
    d.push_back(5); // [5]
    d.push_back(2); // [5,2]
    d.push_front(3); // [3,5,2]
    output(d);
    d.pop_back(); // [3,5]
    d.pop_front(); // [5]               */
// Stack And Queue Sequential element access for all purposes
// In stack only top element is accesible, whereas the top and bottom elements are accesible in a queue
/*    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(5);
    cout<<s.empty()<<endl;  // returns 0 as stack is not empty
    cout << s.top()<<endl; // 5
    s.pop();
    cout << s.top()<<endl; // 2
    queue<int> q;
    q.push(3);
    q.push(2);
    q.push(5);
    cout << q.front()<<endl; // 3
    q.pop();
    cout << q.front()<<endl; // 2                     */
    // 2 more functions common to both are empty() and size() which return status(empty/not empty) and size respectively.
// Priority Queue : similar to Ordered set (balanced binary tree), but works on a heap structure
// Simple explanation:  execution(implementation) is similar to stack but defined priority
// i.e. by default sorted in decreasing order (max heap)
/*  priority_queue<int> q;
// For smallest element (min heap)(Using a different priority order)
// we can define as
// priority_queue<int,vector<int>,greater<int>> q;
      q.push(3);
      q.push(5);
      q.push(7);
      q.push(2);
      cout << q.top() << "\n"; // 7
      q.pop();
      cout << q.top() << "\n"; // 5
      q.pop();
      q.push(6);
      cout << q.top() << "\n"; // 6
      q.pop();         */
    return 0;
}


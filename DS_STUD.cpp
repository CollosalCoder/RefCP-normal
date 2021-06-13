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
// bitset : hihgly memory efficient since each element takes one bit of memory
//for comparison an int array of size n takes 32n bits of memory whereas bitset takes n bits of memory
    bitset<10> s;   // On declaration, all elements are set to 0 by default
    s[3]=1;
    s[5]=1;
    s[2]=1;
    s[7]=1;
    cout<<s.count()<<"\n";    // 4 i.e. count() gives back the number of ones in the set
    cout<<s[4]<<"\t"<<s[5]<<"\t"<<s[6]<<"\n";
// If we want a completely defined bitset
    bitset<10> s1(string("0010011010")); // allocation of bits from right to left
    cout << s1[4] << "\n"; // 1
    cout << s1[5] << "\n"; // 0
// All bit operations can be performed on the bitset directly
    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));
    cout << (a&b) << "\n"; // 0010010000
    cout << (a|b) << "\n"; // 1011111110
    cout << (a^b) << "\n"; // 1001101110
    return 0;
}

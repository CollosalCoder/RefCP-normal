// Policy based data structures:
// There are some data structures supported by g++ but not a part of C++ STL
// Useful when certain properties are required from data structures
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define output(x) for(auto k : x) cout<<k<<'\t'; cout<<'\n'
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update>
indexed_set;
int main(){
    indexed_set s;
    // Elements get inserted in a sorted order
    s.insert(3);
    s.insert(7);
    s.insert(2);
    s.insert(6);
    output(s);  // 2 3 6 7
    // 2 useful functions in the given datatype
    // Here order is just a synonym to index as in an array
    // find_by_order(int): returns iterator to element at given position
    // order_of_key(int): returns the index for a given element(key)
    // If the element is not present in the set, function returns the position the element would have been in the set
    cout<<*(s.find_by_order(2))<<"\n";  // 6
    cout<<s.order_of_key(3)<<"\n";      // 1
    cout<<s.order_of_key(8)<<"\n";      // 4
    // Both the used functions work in logarithmic time
    return 0;
}

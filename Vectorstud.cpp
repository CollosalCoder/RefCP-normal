// cbegin and begin are not that different, the c stands for a constant pointer
// same goes for end, rbegin and rend
#include<bits/stdc++.h>
#define output(x) for(auto i=x.begin();i!=x.end();i++) cout<<*i<<"\t"; cout<<"\n"
#define vi(a) vector<int> a
using namespace std;
int main()
{
  vi(x);
  for(int i=0;i<5;i++)
  { int val; cin>>val; x.push_back(val);}         //1 2 3 4 5
  for(int i=0;i<5;i++)
    cout<<x[i]<<"\t";
    cout<<endl;
    output(x);
  for(auto i=x.rbegin();i!=x.rend();++i)          //5 4 3 2 1
    cout<<*i<<"\t";
    cout<<endl;
  for(auto i=x.cbegin();i!=x.cend();++i)          //1 2 3 4 5
    cout<<*i<<"\t";
  cout<<"\n"<<x.size()<<"\t"<<x.max_size()<<"\t"<<x.empty();   // max_size gives max storage capacity of vector and empty checks whether the vector is empty(=1) or not(=0)
  // x.at(i) is used in the same way as x[i]
  // x.front() and x.back() meaning is as intended
  //  x.data() return pointer to 1st element in vector
  int* pos=x.data();
  pos++;
  cout<<"\nThird element is : "<<*(++pos); cout<<endl;
  // push_back pushes elements from end of vector and pop_back pops from the end of vector
  vi(v);
  v.assign(5,10);           // assign(size,data(same for all pos)) fills v with 10 five times
  cout<<"Test for popback on 'x'\n";
  x.pop_back();
  output(x);              // 1 2 3 4
  cout<<"\n"<<*(x.end());
  cout<<"\nFinish\n";
  v.insert(v.begin()+1,20);
  output(v);
  v.erase(v.begin()+2);
  output(v);
  // emplace() and insert() are quite similar. emplace_back works like push_back
  v.emplace(v.begin()+1,30);
  v.emplace_back(40);
  output(v);
  cout<<"Swap Test\nv1: 1 2\nv2: 3 4\nThen after swapping\n";
  vi(v1); vi(v2);
  v1.push_back(1);
  v1.push_back(2);
  v2.push_back(3);
  v2.push_back(4);
  v1.swap(v2);
  cout<<"v1: ";    output(v1);
  cout<<"v2: ";    output(v2);
  return 0;
}

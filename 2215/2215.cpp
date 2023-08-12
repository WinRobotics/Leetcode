#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <iterator>
using namespace std;
int main (){
  vector<int> v ={1,2,3,5};
  vector<int> w ={3,4,1,2};
  unordered_map<int,int> first;
  
  //initializing
  first[v[0]]=0;
  first[v[1]]=0;
  first[v[2]]=0;
  first[v[3]]=0;
  
   unordered_map<int, int>::iterator it;
   
   for(int i : w)
   {
        it = first.find(i);
        if(it != first.end())
        {
            it->second++;
        }
        else
        {
            first.insert(std::make_pair(i,0));
        }
   }
   for(it=first.begin(); it!=first.end(); ++it){
      cout << it->first << " => " << it->second << '\n';
   }
   
  return 0;
}
#include <iostream>
#include <vector>

using namespace std;
//Example
// Input: gain = [-5,1,5,0,-7]
// Output: 1
// Explanation: The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.
//starts with zero
//Any edge cases?

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    int answer=0;
    int prefix =0;
    int highest =0;

    if(gain.size() ==1)
    {
        if(gain[0]<0)
        {
            return 0;
        }
        return gain[0];
    }

    for(int i=0;i<gain.size();i++)
    {
        prefix+= gain[i];
        if(prefix>highest)
        {
            highest = prefix;
        }
    }
    
    answer = highest;
    //std::cout<<"Answer: "<<answer;
     return answer;   
    }
};
int main()
{
    Solution n;
    vector<int> gain{-5,-13,-5,0,-7};
    n.largestAltitude(gain);

}
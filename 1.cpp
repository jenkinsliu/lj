#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
            vector<int> temp(numbers);
            vector<int> result;
            //step1.sort
            sort(temp.begin(),temp.end());
            int i = 0;
            int j = temp.size()-1;
            if(temp.size()==1){
                result.push_back(1);
                return result;
            }
            //step2.start to end
            while(temp[i]+temp[j]!=target)
            {
                if(temp[i]+temp[j]>target)
                    j--;
                else if(temp[i]+temp[j]<target)
                    i++;
            }
            for(int k=0;k<numbers.size();k++)
            {
                if(numbers[k]==temp[i]){
                    result.push_back(k+1);
                    continue;
                }
                if(numbers[k]==temp[j]){
                    result.push_back(k+1);
                    continue;
                }
            }
             return result;
    }

};
int main()
{
    Solution s;
    int a[] = {0,2,4,0};
    vector<int> numbers(a,a+4);
    int target = 0; 
    vector<int> result = s.twoSum(numbers,target);
    vector<int>::iterator it = result.begin();
    for(it=result.begin();it!=result.end();it++)
    {
        cout<<(*it)<<endl;
    }
    return 0;
}

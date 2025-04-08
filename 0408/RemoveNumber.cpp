#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
 
using namespace std;
 
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int low = 0, hight = 0;
        int vc = count(nums.begin(), nums.end(), val);
        while (hight < nums.size())
        {
            if (nums[low] == val) {
                if (nums[hight] == val)
                {
                    hight++;
                }
                else {
                    nums[low] = nums[hight];
                    nums[hight] = val;//ÈÃÆä==val;
                }
            }
            else {
                if (nums[hight] == val||hight <= low)
                {
                    hight++;
                    low++;
                }
                else {
                    low++;
                }
            }
        }
        return vc;
    }
};

int main(){
 
    system("pause");
    return 0;
 
}
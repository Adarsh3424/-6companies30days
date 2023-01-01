//LEETCODE 299. BULLS AND COWS
//TIME COMPLEXITY: O(n)
//SPACE COMPLEXITY: O(10)




class Solution {
public:
    string getHint(string secret, string guess) {
        int a = 0;
        int b = 0;
        vector<int> count1(10);
        vector<int> count2(10);
        for(int i = 0; i < secret.length(); i++){
            if(secret[i] == guess[i])
                ++a;
            else{
                ++count1[secret[i] - '0'];
                ++count2[guess[i] - '0'];
            }
        }
        for(int i = 0; i < 10; i++){
            b += min(count1[i],count2[i]);
        }
        return to_string(a) + "A" + to_string(b) + "B";
    }
    
};

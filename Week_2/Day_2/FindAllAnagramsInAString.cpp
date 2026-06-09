#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> result;

        if (p.size() > s.size()) {
            return result;
        }

        vector<int> pCount(26, 0);
        vector<int> sCount(26, 0);

        for (char c : p) {
            pCount[c - 'a']++;
        }

        int windowSize = p.size();

        for (int i = 0; i < windowSize; i++) {
            sCount[s[i] - 'a']++;
        }

        if (pCount == sCount) {
            result.push_back(0);
        }

        for (int i = windowSize; i < s.size(); i++) {
            sCount[s[i] - 'a']++;
            sCount[s[i - windowSize] - 'a']--;

            if (pCount == sCount) {
                result.push_back(i - windowSize + 1);
            }
        }

        return result;
    }
};

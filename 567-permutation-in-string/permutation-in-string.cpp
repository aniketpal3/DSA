class Solution {
public:
    // Function to check if two frequency arrays are the same
    bool isFreqSame(int freq1[], int freq2[]) { // O(1)
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        // Build frequency array for s1
        for (int i = 0; i < s1.length(); i++) {
            freq[s1[i] - 'a']++;
        }

        int windSize = s1.length();

        // Sliding window over s2
        for (int i = 0; i < s2.length(); i++) {
            int windIdx = 0, idx = i;
            int windFreq[26] = {0};

            // Build frequency for current window
            while (windIdx < windSize && idx < s2.length()) {
                windFreq[s2[idx] - 'a']++;
                windIdx++;
                idx++;
            }

            // Compare the two frequency arrays
            if (isFreqSame(freq, windFreq)) { // found
                return true;
            }
        }

        return false;
    }
};

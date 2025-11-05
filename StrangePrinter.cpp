#include <iostream>
#include <string>
#include <vector>

class Solutions {
    public:
    int strangePrinter(std::string s) {
        int l = s.length();
        vector<vector<int>> str(l, vector<int>(1)) 
        return strangePrinter(s, 0, l-1, str);
    }
}
    private:
    int strangePrinter(std::string s, int i, int j, vector<vector<int>>& str) {
        if (i > j)
        return 0;
        else if (str[i][j] > 0) 
        return str[i][j];
        str[i][j] = strangePrinter(s, i+1, j, str) + 1;
        for (int k = i+1; k <= j; ++k) {
            if (s[k] == s[i]) {
                str[i][j] = min(str[i][j], strangePrinter(s, i, k-1, str) + strangePrinter(s, k+1, j, str));
            }
          return mem[i][j];
            }
        };

int main() {
    Solutions s;
    std::cout << s.strangePrinter("aaabbb") << std::endl;
    return 0;
}
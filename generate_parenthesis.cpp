#include "stdfax"
#include "iostream"
using namespace std;
/*
class Solution {
public:
	vector<string> generateParenthesis(int n) {
		vector<string> result;
		helper(result, n, n, "");
		return result;
	}
	void helper(vector<string>& result, int m, int n, string temp) {
		if (m == 0 && n == 0) {
			result.push_back(temp);
			return;

		}
		if (m > 0)
			helper(result, m - 1, n, temp + '(');
		if (m < n)
			helper(result, m, n - 1, temp + ')');
	}
};

int main() {
	vector<string> result;
	Solution s;
	result = s.generateParenthesis(3);
}
*/
class Solution {
public:

	void generate(vector<string> &result, int m, int n, string temp) {

		if (m == 0 && n == 0) {
			result.push_back(temp);
		}

		if (m == 0 || n == 0)
			return;

		generate(result, m - 1, n, temp + '(');

		generate(result, m, n - 1, temp + ')');

	}
	vector<string> generateParenthesis(int n) {
		vector<string> result;
		string temp;
		generate(result, n, n, temp);
		return result;

	}

};
int main() {
	vector<string> result;
	Solution s;
	result = s.generateParenthesis(3);
}
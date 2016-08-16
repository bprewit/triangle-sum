#include <iostream>
#include <vector>

using namespace std;
typedef vector<int> ROW_T;

void dumpit(vector<ROW_T> t)
{
	int i;
	for(i = 0; i < t.size(); ++i)
	{
		cout << i << ":" << t[i].size() << endl;
	}
}

int main(int argc, char *argv[])
{
	vector<ROW_T> triangle;
	string s;

	for(int r = 0; getline(cin, s); ++r)
	{
		ROW_T row;
		for(int j = 0; j <= r; ++j)
		{
			int n;
			cin >> n;
			row.push_back(n);
		}
		triangle.push_back(row);
	}

	int rows = triangle.size();
	for(int row = (rows - 2); row >= 0; --row)
	{
		int cols = triangle[row].size();
		cerr << "row " << row << " cols " << cols << endl;
		for(int col = 0; col < cols; ++col)
		{
			triangle[row][col] = triangle[row][col] + max(triangle[row+1][col], triangle[row+1][col+1]);
		}
	}
	cout << triangle[0][0] << endl;
	return(0);
}	



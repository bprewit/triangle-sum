#include <iostream>
#include <sstream>
#include <vector>

using namespace std;
typedef vector<int> ROW_T;

int main(int argc, char *argv[])
{
	vector<ROW_T> triangle;
	string s;

	for(int r = 0; getline(cin, s); ++r)
	{
		ROW_T row;
		istringstream iss(s);
		while(!iss.eof())
		{
			int n;
			iss >> n;
			row.push_back(n);
		}
		triangle.push_back(row);
	}

	int rows = triangle.size();
	for(int row = (rows - 2); row >= 0; --row)
	{
		int cols = triangle[row].size();
		
		for(int col = 0; col < cols; ++col)
		{
			triangle[row][col] = triangle[row][col] + max(triangle[row+1][col], triangle[row+1][col+1]);
		}
	}
	cout << triangle[0][0] << endl;
	return(0);
}	



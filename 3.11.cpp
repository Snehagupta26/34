#include <iostream>
#include <vector>
using namespace
std; const int M =
5; const int N = 5;
bool is_valid(int x, int y, vector<vector<int>>& maze) {
return (x >= 0 && x < M && y >= 0 && y < N && maze[x][y] == 1);
}
bool find_path(vector<vector<int>>& maze, int x, int y, int dest_x, int
dest_y, vector<pair<int, int>>& path) {
if (x == dest_x && y == dest_y)
{ path.push_back({x, y});
return true;
}
if (is_valid(x, y, maze)) {
maze[x][y] = -1;
if (find_path(maze, x + 1, y, dest_x, dest_y, path) ||
find_path(maze, x - 1, y, dest_x, dest_y, path) ||
find_path(maze, x, y + 1, dest_x, dest_y, path) ||
find_path(maze, x, y - 1, dest_x, dest_y, path))
{ path.push_back({x, y});
return true;
}
maze[x][y] = 1;
}
return false;
}
int main()
{ vector<vector<int>>
maze = {
{1, 0, 1, 1, 1},
{1, 1, 1, 0, 1},
{0, 0, 1, 0, 0},
{1, 1, 1, 1, 1},
{1, 1, 1, 0, 1}
};
int start_x = 0, start_y = 0;
int dest_x = 4, dest_y = 4;
vector<pair<int, int>>
path;
bool found = find_path(maze, start_x, start_y, dest_x, dest_y,
path); if (found) {
cout << "Path Found:" <<
endl; for (auto p : path) {
cout << "(" << p.first << "," << p.second << ") ";
}
} else {
cout << "No path exists." << endl;
}
cout << "Sneha Gupta, 21BCS7540\n";
return 0;
}
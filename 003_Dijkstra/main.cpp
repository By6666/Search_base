﻿#include "../Map.h"
using namespace std;

struct Node
{
	int cos;
	pair<int, int> xoy;
	bool operator < (const Node& a) const { return cos > a.cos; }
};

int main()
{
	pair<int, int> buff;
	pair<int, int> start(1, 1);
	pair<int, int> end(End_I, End_II);
	Map[start.first][start.second] = 'S';
	Map[end.first][end.second] = 'E';
	cout << "Initial the map " << endl;
	for (auto &hang : Map)
	{
		for (char item : hang) cout << item << " ";
		cout << endl;
	}
	cout << endl;

	priority_queue<Node> que;
	Node stg;
	stg.cos = 0;
	stg.xoy = start;
	que.push(stg);
	map<pair<int, int>, pair<int, int>> path;
	map<pair<int, int>, int> cost_to_start;
	cost_to_start[start] = 0;
	int new_cost=0;

	while (!que.empty())
	{
		buff = que.top().xoy;
		if (buff == end)
		{
			cout << "BFS End !!" << endl;
			break;
		}
		que.pop();
		//Map[buff.first][buff.second] = ' ';

		new_cost = cost_to_start[buff] + 1;

		if (Left == 0 || Left == 'E')
		{
			cost_to_start[make_pair(buff.first, buff.second - 1)] = new_cost;
			stg.cos = new_cost;
			stg.xoy = make_pair(buff.first, buff.second - 1);
			que.push(stg);
			path[make_pair(buff.first, buff.second - 1)] = buff;
			if (Left == 'E') break;
			Left = '*';
		}

		if (Up == 0 || Up == 'E')
		{
			cost_to_start[make_pair(buff.first - 1, buff.second)] = new_cost;
			stg.cos = new_cost;
			stg.xoy = make_pair(buff.first - 1, buff.second);
			que.push(stg);
			path[make_pair(buff.first - 1, buff.second)] = buff;
			if (Up == 'E') break;
			Up = '*';
		}

		if (Down == 0 || Down == 'E')
		{
			cost_to_start[make_pair(buff.first + 1, buff.second)] = new_cost;
			stg.cos = new_cost;
			stg.xoy = make_pair(buff.first + 1, buff.second);
			que.push(stg);
			path[make_pair(buff.first + 1, buff.second)] = buff;
			if (Down == 'E') break;
			Down = '*';
		}

		if (Right == 0 || Right == 'E')
		{
			cost_to_start[make_pair(buff.first, buff.second + 1)] = new_cost;
			stg.cos = new_cost;
			stg.xoy = make_pair(buff.first, buff.second + 1);
			que.push(stg);
			path[make_pair(buff.first, buff.second + 1)] = buff;
			if (Right == 'E') break;
			Right = '*';
		}

		//for (auto &hang : Map)
		//{
		//	for (char item : hang) cout << item << " ";
		//	cout << endl;
		//}
		//cout << endl;

	}

	for (auto &hang : Map)
	{
		for (char item : hang) cout << item << " ";
		cout << endl;
	}
	cout << endl;


	buff = end;
	Map[end.first][end.second] = 'E';
	while (1)
	{
		buff = path[buff];
		if (buff == start)
		{
			Map[buff.first][buff.second] = 'S';
			break;
		}
		Map[buff.first][buff.second] = '=';
	}

	cout << "Path as following :" << endl;
	for (auto &hang : Map)
	{
		for (char item : hang) cout << item << " ";
		cout << endl;
	}
	cout << endl;


	system("pause");
	return 0;
}
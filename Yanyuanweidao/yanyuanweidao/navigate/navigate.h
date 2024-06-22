#ifndef NAVIGATE_H
#define NAVIGATE_H

#include<cstdio>
#include<cstring>
#include<cmath>
#include<queue>
using namespace std;
#define N 410
#define M 810

class Path {
	int _x0, _y0, _x, _y; 
public:
	Path(int x0, int y0, int x, int y) : _x0(x0), _y0(y0), _x(x), _y(y) {}
	int x0() {
		return _x0;
	}
	int y0() {
		return _y0;
	}
	int x() {
		return _x;
	}
	int y() {
		return _y;
	}
};
class Navigate {
	int n, node[N][2];
	int len, last[N], to[M], next[M];
	double dis[N];
	int father[N];
	int p[N];
	int sum, path[N];
	int locate[5] = {36, 65, 5, 34, 76};
	int x0, y0, S, T;
	int count;
	void add_node() {
		freopen("node.txt", "r", stdin);
		scanf("%d", &n);
		for(int i = 1; i <= n; i++) scanf("%d%d", &node[i][0], &node[i][1]);
		fclose(stdin);
	}
	void add(int x, int y) {
		to[++len] = y;
		next[len] = last[x];
		last[x] = len;
	}
	void add_edge() {
		freopen("edge.txt", "r", stdin);
		len = 0;
		int m, x, y;
		scanf("%d", &m);
		memset(last, 0, sizeof(last));
		memset(next, 0, sizeof(next));
		for(int i = 1; i <= m; i++) {
			scanf("%d%d", &x, &y);
			add(x, y);
			add(y, x);
		}
		fclose(stdin);
	}
	double d(double x0, double y0, double x, double y) {
		return sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
	}
	int near() {
		double min = 1e9; int t;
		for(int i = 1; i <= n; i++) {
			if(d(x0, y0, node[i][0], node[i][1]) < min) min = d(x0, y0, node[i][0], node[i][1]), t = i;
		} 
		return t;
	}
	void SPFA(int t) {
		for(int i = 1; i <= n; i++) dis[i] = 1e9, p[i] = 0;
		queue<int> q;
		dis[t] = 0;
		q.push(t), p[t] = 1;
		while(!q.empty()) {
			int x = q.front();
			q.pop();
			for(int i = last[x]; i; i = next[i]) {
				int y = to[i];
				double length = d(node[x][0], node[x][1], node[y][0], node[y][1]);
				if(dis[x] + length < dis[y]) {
					dis[y] = dis[x] + length;
					father[y] = x;
					if(!p[y]) q.push(y), p[y] = 1;
				}
			}
		}
	}
	void find_path() {
		sum = 0;
		int t = S;
		while(t != T) {
			path[++sum] = t;
			t = father[t];
		}
		path[++sum] = T;
	}
public:
	Navigate(int x, int y, int goal) : x0(x), y0(y), count(0) {
		add_node();
		add_edge();
		S = near(), T = locate[goal];
		SPFA(T);
		find_path(); 
	}
	int get_sum() {
		return sum;
	}
	Path get_path() {
		if(!count) {
			count++;
			return Path(x0, y0, node[path[1]][0], node[path[1]][1]);
		}
		count++;
		return Path(node[path[count - 1]][0], node[path[count - 1]][1], node[path[count]][0], node[path[count]][1]);
	}
};

#endif

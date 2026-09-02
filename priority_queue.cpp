#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

void solve() {
    int R;
    cin >> R;

    map<int, vector<pair<int, int> > > g;
    set<int> vis;

    
    while (R--) {
        int scr, det, dist;
        cin >> scr >> det >> dist;

        g[scr].push_back(make_pair(det, dist));
        g[det].push_back(make_pair(scr, dist));
    }

    int st, end;
    cin >> st >> end;

    priority_queue<
        pair<int, int>,
        vector<pair<int, int> >,
        greater<pair<int, int> >
    > pq;

    pq.push(make_pair(0, st));

    while (!pq.empty()) {

        
        pair<int, int> current = pq.top();
        pq.pop();

        int curr_dist = current.first;
        int city = current.second;


        if (vis.count(city))
            continue;

        vis.insert(city);


        if (city == end) {
            cout << curr_dist;
            return;
        }

        
        for (size_t i = 0; i < g[city].size(); i++) {

            int oc = g[city][i].first;
            int ocd = g[city][i].second;

            if (!vis.count(oc)) {
                pq.push(make_pair(curr_dist + ocd, oc));
            }
        }
    }

    
    cout << -1;
}

int main() {
    solve();
    return 0;
}
class Solution{
public:
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S) {
        vector<int>dist(V, 1e9);
        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;

        dist[S] = 0;
        pq.push({0,S});

        while(!pq.empty())
        {
            int node = pq.top().second;
            int distance = pq.top().first;
            pq.pop();

            if(distance > dist[node]) continue;

            for(auto &it: adj[node])
            {
                int adjNode = it[0];
                int edgeWt = it[1];

                if(distance + edgeWt < dist[adjNode])
                {
                    dist[adjNode] = distance + edgeWt;
                    pq.push({dist[adjNode], adjNode});
                }
            }

        }


        return dist;
    }
};

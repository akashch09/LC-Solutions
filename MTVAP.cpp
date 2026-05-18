class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
         int totalTime = 0;
        
        for (size_t i = 0; i < points.size() - 1; ++i) {
            int xDiff = std::abs(points[i][0] - points[i + 1][0]);
            int yDiff = std::abs(points[i][1] - points[i + 1][1]);
            totalTime += std::max(xDiff, yDiff);
        }
        
        return totalTime;  
    }
};
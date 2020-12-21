class Solution {
    public int minCostClimbingStairs(int[] cost) {
        int p1 = 0, p2 = 0;
        for (int i = 2; i <= cost.length; ++i) {
            int next = Math.min(p2 + cost[i - 1], p1 + cost[i - 2]);
            p1 = p2;
            p2 = next;
        }
        return p2;
    }
}
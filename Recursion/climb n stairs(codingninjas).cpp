int countDistinctWays(int nStairs) {
         if(nStairs<0){
             return 0;
         }
         if(nStairs==0){
             return 1;
         }
           int stairs=countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
           return stairs;
}

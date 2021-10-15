class Solution {
    public int diagonalSum(int[][] mat) {
        int sum=0;int div=1, c=0,fsum=0;c= mat.length-1; div= c/2;
       for(int i=0;i<mat.length;i++)
       { 
          
           for(int j=0;j<mat.length;j++){
               if(i==j){
                 sum=sum+mat[i][j];
                
                   }
           }
          
           fsum= fsum + mat[c][i];
           c--;
       }
        fsum=fsum+sum;
        
        if(((mat.length)%2)!=0){
        
        int d= ((mat.length-1)- div);
        fsum= fsum- mat[d][d];
        
        
        }
        return fsum;
    }
}

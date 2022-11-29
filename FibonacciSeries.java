

public class FibonacciSeries{

    public static int rfib(int n){
      if(n <= 1)
        return n;

        return rfib(n-2) + rfib(n-1);
    }   

    public static int fibItration(int n){
        if (n <= 1)return n;
        
        int t0=0, t1=1, s=0, i;
        for(i=2; i<=n; i++){
            s = t0+t1;
            t0 = t1;
            t1 = s;
        }

        return s;
    }

    public static void main(String[] args) {
        int fib = rfib(6);
        System.out.println(fib);
    }
    
}
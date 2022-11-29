<?php 

function rFibonacci($n){
    if($n <= 1)
        return $n;
    
    
    return rFibonacci($n-2) + rFibonacci($n-1);
}

function itrationFib($n){
    if($n <= 1) return $n;

    $t0=0; $t1=1; $s=0;
    for ($i=2; $i <= $n; $i++) {
       $s = $t0 + $t1;
       $t0 = $t1;
       $t1 = $s;
    }

    return $s;
}


$fib = itrationFib(7);

echo $fib . "\n";
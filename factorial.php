<?php 

function factorial($n){
    if($n == 0){
        return 1;
    }else{
        return factorial($n-1) * $n;
    }
}

function Ifactorial($n){
    $s = 1;
    for($i=1; $i<=n; $i++){
        $s *= $i;
    }
    return $s;
}

$f = Ifactorial(5);

echo $f . "\n";
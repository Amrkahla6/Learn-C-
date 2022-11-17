<?php


function sum($n){
    if($n == 0){
        return 0;
    }else{
        return sum($n-1) + $n;
    }
}

function Isum($n){
    $s = 0;
    for($i=1; $i <= $n; $i++){
        $s = $s + $i;
    }
    return $s;
}

$r = Isum(5);
echo $r . "\n";

?>
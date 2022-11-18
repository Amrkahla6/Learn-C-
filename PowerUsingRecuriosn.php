<?php 

function powerV1($m,$n){
    if($n == 0){
        return 1;
    }else{
        return powerV1($m,$n-1)*$m;
    }   
}

/**
 * Reduce Half
 */
function powerV2($m,$n){
    if($n == 0){
        return 1;
    }

    if($n % 2 == 0){
        return powerV2($m * $m, $n/2);
    }else{
        return $m * powerV2($m * $m, ($n/2)-1 );
    }
}


$p = powerV2(2,4);
echo $p . "\n";

?>
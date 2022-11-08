<?php

//Using Refrence PHP
function swap(&$x, &$y): void{
    $temp = $x;
    $x = $y;
    $y = $temp;
}

$x = 10;
$y = 8;
swap($x,$y);
echo $x . "\n";
?>
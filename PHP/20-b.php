<?php

$factorial = 1;
for($i = 100; $i > 0; $i--)
	$factorial = bcmul($factorial, $i);

$sum = 0;
foreach(str_split($factorial) as $number)
	$sum += $number;

echo $sum;
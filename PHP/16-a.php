<?php

$POWER = 1000;

$sum = 0;

foreach(str_split(sprintf('%0.0f', pow(2, $POWER))) as $number)
	$sum += $number;

echo $sum;
<?php
/*
双路快速排序法
*/

function quickSort($arr)
{
   $count = count($arr);
   __quickSort($arr,0,$count - 1);
    return $arr;
}

function __quickSort(&$arr,$l,$r)
{
	if($l >= $r){
		  return ;
		}
   $p  = __partition($arr,$l,$r);
   __quickSort($arr,$l,$p-1);
   __quickSort($arr,$p+1,$r);
   return $arr; 
}
 
function __partition(&$arr,$l,$r)
{
	$v = $arr[$l];
	$i = $l+1;
	$j = $r;
	$temp = 0;
	while(true){
	       while($i <= $r && $arr[$i] < $v) $i++;
		   while($j >= $l+1 && $arr[$j] > $v) $j--;
		   if($i > $j) break;
		   $temp = $arr[$i];
		   $arr[$i] = $arr[$j];
		   $arr[$j] = $temp;	
		} 
	 $temp = $arr[$l];
	 $arr[$l] = $arr[$j];
	 $arr[$j] = $temp; 
     return $j;		
}

$arr = array(10,293,4,56,231,65,89,43,67,2,8);
$arr = quickSort($arr);

echo '<pre>';
print_r($arr);




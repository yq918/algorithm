<?php
function quickSort($arr){
 	$count = count($arr);
	if($count <= 1){
		return $arr;
		}
 	$mid = $arr[0];
	$left = array();
	$right = array();
	for($i = 1; $i < $count;$i++){
		  if($arr[$i] > $mid){
			  $right[] = $arr[$i];
		   }else{
			 $left[]=$arr[$i];
		    }
	 }
		
		$left  = quickSort($left);
		$right = quickSort($right);
 	   return array_merge($left,array($mid),$right);
 	}
	





function quickSort2($arr)
{
    $count = count($arr);
	return __quickSort2($arr,0,$count-1); 
}

function __quickSort2($arr,$l,$r)
{
	 if($l >= $r){
		    return ;
		 }
	$p = __partition($arr,$l,$r);
	__quickSort2($arr,$l,$p-1);
	__quickSort2($arr,$p+1,$r);
 	return $arr;
}

function __partition($arr,$l,$r)
{
	$v = $arr[$l];
	$i = $l+1;
	$j = $r;
	$temp = 0;
 	while(true)
	{
		while($i <= $r && $arr[$i] < $v) $i++;
		while($j >= $l+1 && $arr[$j] > $v ) $j--;
		if($i > $j){
			 break;
			}
		$temp = $arr[$i];
		$arr[$i] = $arr[$j];
		$arr[$j] = $temp;
		$j--;
		$i++; 
	}
    return  $j;
}

 
	$arr = array(10,293,4,56,231,65,89,43,67,2,8);
	//$arr = quickSort($arr);
	
	echo '<pre>';
	//print_r($arr);
	
 	$arr = quickSort2($arr);
	
	print_r($arr);
 
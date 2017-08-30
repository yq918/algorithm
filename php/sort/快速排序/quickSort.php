<?php
/*
快速排序
*/
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
	
	
	$arr = array(10,293,4,56,231,65,89,43,67,2);
	$arr = quickSort($arr);
	
	print_r($arr);
	
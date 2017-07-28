<?php
/*
选择排序
*/ 
 function selectSort(array $arr )
 {
	$len = count($arr); 	
	for($i = 0; $i < $len;$i++){
		 $minIndex = $i; 
		 for($j = $i+1;$j < $len;$j++){
			    if($arr[$j] < $arr[$minIndex] ){
					 $minIndex = $j;
					} 
			 }
		   if($minIndex != $i ){
			     $tmp = $arr[$i];
			     $arr[$i] = $arr[$minIndex]; 
				 $arr[$minIndex] = $tmp;
			   } 
		} 
 	 return $arr;
  } 
   $arr = array(10,56,78,43,49,23,8,3,68);
   $array =  selectSort($arr);
   echo '<pre>';
   print_r($array);
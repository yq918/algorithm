<?php
/*
插入排序
*/
 function insertSort($arr)
{
   $n = count($arr);
   
   for($i = 1; $i < $n;$i++){
	      for($j = $i;$j>0;$j--){
			     if($arr[$j] < $arr[$j-1]){
					  $temp = $arr[$j];
					  $arr[$j] = $arr[$j-1];
					  $arr[$j-1] = $temp; 
					 }else{
						 break;
						 }
			  }
	   }
   
   return $arr;
}

$arr = array(10,56,78,43,49,23,8,3,68);
$array = insertSort($arr);

echo '<pre>';
print_r($array);



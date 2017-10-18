<?php
/*
插入排序
*/

function insertSort($arr)
{
    $n = count($arr);
 	for($i = 1; $i < $n;$i++){
		 $e = $arr[$i];
		 $j = 0; //保存元素e的插入位置
		 for($j = $i;$j>0 && $arr[$j-1] > $e;$j--){
			      $arr[$j] = $arr[$j-1];
 			 }
	     $arr[$j] = $e;		 
		}
 	return $arr;
}

/*
插入排序 方法2
*/
function insertSort2(array $arr)
{
  $count = count($arr);
  for ($i = 1; $i < $count; $i++) {
         $val = $arr[$i];
         $j = $i-1;
      while ($j >=0 && $arr[$j] > $val) {
           $arr[$j+1] = $arr[$j];
           $j--;
      }
      if ($j+1 != $i) {
           $arr[$j+1] = $val;
      }
  }
    return $arr;
}
 
$arr = array(10,56,78,43,49,23,8,3,68);
$array = insertSort($arr);
echo '<pre>';
print_r($array);






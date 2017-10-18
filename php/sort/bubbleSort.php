
/**
 * 冒泡排序
 *
 * @param array $arr
 */
function bubbleSort(array  $arr)
{
  $c = count($arr) -1 ;
  for ($i = $c;$i >= 0; $i--) {
      for($j = 0; $j < $i; $j++) {
          if($arr[$j] > $arr[$j+1]) {
              $temp = $arr[$j];
              $arr[$j] = $arr[$j+1];
              $arr[$j+1] = $temp;
          }
      }
  }
  return $arr;
}

/**
 * 冒泡排序
 *
 * @param array $arr
 * @return array
 */
function bubbleSort2(array $arr)
{
   $c = count($arr) - 1;
   for ($i = 0; $i <= $c;$i++) {
       for ($j = $c; $j > $i;$j--) {
           if($arr[$j] < $arr[$j-1]) {
               $temp = $arr[$j];
               $arr[$j] =  $arr[$j-1];
               $arr[$j-1] = $temp;
           }
       }
   }
    return $arr;
}

$arr = array(1,45,23,7,87,26,74,43);
$a = bubbleSort2($arr);

echo  '<pre>';
print_r($a);


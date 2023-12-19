<?php
function myCalcutor($num01, $oper, $num02){
    $sum;
    switch($oper){
        case "add":
            $sum=$num01+$num02;
            break;
        case "sub":
            $sum=$num01-$num02;
            break;
        case "mul":
            $sum=$num01*$num02;
            break;
        case "div":
            if($num02!=0){
                $sum=$num01/$num02;
            }else{
                $sum="This division it not possible";                break;
            }
            break;
        default:
        $sum="There was an error!!!";
        break;
    }
    return $sum;
}
// var_dump($_GET);
$num01=$_GET["num01"];
$oper=$_GET["oper"];
$num02=$_GET["num02"];

echo("value:")." ".myCalcutor($num01, $oper, $num02);
?>
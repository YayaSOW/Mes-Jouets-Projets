<?php
require_once("functions.php");
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Calculator</title>
</head>
<body>
    <form action="calculator.php" method="get">
        <input type="number" name="num01" placeholder="Enter Your Number">
        <select name="oper" id="">
            <option value="add">Add</option>
            <option value="sub">Substract</option>
            <option value="mul">Multiply</option>
            <option value="div">Div</option>
        </select>
        <input type="number" name="num02" placeholder="Enter Your Number">
        <button type="submit">Calculate</button>
    </form>
</body>
</html>
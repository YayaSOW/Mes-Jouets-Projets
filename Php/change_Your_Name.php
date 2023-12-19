<?php
if (isset($_POST["submit"])){
    // echo ($_POST["name"]);
    // var_dump($_POST);
}else{
    echo('you did\'n click on submit yet');
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Change Your name</title>
    <style>
        *{
            box-sizing: border-box;
            margin: 0px;
        }
        body{
            display: flex;
            flex-direction: column;
            width: 100%;
            height: 100vh;  
            justify-content: center;
            align-items: center;
        }
        h2, input{
            margin: 10px;
        }
        .container{
            display: flex;
            flex-direction: column;
            justify-content: center;
            align-items: center;
        }
        .set{
            /* outline: none; */
            border: none;
            border-bottom: 2px solid blue;
        }
    </style>
</head>
<body>
    <h2><?='Your name is'." ". $_POST["name"];?></h2>
    <div class="container">
        <form action="index.php" method="post">
            <div><input type="text" name="name" class="set" placeholder="Enter your name"></div>
            <div><input type="submit" name="submit" value="submi" class="set1"></div>
        </form>
        <!-- <div class="foot">

        </div> -->
    </div>
</body>
</html>
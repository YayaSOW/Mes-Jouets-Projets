<?php
require_once('user_info-master/UserInfo.php');
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Getting user Data</title>
</head>
<body>
    <center>User Data</center>
        <?= UserInfo::get_ip();?> 
			<?= UserInfo::get_device();?> 
			<?= UserInfo::get_os();?> 
			<?= UserInfo::get_browser();?> 
</body>
</html>
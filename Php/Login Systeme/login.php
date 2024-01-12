<?php
    include_once("header.php");
?>

    <div class="signup-form">
        <section class="index-intro">
            <h1>Login</h1>
            <form action="login.inc.php" method="post">
                <input type="text" name="name" placeholder="Username/Email...">
                <input type="password" name="pwd" placeholder="Password...">
                <button typt="submit" name="submit">Log In</button>
            </form>        
        </section>
    
<?php
    include_once("footer.php");
?>
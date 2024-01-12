<?php
    include_once("header.php");
?>

    <div class="signup-form">
        <section class="index-intro">
            <h1>Sign Up</h1>
            <form action="signup.inc.php" method="post">
                <input type="text" name="name" placeholder="Full name...">
                <input type="text" name="email" placeholder="Email..">
                <input type="text" name="uid" placeholder="Username...">
                <input type="password" name="pwd" placeholder="Password...">
                <input type="password" name="pwdrepeat" placeholder="Repeat password...">
                <button typt="submit" name="submit">Sign Up</button>
            </form>        
        </section>
    
<?php
    include_once("footer.php");
?>
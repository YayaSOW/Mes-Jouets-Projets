<?php
require_once("./appel.php")
?>
Bonjour !<p>
    Votre nom est <?php echo $_GET['nom'];?> et votre prenom est <?php echo $_GET['prenom'];?>
    faites un autre essai, <a href="appel.php">click ici</a> pour revenir a appel.php
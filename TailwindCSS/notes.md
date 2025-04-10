# 🌀 Tailwind CSS - Breakpoints (Responsive Design)

## 📌 À quoi sert `md:` en Tailwind ?

- `md:` est un **préfixe de breakpoint**.
- Il permet d’appliquer une classe **à partir de la taille `medium` (≥768px)**.
- Très utile pour rendre le design responsive (adapté aux différents écrans).

---

## 📏 Liste des Breakpoints par défaut

| Prefix  | Min-width | Appareils courants           |
|---------|-----------|------------------------------|
| `sm:`   | 640px     | Petits écrans (téléphones)   |
| `md:`   | 768px     | Tablettes                    |
| `lg:`   | 1024px    | Ordinateurs portables        |
| `xl:`   | 1280px    | Écrans larges                |
| `2xl:`  | 1536px    | Très grands écrans           |

---

## 💡 Exemples pratiques

### 🎨 Exemple 1 : changer la couleur de fond selon la taille

```html
<div class="bg-red-500 md:bg-blue-500">
  Hello Responsive
</div>

# 🎯 Tailwind CSS – Modificateurs d’état (State Modifiers)

## ✨ 1. `hover:`
- Applique une classe **lorsque la souris survole** un élément.
  
### Exemple :
```html
<button class="bg-blue-500 hover:bg-blue-700 text-white font-bold py-2 px-4 rounded">
  Survol moi
</button>
🖱️ Au survol : la couleur passe de bg-blue-500 à bg-blue-700.

🎯 2. focus:
S’active lorsqu’un élément est sélectionné (par exemple un champ de formulaire avec le clavier ou clic).

Exemple :

<input class="border border-gray-300 focus:border-blue-500 focus:outline-none p-2" placeholder="Votre nom">
⌨️ Quand on clique ou navigue avec Tab, la bordure devient bleue.

🌒 3. dark:
Utilisé pour appliquer des styles en mode sombre (dark mode).

Fonctionne uniquement si le mode sombre est activé via Tailwind ou les préférences du navigateur.

Exemple :
<div class="bg-white text-black dark:bg-gray-900 dark:text-white p-4">
  Support du mode sombre
</div>
🔁 En mode clair : fond blanc, texte noir
🌙 En mode sombre : fond gris foncé, texte blanc

📋 Combinaison des modificateurs
Tu peux combiner plusieurs modificateurs dans une même classe :

<button class="bg-green-500 hover:bg-green-700 focus:ring-2 dark:bg-green-800">
  Interactif + Dark Mode
</button>
🧠 Astuce
L’ordre des modificateurs est important :

Toujours écrire : responsive → state → autres

Exemple correct : md:hover:bg-red-500

# 📏 Tailwind CSS : `max-w-*`

## 🔹 Définition
`max-w-*` permet de définir une **largeur maximale** pour un élément.  
L'élément ne pourra **jamais dépasser** cette largeur, même si le contenu est plus grand.

---

## 🧪 Exemples

```html
<div class="max-w-sm bg-blue-100 p-4">
  Contenu limité à une largeur "small"
</div>

<div class="max-w-2xl mx-auto bg-green-100 p-4">
  Texte centré avec une largeur max de 2xl
</div>

## 📐 Largeurs maximales (`max-w-*`) en Tailwind

| Classe Tailwind     | Largeur max par défaut             |
|---------------------|------------------------------------|
| `max-w-xs`          | 20rem (320px)                      |
| `max-w-sm`          | 24rem (384px)                      |
| `max-w-md`          | 28rem (448px)                      |
| `max-w-lg`          | 32rem (512px)                      |
| `max-w-xl`          | 36rem (576px)                      |
| `max-w-2xl`         | 42rem (672px)                      |
| `max-w-3xl`         | 48rem (768px)                      |
| `max-w-4xl`         | 56rem (896px)                      |
| `max-w-5xl`         | 64rem (1024px)                     |
| `max-w-6xl`         | 72rem (1152px)                     |
| `max-w-7xl`         | 80rem (1280px)                     |
| `max-w-full`        | 100%                               |
| `max-w-min`         | Taille minimale selon contenu      |
| `max-w-max`         | Taille maximale selon contenu      |
| `max-w-screen-sm`   | Largeur écran `sm` (640px)         |

# 📏 Différence entre `flex justify-center` et `mx-auto`

## 1. `flex justify-center`
- **But** : Centrer le contenu **horizontalement** au sein d'un conteneur utilisant **Flexbox**.
- **Fonctionnement** :
  - **`flex`** : Définit le conteneur comme un élément **flexbox**. Cela active la disposition flex pour ses éléments enfants.
  - **`justify-center`** : Aligne les éléments enfants horizontalement au centre du conteneur flex.
  
### Exemple :
```html
<div class="flex justify-center">
  <div class="bg-blue-500 p-4">Contenu centré</div>
</div>

2. mx-auto
But : Centrer un élément horizontalement dans son conteneur, mais ce n'est pas spécifique à Flexbox.

Fonctionnement :

mx-auto : Applique une marge automatique (auto) sur les côtés gauche et droit de l'élément, ce qui permet de centrer l'élément si sa largeur est définie.

Exemple :

<div class="w-1/2 mx-auto bg-green-500 p-4">
  Contenu centré
</div>
Cela centre l'élément qui a une largeur fixe ou une largeur définie (comme w-1/2 dans l'exemple), et applique une marge automatique sur les côtés gauche et droit pour le centrer horizontalement dans son conteneur parent.

Différence clé :
flex justify-center est utilisé dans un contexte flexbox pour centrer les enfants d'un conteneur flex.

mx-auto est utilisé pour centrer un élément spécifique (comme une carte, une section, etc.) à l'intérieur d'un conteneur, mais que tu n'as pas besoin d'un conteneur flex.

Quand utiliser l'un ou l'autre ?
Utilise flex justify-center lorsque tu veux utiliser la flexbox pour centrer les éléments enfants au sein d'un conteneur.

Utilise mx-auto lorsque tu veux centrer un élément spécifique (comme une carte, une section, etc.) à l'intérieur d'un conteneur, mais que tu n'as pas besoin d'un conteneur flex.

# 🅵𝓸𝓷𝓽 et 𝓣𝓮𝓍𝓽 en Tailwind CSS

## 1. Classes `font-*`
Les classes `font-*` en Tailwind CSS sont utilisées pour définir la **famille de police** (font-family) d'un texte. 

### Exemples de classes `font-*` :
- **`font-sans`** : Applique une police sans-serif.
- **`font-serif`** : Applique une police avec serif (police avec empattements).
- **`font-mono`** : Applique une police monospacée (comme les polices de terminal).

### Exemple :
```html
<div class="font-sans">
  Ceci est un texte avec une police sans-serif.
</div>

<div class="font-serif">
  Ceci est un texte avec une police avec empattements.
</div>
2. Classes text-*
Les classes text-* sont utilisées pour définir les propriétés de couleur et de taille du texte en Tailwind CSS.

Exemples de classes text-* :
text-[color] : Définir la couleur du texte. Par exemple, text-red-500 pour un texte rouge de teinte 500.

text-xl : Définit la taille du texte à extra-large (taille plus grande).

text-sm : Définit la taille du texte à small (taille plus petite).

text-base : Définit la taille du texte par défaut (taille de base).

 Exemples :

<div class="text-red-500">
  Ceci est un texte rouge.
</div>

<div class="text-xl">
  Ceci est un texte de taille extra-large.
</div>

<div class="text-sm">
  Ceci est un texte de petite taille.
</div>

# 🎨 Dégradés (Gradients) en Tailwind CSS

Tailwind CSS permet de créer facilement des arrière-plans en **dégradé** grâce à une combinaison de classes utilitaires.

---

## 🌈 1. Activer le dégradé : `bg-gradient-to-*`

| Classe            | Direction du dégradé                   |
|-------------------|----------------------------------------|
| `bg-gradient-to-t`| De bas en haut (to top)                |
| `bg-gradient-to-b`| De haut en bas (to bottom)             |
| `bg-gradient-to-l`| De droite vers la gauche (to left)     |
| `bg-gradient-to-r`| De gauche vers la droite (to right)    |
| `bg-gradient-to-tr`| Diagonale bas-gauche → haut-droite    |
| `bg-gradient-to-tl`| Diagonale bas-droite → haut-gauche    |
| `bg-gradient-to-br`| Diagonale haut-gauche → bas-droite    |
| `bg-gradient-to-bl`| Diagonale haut-droite → bas-gauche    |

---

## 🎨 2. Définir les couleurs : `from-*`, `via-*`, `to-*`

- **`from-*`** : Couleur de départ du dégradé.
- **`via-*`** *(optionnelle)* : Couleur intermédiaire.
- **`to-*`** : Couleur de fin.

### Exemple simple :
```html
<div class="bg-gradient-to-r from-blue-500 to-green-500 p-6 text-white">
  Dégradé de bleu à vert
</div>
Exemple avec une couleur intermédiaire :

<div class="bg-gradient-to-r from-purple-500 via-pink-500 to-red-500 p-6 text-white">
  Dégradé avec une couleur intermédiaire
</div>
🧪 3. Exemples pratiques
Dégradé vertical :

<div class="bg-gradient-to-b from-yellow-400 to-orange-500 p-6 text-white">
  Dégradé du haut vers le bas
</div>
Dégradé en diagonale :

<div class="bg-gradient-to-br from-indigo-500 to-pink-500 p-6 text-white">
  Dégradé en diagonale bas-droite
</div>
💡 Astuces
Tu peux utiliser n'importe quelle couleur disponible dans la palette Tailwind.

Combine avec rounded, shadow, ou hover: pour des effets plus stylés.

Les gradients fonctionnent aussi bien avec les boutons, les cartes, les sections, etc.

📚 Pour aller plus loin
Documentation officielle : https://tailwindcss.com/docs/gradient-color-stops 

# 🟦 Border Radius en Tailwind CSS

Tailwind CSS te permet d’ajouter facilement des coins arrondis à tes éléments avec les classes utilitaires `rounded-*`.

---

## 🔹 1. Classe de base : `rounded`

- **`rounded`** : ajoute un rayon de bordure par défaut (souvent 0.25rem).
```html
<div class="rounded bg-blue-500 text-white p-4">Coin arrondi</div>
🔸 2. Taille des coins
Classe	Rayon de bordure
rounded-none	0 (aucun arrondi)
rounded-sm	Petit arrondi (0.125rem)
rounded	Normal (0.25rem)
rounded-md	Moyen (0.375rem)
rounded-lg	Large (0.5rem)
rounded-xl	Extra-large (0.75rem)
rounded-2xl	Très arrondi (1rem)
rounded-3xl	Super arrondi (1.5rem)
rounded-full	100% (cercle, pour avatars)
🧩 3. Coin spécifique
Tu peux arrondir un coin spécifique :

Classe	Coin arrondi
rounded-t	Haut gauche et haut droit
rounded-r	Haut et bas droit
rounded-b	Bas gauche et bas droit
rounded-l	Haut et bas gauche
rounded-tl-*	Coin supérieur gauche
rounded-tr-*	Coin supérieur droit
rounded-br-*	Coin inférieur droit
rounded-bl-*	Coin inférieur gauche
Exemple :

<div class="rounded-tl-lg rounded-br-2xl bg-green-400 p-4 text-white">
  Coins en diagonale personnalisés
</div>
🎯 4. Combinaison avec d’autres classes
Tu peux combiner rounded avec :

shadow pour une carte stylée

overflow-hidden pour cacher le contenu débordant

hover:rounded-xl pour des effets au survol

Exemple :

<div class="rounded-lg shadow-md p-6 bg-white hover:rounded-2xl transition-all">
  Carte avec coins arrondis et effet au survol
</div>
📚 Documentation officielle
👉 https://tailwindcss.com/docs/border-radius

## 📝 List Styling en Tailwind CSS

### 1. **Liste Non Ordonnée (`ul`)**
La liste non ordonnée est une liste dont les éléments sont précédés de puces.

#### Exemple de code :

```html
<ul class="list-disc pl-5">
  <li>Premier élément</li>
  <li>Deuxième élément</li>
  <li>Troisième élément</li>
</ul>
Classes utilisées :
list-disc : Définit des puces de type disque pour chaque élément de la liste.

pl-5 : Ajoute un espacement à gauche de 1.25rem (taille par défaut) pour indenter les éléments de la liste.

2. Liste Ordonnée (ol)
La liste ordonnée est une liste numérotée.

Exemple de code :
<ol class="list-decimal pl-5">
  <li>Premier élément</li>
  <li>Deuxième élément</li>
  <li>Troisième élément</li>
</ol>
Classes utilisées :
list-decimal : Définit des numéros pour chaque élément de la liste.

pl-5 : Ajoute un espacement à gauche pour l'indentation.

3. Liste avec Puces Personnalisées
Il est possible de personnaliser le style des puces en utilisant des icônes ou des images.

Exemple de code :
<ul class="list-inside pl-4">
  <li class="list-item-before" style="list-style-type: square;">Premier élément</li>
  <li class="list-item-before" style="list-style-image: url('icon.png');">Deuxième élément</li>
</ul>
Classes utilisées :
list-inside : Déplace les puces à l'intérieur de l'élément au lieu de les laisser à l'extérieur.

pl-4 : Ajoute un espacement à gauche de 1rem.

4. Liste avec Espacement entre les Éléments
Pour espacer les éléments de la liste, tu peux utiliser la classe space-y.

Exemple de code :
<ul class="space-y-3">
  <li>Premier élément</li>
  <li>Deuxième élément</li>
  <li>Troisième élément</li>
</ul>
Classes utilisées :
space-y-3 : Ajoute un espacement de 0.75rem entre chaque élément de la liste.

5. Liste avec Bordures
Pour ajouter des bordures autour des éléments de la liste ou de la liste elle-même, tu peux utiliser les classes de bordure de Tailwind.

Exemple de code :
<ul class="border border-gray-300 p-4 rounded-md">
  <li>Premier élément</li>
  <li>Deuxième élément</li>
  <li>Troisième élément</li>
</ul>
Classes utilisées :
border : Applique une bordure autour de la liste.

border-gray-300 : Définit la couleur de la bordure.

p-4 : Ajoute un padding autour des éléments de la liste.

rounded-md : Ajoute des coins arrondis.

6. Listes imbriquées
Tu peux imbriquer des listes dans des listes pour créer des hiérarchies.

Exemple de code :
<ul class="list-disc pl-5">
  <li>Premier élément
    <ul class="list-inside pl-5">
      <li>Élément imbriqué</li>
      <li>Autre élément imbriqué</li>
    </ul>
  </li>
  <li>Deuxième élément</li>
</ul>
Classes utilisées :
list-inside : Utilisée dans les listes imbriquées pour s'assurer que les puces sont à l'intérieur de la liste.

7. Alignement du Texte dans la Liste
Tu peux contrôler l'alignement du texte dans les éléments de la liste.

Exemple de code :
<ul class="text-center">
  <li>Premier élément</li>
  <li>Deuxième élément</li>
  <li>Troisième élément</li>
</ul>
Classes utilisées :
text-center : Centre le texte à l'intérieur de chaque élément de la liste.

Classes Utiles pour la Mise en Forme des Listes
Classe	Description
list-disc	Ajoute des puces de type disque à la liste
list-decimal	Numérote les éléments de la liste
list-inside	Place les puces à l'intérieur de l'élément
list-outside	Place les puces à l'extérieur de l'élément
space-y-{n}	Ajoute un espacement vertical entre les éléments
pl-{n}	Ajoute un espacement à gauche des éléments
text-center	Centre le texte dans les éléments de la liste
p-{n}	Ajoute un padding à l'intérieur des éléments
border	Applique une bordure autour de la liste
Exemples Complètes
Liste ordonnée avec numéros :

<ol class="list-decimal pl-5">
  <li>Premier élément</li>
  <li>Deuxième élément</li>
  <li>Troisième élément</li>
</ol>
Liste avec puces personnalisées :

<ul class="list-inside pl-4">
  <li style="list-style-type: square;">Premier élément</li>
  <li style="list-style-image: url('icon.png');">Deuxième élément</li>
</ul>

🟩 Grid Layout (Mise en Page en Grille)
1. Activer une grille avec grid
La classe grid transforme un conteneur en un grid container. Cela permet d'utiliser les propriétés de grille CSS.

<div class="grid">
  <!-- Grid items ici -->
</div>
2. Définir le nombre de colonnes avec grid-cols-*
Tu peux définir le nombre de colonnes que ta grille doit avoir avec les classes grid-cols-{n}. {n} représente le nombre de colonnes (1, 2, 3, etc.).

<div class="grid grid-cols-3">
  <div class="bg-red-500 p-4">Item 1</div>
  <div class="bg-blue-500 p-4">Item 2</div>
  <div class="bg-green-500 p-4">Item 3</div>
</div>
3. Contrôler la taille des colonnes avec grid-cols-{size}
grid-cols-1: 1 colonne

grid-cols-2: 2 colonnes

grid-cols-3: 3 colonnes

grid-cols-4: 4 colonnes

4. Définir des espacements entre les éléments avec gap-*
Tu peux utiliser la classe gap-{size} pour définir l'espacement entre les lignes et les colonnes.

<div class="grid grid-cols-3 gap-4">
  <div class="bg-red-500 p-4">Item 1</div>
  <div class="bg-blue-500 p-4">Item 2</div>
  <div class="bg-green-500 p-4">Item 3</div>
</div>
5. Contrôler les lignes et les colonnes avec grid-rows-* et grid-cols-*
Tu peux aussi définir un nombre spécifique de lignes avec grid-rows-* et contrôler la taille des lignes et des colonnes.

<div class="grid grid-cols-3 grid-rows-2 gap-4">
  <div class="bg-red-500 p-4">Item 1</div>
  <div class="bg-blue-500 p-4">Item 2</div>
  <div class="bg-green-500 p-4">Item 3</div>
  <div class="bg-yellow-500 p-4">Item 4</div>
  <div class="bg-purple-500 p-4">Item 5</div>
  <div class="bg-pink-500 p-4">Item 6</div>
</div>
6. Aligner les éléments avec justify-items-* et align-items-*
justify-items-* : Aligne les éléments sur l'axe horizontal.

align-items-* : Aligne les éléments sur l'axe vertical.

<div class="grid grid-cols-3 justify-items-center align-items-center gap-4">
  <div class="bg-red-500 p-4">Item 1</div>
  <div class="bg-blue-500 p-4">Item 2</div>
  <div class="bg-green-500 p-4">Item 3</div>
</div>
7. Élargir un élément sur plusieurs colonnes ou lignes
Tu peux faire en sorte qu'un élément prenne plusieurs colonnes ou lignes avec les classes col-span-* et row-span-*.

<div class="grid grid-cols-3 gap-4">
  <div class="bg-red-500 p-4 col-span-2">Item 1 (sur 2 colonnes)</div>
  <div class="bg-blue-500 p-4">Item 2</div>
  <div class="bg-green-500 p-4 row-span-2">Item 3 (sur 2 lignes)</div>
  <div class="bg-yellow-500 p-4">Item 4</div>
</div>
8. Exemple Complet : Utilisation du grid avec Tailwind CSS

<div class="grid grid-cols-4 gap-6 p-4">
  <div class="bg-blue-500 p-4">1</div>
  <div class="bg-green-500 p-4">2</div>
  <div class="bg-red-500 p-4">3</div>
  <div class="bg-yellow-500 p-4">4</div>
  <div class="bg-indigo-500 p-4 col-span-2">5 (occupe 2 colonnes)</div>
  <div class="bg-purple-500 p-4 row-span-2">6 (occupe 2 lignes)</div>
  <div class="bg-pink-500 p-4">7</div>
</div>
9. Responsiveness
Les classes de grid peuvent être combinées avec les breakpoints pour rendre la mise en page responsive. Par exemple :

<div class="grid grid-cols-1 sm:grid-cols-2 md:grid-cols-3 lg:grid-cols-4 gap-4">
  <div class="bg-red-500 p-4">Item 1</div>
  <div class="bg-blue-500 p-4">Item 2</div>
  <div class="bg-green-500 p-4">Item 3</div>
  <div class="bg-yellow-500 p-4">Item 4</div>
</div>
Résumé des classes utiles de grid :
grid : Définit un conteneur de grille.

grid-cols-{n} : Définir le nombre de colonnes.

grid-rows-{n} : Définir le nombre de lignes.

gap-{size} : Définir l'espacement entre les éléments.

col-span-{n} : Élargir un élément sur n colonnes.

row-span-{n} : Élargir un élément sur n lignes.

justify-items-* : Aligner les éléments horizontalement.

align-items-* : Aligner les éléments verticalement.

✅ Bonus : Pourquoi [400px] avec les crochets ?
Parce que Tailwind n’a pas par défaut toutes les tailles possibles.
Si tu veux une taille non prévue, tu dois utiliser la syntaxe [...] :

h-64 existe → 16rem (256px)

h-[400px] → valeur personnalisée que toi tu choisis.

🔧 À quoi sert transform ?
La propriété CSS transform permet d'appliquer des transformations visuelles à un élément : rotation, échelle, translation, inclinaison...

Tailwind te simplifie tout ça avec des classes utilitaires !

✅ Activer les transformations
Avant d’appliquer une transformation, tu dois activer le système avec :

class="transform"
Mais pas toujours obligatoire, car certaines classes comme rotate-45, scale-125, etc. l’activent automatiquement.

🌪️ Classes transform de base
Action	Classe Tailwind	Résultat
Rotation	rotate-45	Tourne de 45°
Rotation -	-rotate-45	Tourne de -45°
Échelle	scale-125	Grossit à 125%
Échelle -	scale-50	Réduit à 50%
Déplacement X	translate-x-10	Décale de 2.5rem vers la droite
Déplacement Y	-translate-y-4	Décale de 1rem vers le haut
Inclinaison	skew-x-6	Incline de 6° sur X
Perspective	transform-gpu	Utilise le GPU pour animer
🎯 Personnaliser avec des valeurs spécifiques
Tu peux utiliser les crochets pour faire des trucs plus précis :

class="rotate-[37deg] scale-[1.25] translate-x-[10px]"
🧪 Exemple complet

<div class="w-32 h-32 bg-orange transform rotate-12 hover:scale-125 transition-all duration-300"></div>
🟠 Ce carré :

est orange,

tourne de 12°,

grossit au survol (scale 125%),

avec une transition fluide de 300ms.


import json
import os
from tinydb import TinyDB, Query

class Info:
    def __init__(self, text_file: str, json_file: str, db_file: str = 'articles_tinydb.json'):
        self.text_file = text_file
        self.json_file = json_file
        self.db_file = db_file
        self.db = TinyDB(self.db_file)
        self.table = self.db.table('articles')

    def get_file_content(file_path: str) -> list:
        liste_texte = [] 
        with open(file_path, 'r') as file:
            lines = file.readlines()
            for line in lines:
                parts = line.strip().split(';')
                # print(parts)
                liste_texte.append(parts)
            return liste_texte
    def get_keys(liste_texte: str) -> list:
        return liste_texte[0]

    def get_values(liste_texte: str) -> list:
        return liste_texte[2:]


    def creer_json_articles(file_name: str) -> None:
        articles = []
        data = self.get_file_content("./DataBase/data.txt")
        keys = get_keys(data)
        value = get_values(data)
        # print (keys)
        # print (value)
        with open(file_name, 'w') as file:
            json.dump(articles, file)
    def creer_json_articles(self) -> None:
        articles = []
        articles = []
        data = self.get_file_content("./DataBase/data.txt")
        keys = self.get_keys(data)
        value = get_values(data)
        # print (keys)
        # print (value)
        with open(file_name, 'w') as file:
            json.dump(articles, file)
        with open(self.text_file, 'r') as file:
            lines = file.readlines()
            keys = lines[0].strip().split(';')
            for line in lines[1:]:
                values = line.strip().split(';')
                article = {key: value for key, value in zip(keys, values)}
                articles.append(article)
        with open(self.json_file, 'w') as file:
            json.dump(articles, file, ensure_ascii=False, indent=4)

    def creer_base_tinydb(self) -> None:
        if len(self.table) == 0:  # Insérer uniquement si la table est vide
            with open(self.json_file, 'r') as file:
                articles = json.load(file)
            self.table.insert_multiple(articles)

    def ajouter_article(self, article: dict) -> None:
        # Ajouter l'article dans le fichier JSON
        self.write_donnee(self.json_file, article)
        
        # Ajouter l'article dans la base de données TinyDB
        self.table.insert(article)

    def write_donnee(self, file: str, donnee: dict) -> None:
        if os.path.exists(file):
            with open(file, "r") as f:
                contenu = json.load(f)
            contenu.append(donnee)
        else:
            contenu = [donnee]
        
        with open(file, "w") as f:
            json.dump(contenu, f, ensure_ascii=False, indent=4)

    def afficher_articles(self) -> list:
        return self.table.all()

    def afficher_article_plus_vue(self) -> dict:
        return self.table.get(Query().Vue == max(int(article['Vue']) for article in self.table.all()))

    def afficher_article_plus_like(self) -> dict:
        return self.table.get(Query().Like == max(int(article['Like']) for article in self.table.all()))

    def afficher_article_plus_dislike(self) -> dict:
        return self.table.get(Query().Dislike == max(int(article['Dislike']) for article in self.table.all()))

    def afficher_articles_par_tags(self, tag: str) -> list:
        return self.table.search(where('tags').test(lambda tags: tag in tags.split(', ')))

    def afficher_articles_par_auteurs(self, auteur: str) -> list:
        return self.table.search(where('auteur').test(lambda auteurs: auteur in auteurs.split(' & ')))

    def afficher_articles_par_etat(self, etat: str) -> list:
        return self.table.search(where('etat') == etat)


# Exemple d'utilisation de la classe Info

# Initialisation
info = Info('./DataBase/data.txt', 'articles1.json')

# Créer le fichier JSON à partir du fichier texte
info.creer_json_articles()

# Créer la base de données TinyDB à partir du fichier JSON
info.creer_base_tinydb()

# Ajouter un nouvel article
nouvel_article = {
    'Article': 'Article 20',
    'Categorie': 'TECH',
    'Titre': 'Nouveau Titre',
    'Contenu': 'Nouveau contenu pour le nouvel article.',
    'tags': 'tag1, tag2',
    'auteur': 'nouvel_auteur',
    'date': '28-06-2024 à 12:00',
    'etat': 'publié',
    'vue': '100',
    'like': '50',
    'dislike': '5'
}
info.ajouter_article(nouvel_article)

# Afficher tous les articles
print("Tous les articles:", info.afficher_articles())

# Afficher l'article avec le plus de vues
print("Article avec le plus de vues:", info.afficher_article_plus_vue())

# Afficher l'article avec le plus de likes
print("Article avec le plus de likes:", info.afficher_article_plus_like())

# Afficher l'article avec le plus de dislikes
print("Article avec le plus de dislikes:", info.afficher_article_plus_dislike())

# Afficher les articles par tags
print("Articles avec le tag 'tag1':", info.afficher_articles_par_tags('tag1'))

# Afficher les articles par auteurs
print("Articles écrits par 'toto':", info.afficher_articles_par_auteurs('toto'))

# Afficher les articles par état
print("Articles publiés:", info.afficher_articles_par_etat('publié'))

# Afficher un article JavaScript écrit par Breukh
print("Article JavaScript par Breukh:", Info.article_js_par_breukh())

# Afficher un article Python écrit par Breukh
print("Article Python par Breukh:", Info.article_python_par_breukh())

# 📌 Gestion des Étudiants et Cotisations

![GitHub Repo stars](https://img.shields.io/github/stars/johanalain11/etudiant-cotisation?style=social)
![GitHub license](https://img.shields.io/github/license/johanalain11/etudiant-cotisation)
![GitHub last commit](https://img.shields.io/github/last-commit/johanalain11/etudiant-cotisation)
![C](https://img.shields.io/badge/Language-C-blue)
![GCC](https://img.shields.io/badge/Compiler-GCC-orange)

&#x20;&#x20;

Ce projet est une application en langage **C** permettant de **gérer les informations des étudiants** et leurs **cotisations** au sein d'un club.

---

## 🚀 Fonctionnalités

✔ Ajouter un étudiant avec ses informations personnelles et sa cotisation.\
✔ Modifier les informations d'un étudiant existant.\
✔ Supprimer un étudiant par son **matricule** ou son **numéro**.\
✔ Afficher la liste complète des étudiants et leurs cotisations.\
✔ Calculer le **montant total des cotisations**.\
✔ Rechercher un étudiant par **son matricule**.

---

## 🛠 Installation et Compilation

### 1️⃣ Cloner le dépôt

Clonez le projet depuis GitHub :

```sh
git clone https://github.com/johanalain11/etudiant-cotisation.git
cd etudiant-cotisation
```

### 2️⃣ Compiler le code

```sh
gcc programme.c -o gestion_etudiants
```

### 3️⃣ Exécuter l'application

```sh
./gestion_etudiants
```

---

## 🖥 Utilisation

1️⃣ Lancez le programme.\
2️⃣ Entrez le nombre d'étudiants à inscrire.\
3️⃣ Suivez les instructions pour **saisir** les informations des étudiants.\
4️⃣ Choisissez une opération dans le menu :\
🔹 Modifier les données d'un étudiant.\
🔹 Supprimer un étudiant par son **numéro** ou son **matricule**.\
🔹 Afficher la liste des étudiants et leurs cotisations.\
🔹 Calculer le **montant total cotisé**.\
🔹 Rechercher un étudiant par **matricule**.\
🔹 Quitter le programme.

---

## 🏗 Structure de Données

Chaque étudiant est représenté par une structure `etudiant` :

```c
struct etudiant {
    char matricule[50];
    char nom[50];
    char prenom[50];
    int age;
    char filiere[50];
    int niveau;
    int cotisation;
};
```

---

## 🖼 Exemple d'Exécution



---

## 🛠 Technologies Utilisées

- **Langage de programmation :** C
- **Compilateur :** GCC

---

## 🔮 Améliorations Futures

✅ Ajouter une **interface graphique**.\
✅ Renforcer la **validation des entrées utilisateur**.\
✅ Gérer les **erreurs potentielles** (entrées invalides, dépassements de mémoire, etc.).\
✅ Ajouter un **système de sauvegarde et de chargement** des données dans un fichier.

---

## 👨‍💻 Auteur

**Johan Alain**\
🔗 [GitHub](https://github.com/johanalain11/)


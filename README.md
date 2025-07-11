# 📚 Libft – Bibliothèque C

## Objectif du projet

Ce projet a pour but de recréer en C une bibliothèque de fonctions usuelles.  
Chaque fonction doit avoir le même comportement que sa version standard, mais être préfixée par `ft_`. Par exemple, `strlen` devient `ft_strlen`.

## Partie 1 : Fonctions de la libc

### 🔤 Tests de caractères
- `ft_isalpha` : vérifie si un caractère est alphabétique  
- `ft_isdigit` : vérifie si c’est un chiffre  
- `ft_isalnum` : vérifie si c’est une lettre ou un chiffre  
- `ft_isascii` : vérifie si le caractère est ASCII  
- `ft_isprint` : vérifie si c’est un caractère imprimable

### 🧠  Fonctions mémoire
- `ft_memset` : remplit une zone mémoire avec une valeur  
- `ft_bzero` : met une zone mémoire à zéro  
- `ft_memcpy` : copie une zone mémoire  
- `ft_memmove` : comme memcpy, mais plus sûr pour les zones qui se chevauchent  
- `ft_memchr` : cherche un octet dans une zone mémoire  
- `ft_memcmp` : compare deux zones mémoire

### 🔗 Fonctions de chaînes
- `ft_strlen` : calcule la taille d’une chaîne  
- `ft_strlcpy` : copie une chaîne avec taille limite  
- `ft_strlcat` : concatène deux chaînes avec sécurité  
- `ft_strchr` / `ft_strrchr` : recherche un caractère dans une chaîne  
- `ft_strncmp` : compare deux chaînes sur n caractères  
- `ft_strnstr` : recherche une sous-chaîne dans une chaîne

### 🔁 Conversion
- `ft_toupper` / `ft_tolower` : transforme une lettre en majuscule/minuscule  
- `ft_atoi` : convertit une chaîne en entier

### 💾 Allocation
- `ft_calloc` : alloue et initialise une zone mémoire  
- `ft_strdup` : duplique une chaîne

## Partie 2 : Fonctions utiles supplémentaires

- `ft_substr` : extrait une sous-chaîne
- `ft_strjoin` : concatène deux chaînes
- `ft_strtrim` : enlève certains caractères en début/fin de chaîne
- `ft_split` : découpe une chaîne en tableau selon un séparateur
- `ft_itoa` : convertit un entier en chaîne
- `ft_strmapi` / `ft_striteri` : applique une fonction à chaque caractère d’une chaîne
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` : fonctions pour écrire sur un file descriptor (très utile pour l'affichage sans `printf`)

## Partie bonus : Listes chaînées

- `ft_lstnew` : crée un nouvel élément  
- `ft_lstadd_front` / `ft_lstadd_back` : ajoute un élément en début ou fin  
- `ft_lstsize` / `ft_lstlast` : infos sur la liste  
- `ft_lstdelone` / `ft_lstclear` : supprime proprement des éléments  
- `ft_lstiter` / `ft_lstmap` : itère ou transforme la liste


---

✅ **STATUT:**  
📅 Date de rendu : 01.11.2024  
📝 Note obtenue : 125/100

---

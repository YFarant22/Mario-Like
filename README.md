# Mario-Like
 
Solution:

Utilisation de CMAKE à l'aide du CMakeLists.txt qui permettra de générer une solution visual studio.

Le dossier src possède le fichier main du projet ainsi que 3 dossiers:
- "Assets" pour qui compte les fichiers et ressources utilisé en jeu comme les sprites et les images
- "Game" qui commporte les fichiers de code cpp 
- "headers" qui comporte les headers 
- Dans project > Mario like properties > VC++ Directories > Include directories: Ajouter le path du fichier header du projet afin de link les includes des fichiers cpp


Structure du projet

Fonctionnalités:
- gestion de la Window (générétion et gestion d'une RenderWindow)
- Géstion de map (lecture de map depuis un fichier txt et sauvegarde de la map dans une vecteur)
- GameObject (Création de la base d'un gameobject)
- Player (Gestion des commande du joueur)
- SceneManager (gestion des Scenes commes les menues, etc...)
CREATE TABLE ARTICLES(
   Id_Article INT NOT NULL IDENTITY(1, 1),
   art_designation VARCHAR(50),
   art_quantiteStock INT,
   art_seuilReapprovis INT,
   art_prix float,
   art_tva float,
   PRIMARY KEY(Id_Article)
);

CREATE TABLE UTILISATEUR(
   id_utilisateur INT NOT NULL IDENTITY(1, 1),
   uti_nom VARCHAR(50),
   uti_prenom VARCHAR(50),
   uti_dateNaissance DATE,
   PRIMARY KEY(id_utilisateur)
);

CREATE TABLE PAYS(
   ID_PAYS INT NOT NULL IDENTITY(1, 1),
   pay_nom VARCHAR(50),
   PRIMARY KEY(ID_PAYS)
);

CREATE TABLE REGION(
   ID_REGION INT NOT NULL IDENTITY(1, 1),
   reg_name VARCHAR(50),
   ID_PAYS INT NOT NULL,
   PRIMARY KEY(ID_REGION),
   FOREIGN KEY(ID_PAYS) REFERENCES PAYS(ID_PAYS)
);

CREATE TABLE PERSONNEL(
   id_Personnel INT NOT NULL IDENTITY(1, 1),
   per_supHerachique INT,
   per_dateDembauche DATE,
   id_utilisateur INT NOT NULL,
   PRIMARY KEY(id_Personnel),
   UNIQUE(id_utilisateur),
   FOREIGN KEY(id_utilisateur) REFERENCES UTILISATEUR(id_utilisateur)
);

CREATE TABLE CLIENTS(
   Id_Client INT NOT NULL IDENTITY(1, 1),
   id_utilisateur INT NOT NULL,
   PRIMARY KEY(Id_Client),
   UNIQUE(id_utilisateur),
   FOREIGN KEY(id_utilisateur) REFERENCES UTILISATEUR(id_utilisateur)
);

CREATE TABLE COMMANDES(
   Id_Commande INT NOT NULL IDENTITY(1, 1),
   com_ref VARCHAR(50),
   com_dateLivraison DATE,
   com_dateEmission DATE,
   com_datePaiement DATE,
   com_moyenPaiement VARCHAR(50),
   Id_Client INT NOT NULL,
   PRIMARY KEY(Id_Commande),
   FOREIGN KEY(Id_Client) REFERENCES CLIENTS(Id_Client)
);

CREATE TABLE VILLE(
   id_ville INT NOT NULL IDENTITY(1, 1),
   cit_nom VARCHAR(50),
   ID_REGION INT NOT NULL,
   PRIMARY KEY(id_ville),
   FOREIGN KEY(ID_REGION) REFERENCES REGION(ID_REGION)
);

CREATE TABLE ADRESSE(
   id_adresse INT NOT NULL IDENTITY(1, 1),
   adr_num VARCHAR(50),
   adr_rue VARCHAR(50),
   adr_postalcode VARCHAR(50),
   adr_type VARCHAR(50),
   id_ville INT NOT NULL,
   PRIMARY KEY(id_adresse),
   FOREIGN KEY(id_ville) REFERENCES VILLE(id_ville)
);

CREATE TABLE CONTENIR(
   Id_Commande INT,
   Id_Article INT,
   PRIMARY KEY(Id_Commande, Id_Article),
   FOREIGN KEY(Id_Commande) REFERENCES COMMANDES(Id_Commande),
   FOREIGN KEY(Id_Article) REFERENCES ARTICLES(Id_Article)
);

CREATE TABLE AVOIR(
   id_adresse INT,
   id_utilisateur INT,
   PRIMARY KEY(id_adresse, id_utilisateur),
   FOREIGN KEY(id_adresse) REFERENCES ADRESSE(id_adresse),
   FOREIGN KEY(id_utilisateur) REFERENCES UTILISATEUR(id_utilisateur)
);


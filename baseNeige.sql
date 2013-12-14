-- database dbNeige

-- creation de la table materiel
create table materiel(
id int auto_increment primary key,
libelle varchar(50),
marque varchar(30),
anneeDeMiseEnService tinyint,
taille float,
prixHeure float,
prixDemieJournee float,
prixJournee float,
prixSemaine float);

-- creation de la table luge
create table luge(
id int not null primary key,
couleur varchar(30));

-- creation de la table surf
create table surf(
id int not null primary key,
pied varchar(20));

-- creation de la table paireDeSki
create table paireDeSki(
id int not null primary key,
typeDeSki varchar(30));

-- creation de la table paireDeBaton
create table paireDeBaton(
id int not null primary key,
matiere varchar(30));

create table local(
id int);

create table matosLoue(
idLoca int,
id int);

create table location(
idLoca tinyint auto_increment primary key,
idnNomLocation smallint,
prix float,
piece varchar(30),
duree varchar (30));

create table piece(
piece varchar(30) primary key
);
insert into piece values("permis de conduire");
insert into piece values("passeport");
insert into piece values("carte d indentite");



create table client(
id smallint auto_increment primary key,
nom varchar(50),
prenom varchar(50));


-- mise en place des contrainte d'integrite
alter table luge add foreign key (id) references materiel (id);
alter table surf add foreign key (id) references materiel (id);
alter table paireDeSki add foreign key (id) references materiel (id);
alter table paireDeBaton add foreign key (id) references materiel (id);
alter table local add foreign key (id) references materiel (id);
alter table matosLoue add foreign key (id) references materiel (id);
alter table matosLoue add foreign key (idLoca) references location (id);
alter table location add foreign key (idnNomLocation) references client (id);



insert into materiel values(1,"LugeDeOuf","PasDeMarque",2000,56.2,5,10,15,30);
insert into luge values(1,"bleue");
insert into materiel values(2,"SkisDeOuf","Dynastar",2005,176.2,4,8,14,27);
insert into paireDeSki values(2,"parabollique");

insert into materiel values(3,"BatonsDeOuf","Salomon",2008,116.2,1,2,5,10);
insert into paireDeBaton values(3,"Acier Trempe");

insert into materiel values(4,"SurfDeOuf","Rossignol",2010,96.2,10,20,35,60);
insert into surf values(4,"goofi");

insert into local values(1);

insert into local values(2);

insert into local values(3);

insert into local values(4);

insert into client values(null,"Arnaud","Cyril");

insert into client values(null,"Jean","Phill");








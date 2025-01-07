#include <stdio.h>
#include <string.h>
#include <stdlib.h>
	
	struct etudiant
	{
	    char matricule[50];
	    char nom[50];
	    char prenom[50];
	    int age;
	    char filiere[50];
	    int niveau;
	    int cotisation;
	};

	struct etudiant infos_club[256];
int main(int argc, char *argv[])
{
    printf("  //////////////////\\\\\\\\\\\\\\\\\\\\\\ \n |        PROJET ETUDIANT-COTISATION        |\n  \\\\\\\\\\\\\\\\\\////////////////////\n");
	
	int n;
	printf("\n entrer le nombre d'etudiants a inscrire\n");
	scanf("%d",&n);
	int i;
	for (i=1; i<=n; i++)
    {
        printf("Entrez le matricule de l'etudiant %d\n",i);
        scanf("%s",infos_club[i].matricule);
        printf("Entrez son nom\n");
        scanf("%s",infos_club[i].nom);
        printf("Entrez son prenom\n");
        scanf("%s",infos_club[i].prenom);
        printf("Entrez son age\n");
        scanf("%d",&infos_club[i].age);
        printf("Entrez sa filiere\n");
        scanf("%s",infos_club[i].filiere);
        printf("Entrez le niveau\n");
        scanf("%d",&infos_club[i].niveau);
        printf("Entrez sa cotisation\n");
        scanf("%d",&infos_club[i].cotisation);
    };

	int p;
    printf("#########################################################################\n Selectionnez une operation a effectuer\n 1-> Corriger les donnees d'un candidat existant\n 2-> Supprimer les donnees d'un candidat\n 3-> Entrer le matricule d'un candidat pour supprimer ses donnees\n 4-> Afficher la liste des etudiants et le montant cotise\n 5-> Afficher le montant total cotise par les etudiants\n 6-> Entrer le matricule d'un candidat pour afficher ses donnees\n 7-> Quitter\n#########################################################################\n²");
    scanf("%d",&p);
    if(p =='1')
    {
        char matricule_candidat[100];
        printf("Entrer son matricule\n");
        scanf("%s",matricule_candidat);
        for(i=1;i<=n;i++)
        {
            if(strcmp(matricule_candidat, infos_club[i].matricule)==0)
            {
                int m;
                printf("Selectionner la donnee a modifier\n");
                printf("1.matricule  2.nom  3.prenom  4.age  5.filiere  6.niveau  7.cotisation\n");
                scanf("%d",&m);
                switch (m)
                {
                case 1:
                    printf("Entrer le matricule correct\n");
                    scanf("%s",infos_club[i].matricule);
                    break;
                case 2:
                    printf("Entrer le nom correct\n");
                    scanf("%s",infos_club[i].nom);
                    break;
                case 3:
                    printf("Entrer le prénom correct\n");
                    scanf("%s",infos_club[i].prenom);
                    break;
                case 4:
                    printf("Entrer l'âge correct\n");
                    scanf("%d",&infos_club[i].age);
                    break;
                case 5:
                    printf("Entrer la filère correcte\n");
                    scanf("%s",infos_club[i].filiere);
                    break;
                case 6:
                    printf("Entrer le niveau correct\n");
                    scanf("%d",&infos_club[i].niveau);
                    break;
                case 7:
                    printf("Entrer la cotisation correcte\n");
                    scanf("%s",infos_club[i].matricule);
                    break;
                default:
                    printf("L'option choisie est inexistante\n");
                    break;
                };
            };
        };
        if(strcmp(matricule_candidat, infos_club[i].matricule)!=0)
        {
            printf("Le matricule entré est inexistant\n");
        };
    }

    	
    else if(p=='2')
    {
        int a;
        printf("Entrer le numero du candidat a l'entree\n");
        scanf("%d",&a);
        printf("Supression des donnees du candidat %s\t %s\t", infos_club[i+1].nom, infos_club[i+1].prenom);
        if(a<=n & a>=1)
        {
            for(i=a; i=n-1; i++)
            {
                infos_club[i] = infos_club[i+1];
            };
            printf("Suppression terminee\n");
        }
        else
        {
            printf("Suppression imposssible\n");

        }
       }     else if(p=='3')
    {
        char matriculecandidat[100];
        printf("Entrer le matricule du candidat\n");
        scanf("%s",matriculecandidat);
        printf("Supression des donnees du candidat %s\t %s\t", infos_club[i+1].nom, infos_club[i+1].prenom);
        for(i=1;i<=n;i++)
        {
            if(strcmp(matriculecandidat, infos_club[i].matricule)==0)
            {
                infos_club[i] = infos_club[i+1];
            }else
        {
            printf("Suppression imposssible\n");

        }
            ;
            printf("Suppression terminee\n");
        }
    }
	
        else if (p == '4')
        {

            printf("Liste Des etudiant\n\n");
            printf("MATRICULE\tNOM PRENOM\t COTISATION\n");
            for (i = 1; i <=n; i++)
            {
                printf("%s\t%s\t %s\t%d\n", infos_club[i].matricule, infos_club[i].nom, infos_club[i].prenom, infos_club[i].cotisation);
            }
            int sum;
            for (i = 1; i <=n; i++)
            {
                sum += infos_club[i].cotisation;
            }
        }

	
        else if (p == '5')
        {
            int sum = 0;
            printf("le montant cotise est de\n\n");
            printf("Montant");

            for (i = 1; i <=n; i++)
            {
                sum += infos_club[i].cotisation;
            }
            printf("=%d", sum);

        }

        
        else if (p == '6')
        {
            printf("\n\n"); char mat[50];
            printf("Entrez le matricule a rechercher  : ");
            scanf("%s", mat);
            for (i = 1; i <=n; i++)
            {
                if (mat == infos_club[i].matricule)
            {
                printf("Information Sur le candidat\n\n");
                printf("nom : %s\n", infos_club[i].nom);
                printf("prenom %s\n:", infos_club[i].prenom);
                printf("age : %d\n", infos_club[i].age);
                printf("filiere : %s\n", infos_club[i].filiere);
                printf("niveau : %d\n", infos_club[i].niveau);
                printf("cotisation : %d\n", infos_club[i].cotisation);
            }
            }
        }else if (p == '7')
        {
        };

    return 0;

    };

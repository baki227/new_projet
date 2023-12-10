#include "pch.h"
#include "CppUnitTest.h"
#include "..//POO_P6//CLmap_utilisateur.h" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace POO_P6
{
    TEST_CLASS(utilisateurTest)
    {
    public:

        TEST_METHOD(TestGetMethods)
        {
            // Cr�ez une instance de votre classe
            NS_Comp_MappageUtilisateur::utilisateur utilisateurInstance;

            // D�finissez des valeurs pour les attributs
            utilisateurInstance.set_pay_nom(L"France");
            utilisateurInstance.set_uti_prenom(L"John");

            // V�rifiez si les m�thodes get renvoient les valeurs correctes
            Assert::AreEqual(L"France", utilisateurInstance.get_pay_nom());
            Assert::AreEqual(L"John", utilisateurInstance.get_uti_prenom());
            // Ajoutez des assertions pour les autres m�thodes get
            // Exemple : Assert::AreEqual(expectedValue, utilisateurInstance.get_autre_methode());
        }

        TEST_METHOD(TestSetMethods)
        {
            // Cr�ez une instance de votre classe
            NS_Comp_MappageUtilisateur::utilisateur utilisateurInstance;

            // Utilisez les m�thodes set pour d�finir des valeurs
            utilisateurInstance.set_pay_nom(L"France");
            utilisateurInstance.set_uti_prenom(L"John");

            // V�rifiez si les m�thodes get renvoient les valeurs correctes apr�s les avoir d�finies
            Assert::AreEqual(L"France", utilisateurInstance.get_pay_nom());
            Assert::AreEqual(L"John", utilisateurInstance.get_uti_prenom());
            // Ajoutez des assertions pour les autres m�thodes set
            // Exemple : Assert::AreEqual(expectedValue, utilisateurInstance.get_autre_methode());
        }

        // Ajoutez d'autres tests pour les autres m�thodes
    };
}

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
            // Créez une instance de votre classe
            NS_Comp_MappageUtilisateur::utilisateur utilisateurInstance;

            // Définissez des valeurs pour les attributs
            utilisateurInstance.set_pay_nom(L"France");
            utilisateurInstance.set_uti_prenom(L"John");

            // Vérifiez si les méthodes get renvoient les valeurs correctes
            Assert::AreEqual(L"France", utilisateurInstance.get_pay_nom());
            Assert::AreEqual(L"John", utilisateurInstance.get_uti_prenom());
            // Ajoutez des assertions pour les autres méthodes get
            // Exemple : Assert::AreEqual(expectedValue, utilisateurInstance.get_autre_methode());
        }

        TEST_METHOD(TestSetMethods)
        {
            // Créez une instance de votre classe
            NS_Comp_MappageUtilisateur::utilisateur utilisateurInstance;

            // Utilisez les méthodes set pour définir des valeurs
            utilisateurInstance.set_pay_nom(L"France");
            utilisateurInstance.set_uti_prenom(L"John");

            // Vérifiez si les méthodes get renvoient les valeurs correctes après les avoir définies
            Assert::AreEqual(L"France", utilisateurInstance.get_pay_nom());
            Assert::AreEqual(L"John", utilisateurInstance.get_uti_prenom());
            // Ajoutez des assertions pour les autres méthodes set
            // Exemple : Assert::AreEqual(expectedValue, utilisateurInstance.get_autre_methode());
        }

        // Ajoutez d'autres tests pour les autres méthodes
    };
}

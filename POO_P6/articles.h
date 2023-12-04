#pragma once

ref class articles {
private:
    int Id_Article;
    System::String^ art_designation;
    int art_quantiteStock;
    int art_seuilReapprovis;
    float art_prix;
    float art_tva;
public:
    //get
    int get_Id_Article(void);
    System::String^ get_art_designation(void);
    int get_art_quantiteStock(void);
    int get_art_seuilReapprovis(void);
    float get_art_prix(void);
    float get_art_tva(void);
    //set
    void set_Id_Article(int);
    void set_art_designation(System::String^);
    void set_art_quantiteStock(int);
    void set_ar_seuilReapprovis(int);
    void set_art_prix(float);
    void set_art_tva(float);
};
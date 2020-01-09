public class Bibliotheque{
    
}

public class adherent{

     private String prenom;
     private String nom;
     
     private int Nbooks;
     private livre[] booksLent;

     public void inscrire();
     public void desinscrire();
     public void emprunter(livre Book);
     public void restituer(livre book);
    

}

public class document{
    
     private String titre;
    
     
}

public class journal extends document{
    
     private date date_de_parution;
}

public class volume extends document{
    
     private String auteur;
     
}

public class dictionnaire extends volume{
    
     
}

public class livre extends volume{
    
     private bool is_lent;
}


public class BD extends volume{
    
     private String nom_de_dest;
}
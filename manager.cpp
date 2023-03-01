#include "manager.h"

Manager::Manager()
{

}

void setTipo(string nombre, string tipo_combustible, string color, string kit, string matricula, int ruedas, int potencia, int vagones, bool motor, bool combustible, bool alas, bool reactores, bool tren_aterrizaje, bool locomotora){
    string tipo;

    if(ruedas == 2 && !motor && !combustible && !reactores
            && !tren_aterrizaje && !locomotora && vagones == 0
            && kit == "Kit de reparacion de pinchazos"){
        tipo = "bicicleta";
    } else if(ruedas == 3 && !motor && !combustible && !reactores && !tren_aterrizaje && !locomotora && vagones == 0 && kit == "Kit de reparacion de pinchazos"){
        tipo = "triciclo";
    } else if(ruedas == 2 && motor && potencia >= 80 && potencia <= 450 &&
              (tipo_combustible == "Eléctrico" || tipo_combustible == "Gasolina"
               || tipo_combustible == "Diésel" || tipo_combustible == "Híbrido")
              && combustible && !reactores && !tren_aterrizaje && !locomotora && vagones == 0
              && kit == "Kit de reparaciones"){
        tipo = "Motocicleta";
    } else if(ruedas == 4 && motor && potencia >= 80 && potencia <= 250 &&
              (tipo_combustible == "Eléctrico" || tipo_combustible == "Gasolina"
               || tipo_combustible == "Diésel" || tipo_combustible == "Híbrido")
              && combustible && !reactores && !tren_aterrizaje && !locomotora && vagones == 0
              && kit == "Rueda de repuesto"){
        tipo = "Coche";
    } else if(ruedas == 4 && motor && potencia >= 250 && potencia <= 450 &&
              (tipo_combustible == "Eléctrico" || tipo_combustible == "Gasolina")
              && combustible && !reactores && !tren_aterrizaje && !locomotora && vagones == 0
              && kit == "Kit de reparaciones"){
        tipo = "Coche deportivo";
    } else if(ruedas == 6 && motor && potencia == 450 &&
              tipo_combustible == "Queroseno"
              && combustible && color == "Blanco" && reactores && tren_aterrizaje && !locomotora && vagones == 0
              && kit == "Rueda de repuesto"){
        tipo = "Avión";
    } else if(ruedas == 40 && motor && potencia == 450 &&
              (tipo_combustible == "Eléctrico" || tipo_combustible == "Diesel")
              && combustible && color == "Negro" && !reactores && !tren_aterrizaje && locomotora
              && vagones >= 5 && vagones <= 20
              && kit == "Rueda de repuesto"){
        tipo = "Tren";
    }

    cout << tipo << endl;
}

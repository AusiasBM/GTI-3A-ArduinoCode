
#ifndef MEDIDOR_H_INCLUIDO
#define MEDIDOR_H_INCLUIDO

// Ausias Bañuls Mahiques
// **********************************************************

class Medidor {

    private:

    public:

        Medidor(  ) {
        } // ()

        void iniciarMedidor() {
            // las cosas que no se puedan hacer en el constructor, if any
        } // ()

        int medirCO2() {
            return 235;
        } // ()

        int medirTemperatura() {
            return -12; // qué frío !
        } // ()
	
}; // class

#endif
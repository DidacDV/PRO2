#include "Estudiant.hh"

/* Constants */

const char *ER1 = "No te nota";
const char *ER2 = "Valor de la nota entre 0 a 10";
const char *ER3 = "Ja te nota";
const char *ER4 = "El DNI es incorrecte";

Estudiant::Estudiant(){
  dni=0;
  nota = -1;
}

Estudiant::Estudiant(int dni)
{
  if (dni<0) throw PRO2Excepcio(ER4);
  this->dni = dni;
  nota = -1;
}

void Estudiant::afegir_nota(double nota)
{
  if (this->nota != -1 and (nota >= 0 and nota <= MAX_NOTA)) 
    throw PRO2Excepcio(ER3);
  if (nota<0 or nota>MAX_NOTA)
    throw PRO2Excepcio(ER2); 
  
  this->nota = nota; 
}

void Estudiant::modificar_nota(double nota)
{ 				
  if (this->nota == -1) 
    throw PRO2Excepcio(ER1);
  if (nota<0 or nota>MAX_NOTA)
    throw PRO2Excepcio(ER2);
  this->nota = nota;
}

bool Estudiant::te_nota() const
{
  return (nota >= 0 and nota <= MAX_NOTA);
}

double Estudiant::consultar_nota() const
{
  if (nota == -1) throw PRO2Excepcio(ER1);
  return nota;
}

int Estudiant::consultar_DNI() const
{
  return dni;
}

double Estudiant::nota_maxima()
{
  return MAX_NOTA;
}

void Estudiant::llegir()
{
  cin >> dni;
  if (dni<0) throw PRO2Excepcio(ER4);
  double x;
  cin >> x;
  if (x >= 0 and x <= MAX_NOTA) {
    nota = x; 
  }
  else nota = -1;
}

void Estudiant::escriure() const
{
  if (nota >= 0 and nota <= MAX_NOTA)
    cout << dni << " " << nota << endl;
  else
    cout << dni <<" NP" << endl;
}

  bool Estudiant::operator==(const Estudiant& est) const {
  return dni == est.dni;
}
  /* Pre: cert */
  /* Post: el resultat indica si el p.i. i est tenen el mateix DNI */

  bool Estudiant::operator!=(const Estudiant& est) const {
    return dni != est.dni;
  }
  /* Pre: cert */
  /* Post: el resultat indica si el p.i. i est tenen DNIs diferents */

  bool Estudiant::comp(const Estudiant& e1, const Estudiant& e2) {
    return e1.dni < e2.dni;
  }
  /* Pre: cert  */
  /* Post: el resultat indica si e1 te DNI mes petit que e2 */
#include <iostream>

using namespace std;

class Duck{
  protected:
    float weight;
  public:
    Duck() { weight = 2.0; cout << "Duck spawned" << endl; }
    Duck( float startWeight ) { weight = startWeight; cout << "Duck erzeugt" << endl;}
    virtual void quak() { cout << "whack whack" << endl; } // Virtual -> Überprüft ob letztendlich die Variable doch nur weitervererbt wurde
    float myWeight() { return weight; }
    void setWeight(int weight) { this->weight = weight; }
};

class Mallard : public Duck {
  public:
  Mallard() { cout << "Mallard spawned" << endl; }
  Mallard( float startWeight ) : Duck( startWeight ){ cout << "Mallard spawned" << endl; }
  void quak() { cout << "nät nät nät" << endl;}
};

class Swan : public Duck {
  public:
    Swan() { cout << "Swan spawned" << endl;}
    Swan( float startWeight) : Duck( startWeight )
    { cout << "Swan spawned" << endl;}
    void quak() { cout << "skrraaaa" << endl;}
};

int main()
{
  Duck *duck = new Swan(5.5);
  Mallard *mallard = new Mallard;
  Duck *swan;
  swan = new Swan;
  /*
    Duck *duck;
    duck = new Mallard();   für Virtual gedacht
  */

  cout << "Gewicht: " << duck->myWeight() << " Kilo" << endl;
  return 0;
}

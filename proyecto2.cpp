#include <iostream>
#include <vector>
#include <map>
using namespace std;
struct TPuntitos
{
string nombre;
float x;
float y;
};
int main()
{
// Con Mapa
map<string, TPuntitos> mapa;
mapa.insert(pair<string, TPuntitos>("punto1", {"punto1", 14, 20}));
mapa.insert(pair<string, TPuntitos>("punto2", {"punto2", 14, 15}));
mapa.insert(pair<string, TPuntitos>("punto3", {"punto3", 14, 11}));

string busqueda;
cout << "Ingrese el nombre del punto :";
cin >> busqueda;



auto dato = mapa[busqueda];
cout << dato.nombre << " Su coordenada es ( " << dato.x << " , " << dato.y << " ) " << endl;
}
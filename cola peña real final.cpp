
#include <iostream>
#include <string.h>
using namespace std;
int push (string dia, int final);
int pop (int frente);
int op, des=1,n=7;
string cola[7];
int final=0,frente=0;
string dia;


int push (string dia, int final){ 
	if(final<n){ 
		cola[final]=dia; 
		final++; 
		cout<<"se inserto "<<dia<<endl; 
		}
	else{ 
		cout<<"la cola esta llena "<<endl; 
	}
	return final; 
}

int pop (int frente){
	if(frente<final){ 
		cola[frente]=" "; 
		frente++;

	}
	else{
		cout<<"la cola esta vacia "<<endl; 
	
	}
	return frente;
}
void mostrar(){ 
	for(int i=0;i<n;i++){ 
		if(cola[i]==" "){ 
			cout<<"-----"<<endl;
			
		}else{ 
			cout<<cola[i]<<endl;
		
		}
	
	}
	system("pause");
}

void menu(){ 
	cout<<"Que accion deseas tener?"<<endl;
	cout<<"1.- agregar"<<endl;
	cout<<"2.- Quitar "<<endl;
	cout<<"3. Mostrar "<<endl;
	cout<<"4.- salir"<<endl;
	cin>>op;
}
int main(){
	do{ 
		menu(); 
		switch(op){
			case 1:{cout<<"insertar"<<endl;
			cin>>dia; 
			final=push(dia,final); 
			break;
			}
			case 2:{
				cout<<"Eliminar"<<endl;
				frente=pop(frente);
				break;
			}
			case 3:{cout<<"mostrar"<<endl;
				mostrar(); 
				break;
			}
			case 4:{
				cout<<" adios"<<endl; 
				exit(0);
				break;
			}
			default: cout<<"invalido"<<endl;	
				}
			
		system("pause");
		system("cls");
	}while(op!=5); 
	return 0; 
}


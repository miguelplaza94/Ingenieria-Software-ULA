/* universidad de los andes
 * sincronizacion de procesos
 * asignatura: sistemas operativos
 * autor: alvaro Araujo
 * fecha: 20/04/2018
 */

#define ID 999
#define ROUTE "/bin/lspci"
#define SEM_ID 0x101011


typedef struct
{
  pid_t pid;
  long long numero;
  unsigned char termino;
}inf_p;

typedef struct{
  pid_t pid_mon;
	inf_p array_p[20];

}shmem_data;

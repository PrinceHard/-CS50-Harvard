// Saves names and numbers to a CSV file

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Open CSV file
    FILE *file = fopen("phonebook.csv", "a");
    if (!file)
    {
        return 1;
    }

    // Get name and number
    string Nome = get_string("Nome: ");
    string Número = get_string("Número: ");
    string Pedido = get_string("N° Pedido: ");
    string Valor = get_string("Valor: ");

    // Print to file
    fprintf(file, "Nome: %s,Número: %s,Pedido: %s,Valor: %s\n", Nome, Número, Pedido, Valor);

    // Close file
    fclose(file);
}
#include <stdio.h>


int main (void)
{

printf("LabC4 \n");
printf("Author: Colton Kayser \n");

void encrypt_msg();
void decrypt_msg();

const int N = 100;
char msg_in [N+1];
char original_msg[N+1];
char encrypted_msg[N+1];
char decrypted_msg[N+1];
char action;

printf("Provide a message you want to encrpyt/decrypt: ");
scanf (" %100s", original_msg); 
printf("original: %s\n", original_msg);
printf("select action e|d ");
scanf(" %c", &action);
if(action=='e')
{
encrypt_msg(original_msg, encrypted_msg);
printf("encrypted: %s\n" , encrypted_msg);
}
else if(action=='d')
{
decrypt_msg(original_msg, decrypted_msg);
printf("decrypted: %s\n", decrypted_msg);
}

}

void encrypt_msg(char msg_in[],char encrypted_out[])
{ 
int i;

for(i=0; msg_in[i]!='\0'; i++)
{
    if(msg_in[i]>='a' && msg_in[i]<='z')
    {
       
        encrypted_out[i]=msg_in[i]+(i+1);
        
        if(encrypted_out[i]>'z')
        {
            encrypted_out[i]=encrypted_out[i]-26;
        }
    }
    else if(msg_in[i]>='A' && msg_in[i]<='Z')
    {
        
         encrypted_out[i]=msg_in[i]+(i+1);
        
        if(encrypted_out[i]>'Z')
        {
            encrypted_out[i]=encrypted_out[i]-26;
        }
    
    }
    else
    {
        encrypted_out[i]=msg_in[i];
    }   
}

encrypted_out[i]='\0';
}

void decrypt_msg(char msg_in[],char decrypted_out[])
{ 
int i;

for(i=0; msg_in[i]!='\0'; i++)
{
    if(msg_in[i]>='a' && msg_in[i]<='z')
    {
       
        decrypted_out[i]=msg_in[i]-(i+1);
        
        if(decrypted_out[i]<'a')
        {
            decrypted_out[i]=decrypted_out[i]+26;
        }
    }
    else if(msg_in[i]>='A' && msg_in[i]<='Z')
    {
        
        decrypted_out[i]=msg_in[i]-(i+1);
        
        if(decrypted_out[i]<'A')
        {
            decrypted_out[i]=decrypted_out[i]+26;
        }
    }
    else
    {
        decrypted_out[i]=msg_in[i];
    }   
}
decrypted_out[i]='\0';

}



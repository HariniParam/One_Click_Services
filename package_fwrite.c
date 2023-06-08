#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Structure to store information(name, rating,and mobile number) about the service persons
struct servicePerson
{
    char name[20];
    char rating[6];
    char mobNo[11];
};

//Structure to store services available along with the charges in each service field
struct service
{
    char issue[35];
    float charge;
};

//Structure to store information(name, pin,and phone number) about the users
struct userInfo
{
    char name[50];
    int pin;
    char phnNo[11];
};

//Function to write userInfo file
void write_userInfoFile()
{
    FILE * fp;
    fp = fopen("user_Info.txt", "w");
    struct userInfo inp1 = {"harini", 2003, "9876254862"};
    struct userInfo inp2 = {"sarmi", 2004, "9950340891"};
    fwrite(&inp1, sizeof(struct userInfo), 1, fp);
    fwrite(&inp2, sizeof(struct userInfo), 1, fp);
    if(fwrite==0)
    {
        printf("Error writing file!\n");
        exit(1);
    }
    fclose(fp);
}

//Function to write electrical services file
void write_electricianServiceFile()
{
    FILE * fp;
    fp = fopen("electricianServices.txt", "w");
    struct service inp1 = {"Circuit Fault Finding", 120.00};
    struct service inp2 = {"Fitting/Removal of fans and lights", 80.00};
    struct service inp3 = {"Switch Board Installation", 95.00};
    struct service inp4 = {"Wiring Work", 100.00};
    fwrite(&inp1, sizeof(struct service), 1, fp);
    fwrite(&inp2, sizeof(struct service), 1, fp);
    fwrite(&inp3, sizeof(struct service), 1, fp);
    fwrite(&inp4, sizeof(struct service), 1, fp);
    if(fwrite==0)
    {
        printf("Error writing file!\n");
        exit(1);
    }
    fclose(fp);
}

//Function to write plumbing services file
void write_plumberServiceFile()
{
    FILE * fp;
    fp = fopen("plumberServices.txt", "w");
    struct service inp1 = {"Leaking pipes", 100.00};
    struct service inp2 = {"Dripping Faucet", 90.00};
    struct service inp3 = {"Bathroom Fittings", 150.00};
    struct service inp4 = {"Sanitary Work", 80.00};
    fwrite(&inp1, sizeof(struct service), 1, fp);
    fwrite(&inp2, sizeof(struct service), 1, fp);
    fwrite(&inp3, sizeof(struct service), 1, fp);
    fwrite(&inp4, sizeof(struct service), 1, fp);
    if(fwrite==0)
    {
        printf("Error writing file!\n");
        exit(1);
    }
    fclose(fp);
}

//Function to write repair-work services file
void write_repairmanServiceFile()
{
    FILE * fp;
    fp = fopen("repairmanServices.txt", "w");
    struct service inp1 = {"Air Conditioner", 300.00};
    struct service inp2 = {"Water Purifier", 250.00};
    struct service inp3 = {"Washing Machine", 150.00};
    struct service inp4 = {"Refrigerator", 175.00};
    fwrite(&inp1, sizeof(struct service), 1, fp);
    fwrite(&inp2, sizeof(struct service), 1, fp);
    fwrite(&inp3, sizeof(struct service), 1, fp);
    fwrite(&inp4, sizeof(struct service), 1, fp);
    if(fwrite==0)
    {
        printf("Error writing file!\n");
        exit(1);
    }
    fclose(fp);
}

//Function to write carpentry services file
void write_carpenterServiceFile()
{
    FILE * fp;
    fp = fopen("carpenterServices.txt", "w");
    struct service inp1 = {"Furniture Installation", 500.00};
    struct service inp2 = {"Furniture Dismantle", 250.00};
    struct service inp3 = {"Assembly", 300.00};
    struct service inp4 = {"Repair work ", 200.00};
    fwrite(&inp1, sizeof(struct service), 1, fp);
    fwrite(&inp2, sizeof(struct service), 1, fp);
    fwrite(&inp3, sizeof(struct service), 1, fp);
    fwrite(&inp4, sizeof(struct service), 1, fp);
    if(fwrite==0)
    {
        printf("Error writing file!\n");
        exit(1);
    }
    fclose(fp);
}

//Function to write electricians list file
void write_rateElectricianFile()
{
    FILE * fp;
    fp = fopen("electricianList.txt", "w");
    struct servicePerson inp1 = {"Arjun", "*****", "9999999999"};
    struct servicePerson inp2 = {"Bharath", "****", "9999999998"};
    struct servicePerson inp3 = {"Chandru", "***", "9999999997"};
    struct servicePerson inp4 = {"Dhanush", "**", "9999999996"};
    struct servicePerson inp5 = {"Elansuriyan", "*", "9999999995"};
    fwrite(&inp1, sizeof(struct servicePerson), 1, fp);
    fwrite(&inp2, sizeof(struct servicePerson), 1, fp);
    fwrite(&inp3, sizeof(struct servicePerson), 1, fp);
    fwrite(&inp4, sizeof(struct servicePerson), 1, fp);
    fwrite(&inp5, sizeof(struct servicePerson), 1, fp);
    if(fwrite==0)
    {
        printf("Error writing file!\n");
        exit(1);
    }
    fclose(fp);
}

//Function to write plumbers list file
void write_ratePlumberFile()
{
    FILE * fp;
    fp = fopen("plumberList.txt", "w");
    struct servicePerson inp1 = {"Gowtham", "*****", "8999999999"};
    struct servicePerson inp2 = {"Harish", "****", "8999999998"};
    struct servicePerson inp3 = {"Jegan", "***", "8999999997"};
    struct servicePerson inp4 = {"Kamal", "**", "8999999996"};
    struct servicePerson inp5 = {"Leo", "*", "8999999995"};
    fwrite(&inp1, sizeof(struct servicePerson), 1, fp);
    fwrite(&inp2, sizeof(struct servicePerson), 1, fp);
    fwrite(&inp3, sizeof(struct servicePerson), 1, fp);
    fwrite(&inp4, sizeof(struct servicePerson), 1, fp);
    fwrite(&inp5, sizeof(struct servicePerson), 1, fp);
    if(fwrite==0)
    {
        printf("Error writing file!\n");
        exit(1);
    }
    fclose(fp);
}

//Function to write repairmen list file
void write_rateRepairmanFile()
{
    FILE * fp;
    fp = fopen("repairmanList.txt", "w");
    struct servicePerson inp1 = {"Muthu", "*****", "7999999999"};
    struct servicePerson inp2 = {"Naren", "****", "7999999998"};
    struct servicePerson inp3 = {"Pranav", "***", "7999999997"};
    struct servicePerson inp4 = {"Ranjini", "**", "7999999996"};
    struct servicePerson inp5 = {"Surya", "*", "7999999995"};
    fwrite(&inp1, sizeof(struct servicePerson), 1, fp);
    fwrite(&inp2, sizeof(struct servicePerson), 1, fp);
    fwrite(&inp3, sizeof(struct servicePerson), 1, fp);
    fwrite(&inp4, sizeof(struct servicePerson), 1, fp);
    fwrite(&inp5, sizeof(struct servicePerson), 1, fp);
    if(fwrite==0)
    {
        printf("Error writing file!\n");
        exit(1);
    }
    fclose(fp);
}

//Function to write carpenters list file
void write_rateCarpenterFile()
{
    FILE * fp;
    fp = fopen("carpenterList.txt", "w");

    struct servicePerson inp1 = {"Tamil", "*****", "6999999999"};
    struct servicePerson inp2 = {"Vijay", "****", "6999999998"};
    struct servicePerson inp3 = {"Watson", "***", "6999999997"};
    struct servicePerson inp4 = {"Yuvan", "**", "6999999996"};
    struct servicePerson inp5 = {"Kumar", "*", "6999999995"};
    fwrite(&inp1, sizeof(struct servicePerson), 1, fp);
    fwrite(&inp2, sizeof(struct servicePerson), 1, fp);
    fwrite(&inp3, sizeof(struct servicePerson), 1, fp);
    fwrite(&inp4, sizeof(struct servicePerson), 1, fp);
    fwrite(&inp5, sizeof(struct servicePerson), 1, fp);
    if(fwrite==0)
    {
        printf("Error writing file!\n");
        exit(1);
    }
    fclose(fp);
}

//The main Function
void main()
{
    int choose;
    char select, temp;

    //Display of the options available and choosing the file to be created
    printf("Enter '1' to create userInfoFile\nEnter '2' to create electricianServiceFile\nEnter '3' to create plumberServiceFile\nEnter '4' to create repairmanServiceFile\nEnter '5' to create carpenterServiceFile\n");
    printf("Enter '6' to create rateElectricianFile\nEnter '7' to create ratePlumberFile\nEnter '8' to create rateRepairmanFile\nEnter '9' to create rateCarpenterFile\n");
    do
    {
        printf("\nEnter: ");
        do
        {
            scanf("%d", &choose);
            if(choose!=1 && choose!=2 && choose!=3 && choose!=4 && choose!=5 && choose!=6 && choose!=7 && choose!=8 && choose!=9)
            {
                printf("***Invalid choice***\nRe-enter : ");
            }
        }while(choose!=1 && choose!=2 && choose!=3 && choose!=4 && choose!=5 && choose!=6 && choose!=7 && choose!=8 && choose!=9);
        switch (choose)
        {
            case 1: write_userInfoFile();
                    break;
            case 2: write_electricianServiceFile();
                    break;
            case 3: write_plumberServiceFile();
                    break;
            case 4: write_repairmanServiceFile();
                    break;
            case 5: write_carpenterServiceFile();
                    break;
            case 6: write_rateElectricianFile();
                    break;
            case 7: write_ratePlumberFile();
                    break;
            case 8: write_rateRepairmanFile();
                    break;
            case 9: write_rateCarpenterFile();
                    break;
        }
        printf("\nDo you want to create another file?\nEnter 'Y' for yes or 'N' for no\n");
        do
        {
            scanf("%c%c", &temp, &select);
            if(select=='N'|| select=='n')
            {
                exit(1);
            }
            else if(select!='Y' && select!='y' && select!='N' && select!='n')
            {
                printf("***Invalid choice***\nRe-enter : ");
            }
        }while(select!='Y' && select!='y' && select!='N' && select!='n');
    }while(select=='Y' || select=='y');
}

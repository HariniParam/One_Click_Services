//Structure to store information(name, rating,and mobile number) about the service persons
struct servicePerson
{
    char name[20];
    char rating[6];
    char mobNo[11];
}ser_person[5];

//Structure to store information(name, profession,and mobile number) about the service persons for printing purpose
struct printServicePerson
{
    char name[20];
    char profession[20];
    char mobNo[11];
}print_person[4];

//Function to print the servicemen available
void print_serviceManInfo(char * file_name, int cnt)
{
    int j, choice_person;
    FILE * fp;

    printf("_______________________________________________________________________________\n");
    fp = fopen(file_name, "r");
    if (fp==NULL)
    {
        fprintf(stderr, "\nError to open the file\n");
        exit(1);
    }
    printf("   %-15s%-15s\t%s\n", "NAME", "RATING", "CONTACT NUMBER");
    for(j=0; j<5; j++)
    {
        fread(&ser_person[j], sizeof(struct servicePerson), 1, fp);
        printf("%d. %-15s%-15s\t%s\n", j+1, ser_person[j].name, ser_person[j].rating, ser_person[j].mobNo);
    }
    printf("_______________________________________________________________________________\n");
    printf("Choose your serviceman: ");
    do
    {
        scanf("%d", &choice_person);
        if(choice_person<1 || choice_person>5)
            printf("***Invalid choice***\nRe-enter : ");
    }while(choice_person<1 || choice_person>5);
    strcpy(print_person[cnt].name, ser_person[choice_person-1].name);
    strcpy(print_person[cnt].mobNo, ser_person[choice_person-1].mobNo);
    fclose(fp);
}

//Function to read,and display details of the selected servicemen
void read_serviceManInfo(int fieldNo[])
{
    int i, cnt = 0, flag[4] = {0,0,0,0};
    char address[50], temp1, profession[4][20] = {"Electrician", "Plumber", "Repairman", "Carpenter"};

    if(fieldNo[0]==1)
    {
        printf("\n***ELECTRICIANS AVAILABLE***\n");
        print_serviceManInfo("electricianList.txt", cnt);
        strcpy(print_person[cnt].profession, profession[0]);
        cnt++;
    }
    if(fieldNo[1]==1)
    {
        printf("\n***PLUMBERS AVAILABLE***\n");
        print_serviceManInfo("plumberList.txt", cnt);
        strcpy(print_person[cnt].profession, profession[1]);
        cnt++;
    }
    if(fieldNo[2]==1)
    {
        printf("\n***REPAIRMEN AVAILABLE***\n");
        print_serviceManInfo("repairmanList.txt", cnt);
        strcpy(print_person[cnt].profession, profession[2]);
        cnt++;
    }
    if(fieldNo[3]==1)
    {
        printf("\n***CARPENTERS AVAILABLE***\n");
        print_serviceManInfo("carpenterList.txt", cnt);
        strcpy(print_person[cnt].profession, profession[3]);
        cnt++;
    }

    scanf("%c", &temp1);

    //Reading the address of the user
    printf("\nAdd Your Residential Address: ");
    scanf("%[^\n]s", address);

    srand(time(0));

    //Printing the selected servicemen along with their contact number,and time
    sleep(2);
    for(i=0; i<cnt; i++)
    {
        //sleep(2);
        printf("\n-->>Serviceman: %s (%s) will be available within %d hour 30 minutes.", print_person[i].name, print_person[i].profession, (rand()%10)+1);
        printf("\nContact Number: %s", print_person[i].mobNo);
    }
    printf("\n_______________________________________________________________________________\n");
    printf("WE CREATE THE PERFECT SHINE EVERY TIME, DON'T FORGET US!! THANK YOU!!\n");
    printf("_______________________________________________________________________________\n");
}

// create a structure called student to get the details of a student such as roll no, full name, 
//address,gender,phone number, faculty, batch year, section. Display all the details of the student
//using a structure variable.
 #include<stdio.h>
 struct student{
 	int roll;
 	char name [20];
 	char address[20];
 	char gender;
 	long long int phoneno;
 	char faculty[15];
 	int batch_year;
 	char section;
 };
int main(){
	struct student em;
		printf("Enter your roll number:");
		scanf("%d%*c",&em.roll);
		
		printf("Enter your name:");
		scanf("%s%*c",em.name);
			
			printf("Enter your address:");
		scanf("%s%*c",em.address);
		
		printf("Enter your gender:");
		scanf("%c%*c",&em.gender);
		
		printf("Enter your phone number:");
		scanf("%lld%*c",&em.phoneno);
		
		printf("Enter your faculty:");
		scanf("%s%*c",&em.faculty);
		
		printf("Enter your batch year:");
		scanf("%d%*c",&em.batch_year);
		
		printf("Enter your section:");
		scanf("%c%*c",&em.section);
		
		printf("\nThe details of the student using a structure variable is: ");
		
		printf("\nRoll number is:%d",em.roll);
printf("\nAddress is:%s",em.address);
printf("\nGender is:%c",em.gender);
printf("\nPhone number is:%lld",em.phoneno);
printf("\nFaculty is:%s",em.faculty);
printf("\nBatch year  is:%d",em.batch_year);
printf("\nSection is:%c",em.section);
printf("\nName is:%s",em.name);
		
		
		
		
		
		
		
	
	return 0;
	
}

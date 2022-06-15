char *month_name(int); 
char *month_name(int n){
//Pointer array 
	static char *name[] = {
		"Ilegal month",
		"January",
		"February",
		"March",
		"April",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	}; 

	return (n < 1 || n > 12) ? name[0] : name[n]; 
}

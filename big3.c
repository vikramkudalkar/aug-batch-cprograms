biggest ()
{
    int a, b, c;
    printf("Enter three numbers: \na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    if (a > b && a > c)
        printf("Biggest number is %d\n", a);
    if (b > a && b > c)
        printf("Biggest number is %d\n", b);
    if (c > a && c > b)
        printf("Biggest number is %d\n", c);
 //   return 0;
}

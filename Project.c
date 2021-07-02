  #include<stdio.h>
  #include<math.h>
  #include<stdlib.h>
  #define RD 57.2957795
  #define RG 63.6619772
  #define f(x) x*x-4*x-10
  #define g(x) 2*x-4
  #define PI 3.141593

  // Function declaration for min/max of two numbers
  int maxxx(int num11, int num22);
  int minnn(int num11, int num22);
  float calculateSD(float data[]);
  float poly(float axa[], int, float);
  float deriv(float axa[], int, float);


  //Global Variables Section
  typedef long double val;
  double e = 0.0001;


  //Structure Definition
  struct complex

    {
      int real, img;
    };

  int main()

  {

    // Variable Declaration

    int ch;
    char ch1 = 'y';
    int n1,n2;
    int result;
    double rresultt;
    int n3,n4;
    float remainder;
    int m,n;
    double x,expo;
    float i,w,si,co,ta,csc,sc,ct;
    float r,z,sih,coh,tah,csch,sch,cth;
    double j,jdeg,asi,aco,ata,acsc,asc,act;
    float log_value,log10_value,q;
    float logh_g,h,g;
    float y,fact=1,number;
    float val;
    float fVal,cVal;
    float degree, radian;
    int xn,expr=0;
    int order,ii;
    int coefficient[order];
    int rows, cols, rr, cc, aa[100][100];
    int mm, nn, ccc, ddd, matrixx[10][10], transposee[10][10];
    double ab, ba, ca, D, root1, root2, realPart, imagPart, root3, root4;
    int num11, num22, maximumm, minimumm;
    double KM;
    int arr[3][3],i2,j2,n5,row,coef=1,space;
    long det;
    int num1,num2,gcd,lcm,rem,numerator,denominator,num,i3,sum2=0,a3,d,tn,sum3=0;
    float a4,r1,last_term,sum4=0,i4,sum5=0,term;
    unsigned long sum6=0;
    float xy[100],average,variance,sum7=0,sum8=0,x2,y2,r3,theta;
    float a100,b100,c100,d100,e100,f100,g100,h100,i100;
    struct complex a, b99, c;
    int x5,y5,z5;
    float mod;
    double grad,radd,degg,grad1,radd1,degg1;
    int i1;
    float data[10];
    float x1, axa[10], y1, dy1;
    int deg, i111;
    float lower, upper, integration=0.0, stepSize, k;
    int i11, subInterval;
    int base, exp;
    long long resultt = 1;
    int e2,r22,n55,npr,ncr,fact1,fact2,fact3;
    long long rresult;
    double resulttt;
    int aya[3][3],iya,jiy;
    float determinantt=0;






    //Program Starts


    printf("\n\t\t\t\t\t\tAdvanced Scientific Calculator\n");

    //Do-While switch case begins

    do

      {
        printf("\n\n\tChoose between type of calculator:");
        printf("\n\n\t 1: Arithmetic Calculator");
        printf("\n\t 2: Trigonometric Calculator");
        printf("\n\t 3: Logarithmic Calculator");
        printf("\n\t 4: Conversions");
        printf("\n\t 5: Algebraic Calculator");
        printf("\n\t 6: Matrix Calculator");
        printf("\n\t 7: Vector Calculator");
        printf("\n\t 8: Complex Calculator");
        printf("\n\t 9: Statistics Calculator");
        printf("\n\t 10: Calculus Calculator");
        printf("\n\t 11: Series Calculator");
        printf("\n\t 12: Miscellaneous Calculator");
        printf("\n\n\tEnter your choice: ");
        scanf("%d",&ch);

          switch(ch)

            {

              case 1:

                do

                  {

                    printf("\n\n\tChoose the arithmetic operation:");
                    printf("\n\n\t 1: Addition");
                    printf("\n\t 2: Subtraction");
                    printf("\n\t 3: Multiplication");
                    printf("\n\t 4: Division");
                    printf("\n\t 5: a^b");
                    printf("\n\t 6: a^2");
                    printf("\n\t 7: Square root of a");
                    printf("\n\t 8: Cube of a");
                    printf("\n\t 9: Cube root of a");
                    printf("\n\t 10: bth root of a");
                    printf("\n\t 11: 2 raised to a");
                    printf("\n\t 12: Reciprocal of b");
                    printf("\n\t 13: Negation of a");
                    printf("\n\t 14: Remainder");
                    printf("\n\t 15: Absolute Value");
                    printf("\n\t 16: Euler's number raised to entered value");
                    printf("\n\t 17: Two raised to entered value");
                    printf("\n\t 18: Ten raised to entered value");
                    printf("\n\t 19: GCD and LCM of two numbers");
                    printf("\n\t 20: Factorial");
                    printf("\n\t 21: Largest and smallest number");
                    printf("\n\n\tEnter your choice: ");
                    scanf("%d",&ch);


                      switch(ch)

                        {
                          case 1: printf("\n\n\tEnter a number: ");
                                  scanf("%d",&n1);

                                  printf("\n\tEnter another number: ");
                                  scanf("%d",&n2);

                                  result=n1+n2;
                                  printf("\n\n\tThe sum is: %d",result);

                                  break;

                          case 2: printf("\n\n\tEnter a number: ");
                                  scanf("%d",&n1);

                                  printf("\n\tEnter another number: ");
                                  scanf("%d",&n2);

                                  result=n1-n2;
                                  printf("\n\n\tThe subtraction of %d",result);

                                  break;

                          case 3: printf("\n\n\tEnter a number: ");
                                  scanf("%d",&n1);

                                  printf("\n\tEnter another number: ");
                                  scanf("%d",&n2);

                                  result=n1*n2;
                                  printf("\n\n\tThe product of %d*%d=%d",n1,n2,result);

                                  break;

                          case 4: printf("\n\n\tEnter a number: ");
                                  scanf("%d",&n1);

                                  printf("\n\tEnter another number: ");
                                  scanf("%d",&n2);

                                  result=n1/n2;
                                  printf("\n\n\tThe quotient of %d/%d=%d",n1,n2,result);

                                  break;

                          case 5: printf("\n\n\tEnter a number: ");
                                  scanf("%d",&n1);

                                  printf("\n\tEnter another number: ");
                                  scanf("%d",&n2);

                                  result=pow(n1,n2);
                                  printf("\n\n\tThe power of %d raised to %d is :%d",n1,n2,result);

                                  break;

                          case 6: printf("\n\n\tEnter a number: ");
                                  scanf("%d",&n1);

                                  result=pow(n1,2);
                                  printf("\n\n\tThe square of %d=%d",n1,result);

                                  break;

                          case 7: printf("\n\n\tEnter a number: ");
                                  scanf("%d",&n1);

                                  resulttt=sqrt(n1);
                                  printf("\n\n\tThe square Root is %lf",resulttt);

                                  break;

                          case 8: printf("\n\n\tEnter a number: ");
                                  scanf("%d",&n1);

                                  result=pow(n1,3);
                                  printf("\n\n\tThe cube of %d=%d",n1,result);

                                  break;

                          case 9: printf("\n\n\tEnter a number: ");
                                  scanf("%d",&n1);

                                  resulttt=cbrt(n1);
                                  printf("\n\n\tThe cube root of %d=%d",n1,resulttt);

                                  break;

                          case 10:printf("\n\n\tEnter a number: ");
                                  scanf("%d",&n1);

                                  printf("\n\tEnter another number: ");
                                  scanf("%d",&n2);

                                  resulttt=pow(n1,(1/n2));
                                  printf("\n\n\tThe %d th root of %d = %lf",n2,n1,resulttt);

                                  break;

                          case 11:printf("\n\n\tEnter a number: ");
                                  scanf("%d",&n1);

                                  result=pow(2,n1);
                                  printf("\n\n\tThe %d th power of 2 = %d",n1,result);

                                  break;

                          case 12:printf("\n\n\tEnter a number: ");
                                  scanf("%d",&n1);

                                  resulttt=pow(n1,-1);
                                  printf("\n\n\tThe reciprocal of %d=%lf",n1,resulttt);

                                  break;

                          case 13:printf("\n\n\tEnter a number: ");
                                  scanf("%d",&n1);

                                  result=-n1;
                                  printf("\n\n\tThe negated value of %d=%d",n1,result);

                                  break;

                          case 14:printf("\n\n\tEnter the dividend to find remainder of: ");
                                  scanf("%d",&n3);

                                  printf("\n\tEnter the divisor: ");
                                  scanf("%d",&n4);

                                  remainder=(n3%n4);

                                  printf("\n\tThe remainder of %d when divided by %d is :%f",n3,n4,remainder);

                                  break;

                          case 15:printf("\n\n\tEnter any two integers whose absolute value you desire to find :");
                                  scanf("%d%d",&m,&n);

                                  m = abs(m);     // m is assigned to 200
                                  n = abs(n);    // n is assigned to -400

                                  printf("\n\tAbsolute value of m = %d", m);
                                  printf("\n\tAbsolute value of n = %d",n);

                                  break;

                          case 16:printf("\n\n\tEnter the number to be the exponent of euler's number: ");
                                  scanf("%lf",&x);

                                  expo=pow(2.71828,x);
                                  printf("\n\tThe value of e^%lf=%lf",x,expo);

                                  break;

                          case 17:printf("\n\n\tEnter the number to be the exponent of 2: ");
                                  scanf("%lf",&x);

                                  expo=pow(2,x);
                                  printf("\n\tThe value of 2^%lf=%lf",x,expo);

                                  break;

                          case 18:printf("\n\n\tEnter the number to be the exponent of 10: ");
                                  scanf("%lf",&x);

                                  expo=pow(10,x);
                                  printf("\n\tThe value of 10^%lf=%lf",x,expo);

                                  break;

                          case 19:printf("\n\n\tEnter two numbers: ");
                                  scanf("%d%d",&num1,&num2);

                                  if(num1>num2)

                                    {
                                      numerator=num1;
                                      denominator=num2;
                                    }

                                  else

                                    {
                                      numerator=num2;
                                      denominator=num1;
                                    }

                                  rem=numerator%denominator;

                                  while(rem!=0)

                                    {
                                      numerator=denominator;
                                      denominator=rem;
                                      rem=numerator%denominator;
                                    }

                                  gcd=denominator;
                                  lcm=num1*num2/gcd;

                                  printf("\n\n\tGCD of %d and %d = %d\n",num1,num2,gcd);
                                  printf("\n\tLCM of %d and %d = %d\n",num1,num2,lcm);

                                  break;

                          case 20:printf("\n\n\tEnter a number to find its factorial :");
                                  scanf("%f",&number);

                                  for(y=1;y<=number;y++)

                                    {
                                    fact=fact*y;
                                    }

                                    printf("\n\tFactorial of %f is: %f",number,fact);

                                  break;

                          case 21:printf("\n\n\tEnter any two numbers: ");
                                  scanf("%d%d", &num11, &num22);

                                  maximumm = maxxx(num11, num22);  // Call maximum function
                                  minimumm = minnn(num11, num22);  // Call minimum function

                                  printf("\n\n\tMaximum = %d\n", maximumm);
                                  printf("\n\tMinimum = %d", minimumm);

                                  break;

                          default:printf("\n\n\tWrong Choice");



                        }
                        printf("\n\n\tDo you want to go again inside arithmetic calculator? (y/n)");
                        scanf(" %c",&ch1);
                  }
                  while(ch1=='y');
                  break;

              case 2:

                do

                  {
                    printf("\n\n\tChoose the type of trigonometric calculator:");
                    printf("\n\n\t 1: Trigonometric Ratios");
                    printf("\n\t 2: Hyperbolic Trigonometric Ratios ");
                    printf("\n\t 3: Inverse Trigonometric Ratios");
                    printf("\n\n\tEnter your choice: ");
                    scanf("%d",&ch);

                      switch(ch)

                        {
                          case 1: printf("\n\n\tEnter the angle in degrees to find trigonometric ratios :");
                                  scanf("%f",&i);

                                  w=i*(3.142857143/180);

                                  si=sin(w);
                                  printf("\n\tThe value of sine(%f)=%f",w,si);

                                  co=cos(w);
                                  printf("\n\tThe value of cosine(%f)=%f",w,co);

                                  ta=tan(w);
                                  printf("\n\tThe value of tangent(%f)=%f",w,ta);

                                  csc=(1/sin(w));
                                  printf("\n\tThe value of cosec(%f)=%f",w,csc);

                                  sc=(1/cos(w));
                                  printf("\n\tThe value of sec(%f)=%f",w,sc);

                                  ct=(1/tan(w));
                                  printf("\n\tThe value of cot(%f)=%f",w,ct);

                                  break;

                          case 2: printf("\n\n\tPlease enter angle in degrees to find hyperbolic trigonometric ratios :");
                                  scanf("%f",&z);

                                  r=z*(3.142857143/180);

                                  sih=sinh(r);
                                  printf("\n\tThe value of hyperbolic sine(%f)=%f",r,sih);

                                  coh=cosh(r);
                                  printf("\n\tThe value of hyperbolic cosine(%f)=%f",r,coh);

                                  tah=tanh(r);
                                  printf("\n\tThe value of hyperbolic tangent(%f)=%f",r,tah);

                                  csch=(1/sinh(r));
                                  printf("\n\tThe value of hyperbolic cosec(%f)=%f",r,csch);

                                  sch=(1/cosh(r));
                                  printf("\n\tThe value of hyperbolic sec(%f)=%f",r,sch);

                                  cth=(1/tanh(r));
                                  printf("\n\tThe value of hyperbolic tan(%f)=%f",r,cth);

                                  break;

                          case 3: printf("\n\n\tPlease enter the value in degree to get arc trigonometric ratios :");
                                  scanf("%lf",&j);

                                  j = jdeg*(PI/180.0);

                                  asi=asin(j);
                                  printf("\n\tThe value of arc sin(%lf)=%lf",j,asi);

                                  aco=acos(j);
                                  printf("\n\tThe value of arc cos(%lf)=%lf",j,aco);

                                  ata=atan(j);
                                  printf("\n\tThe value of arc tan(%lf)=%lf",j,ata);

                                  acsc=(1/asin(j));
                                  printf("\n\tThe value of arc cosec(%lf)=%lf",j,acsc);

                                  asc=(1/acos(j));
                                  printf("\n\tThe value of arc sec(%lf)=%lf",j,asc);

                                  act=(1/atan(j));
                                  printf("\n\tThe value of arc cot(%lf)=%lf",j,act);

                                  break;

                          default:printf("\n\n\tWrong Choice");
                        }
                        printf("\n\n\tDo you want to go again inside trigonometric calculator? (y/n)");
                        scanf(" %c",&ch1);
                  }
                  while(ch1=='y');
                  break;

              case 3:

                do

                  {
                    printf("\n\n\tChoose the logarithmic function:");
                    printf("\n\n\t 1: Log to the base 'e'");
                    printf("\n\n\t 2: Log to the base 10");
                    printf("\n\n\t 1: Log to the base 'Entered Number'");
                    printf("\n\n\tEnter your choice: ");
                    scanf("%d",&ch);

                      switch(ch)

                        {
                          case 1: printf("\n\n\tEnter the argument for finding log of base e:");
                                  scanf("%f",&q);

                                  log_value = log(q);

                                  printf("\n\tThe log to the base e of %f=%f",q,log_value);

                                  break;

                          case 2: printf("\n\n\tEnter the argument for finding log of base 10 :");
                                  scanf("%f",&q);

                                  log10_value = log10(q);

                                  printf("\n\tThe log to the base 10 of %f=%f",q,log10_value);

                                  break;

                          case 3: printf("\n\n\tPlease enter the argument and base to find log :");
                                  scanf("%f%f",&h,&g);

                                  logh_g=((log10(h))/(log10(g)));

                                  printf("\n\tThe log of %f with base %f = %f",h,g,logh_g);

                                  break;

                          default:printf("\n\n\tWrong Choice");
                                  break;

                        }
                        printf("\n\n\tDo you want to go again inside Logarithmic calculator? (y/n)");
                        scanf(" %c",&ch1);
                  }
                  while(ch1=='y');
                  break;

              case 4:

                do

                  {
                    printf("\n\n\tChoose the Conversions:");
                    printf("\n\n\t 1: Degrees to Radians");
                    printf("\n\t 2: Radians to Degrees");
                    printf("\n\t 3: Gradians to Degrees");
                    printf("\n\t 4: Degrees to Gradians");
                    printf("\n\t 5: Gradians to Radians");
                    printf("\n\t 6: Radians to Gradians");
                    printf("\n\t 7: Length Conversions");
                    printf("\n\t 8: Area Conversions");
                    printf("\n\t 9: Volume Conversions");
                    printf("\n\t 10: Speed Conversions");
                    printf("\n\t 11: Weight Conversions");
                    printf("\n\t 12: Temperature Conversions");
                    printf("\n\t 13: Cartesian coordinates to polar coordinates");
                    printf("\n\t 14: Polar coordinates to Cartesian coordinates");
                    printf("\n\n\tEnter your choice: ");
                    scanf("%d",&ch);

                      switch(ch)

                        {
                          case 1: printf("\n\n\tEnter angle in Degrees: ");
                                  scanf("%f", &degree);

                                  radian=degree*(PI/180.0);

                                  printf("\n\tAngle in Radian is %f",radian);

                                  break;

                          case 2: printf("\n\n\tEnter angle in radians: ");
                                  scanf("%f",&radian);

                                  degree=radian*(180.0/PI);

                                  printf("\n\tAngle in Degree is %f",degree);

                                  break;

                          case 3: printf("\n\n\tEnter the angle in Gradians: ");
                                  scanf("%lf",&grad);

                                  degree=grad*0.9;
                                  printf("\n\tAngle in Degrees: %.4lf\n",degg);

                                  break;

                          case 4: printf("\n\n\tEnter the angle in Degrees: ");
                                  scanf("%lf",&degg1);

                                  grad1=(1.11111)*degg1;
                                  printf("\n\tAngle in Gradians : %.4lf\n",grad1);

                                  break;

                          case 5: printf("\n\n\tEnter the angle in Gradians: ");
                                  scanf("%lf",&grad);

                                  radian=63.662*grad;
                                  printf("\n\tAngle in Radians : %.4lf\n",radd);

                                  break;

                          case 6: printf("\n\n\tEnter the angle in Radians : ");
                                  scanf("%lf",&radd1);

                                  grad1=0.01571*radd1;
                                  printf("\n\tAngle in Gradians : %.4lf\n",grad1);

                                  break;

                          case 7:

                            do

                              {
                                printf("\n\n\tChoose the length conversion:");
                                printf("\n\n\t 1: M to KM");
                                printf("\n\t 2: KM to M");
                                printf("\n\t 3: M to CM");
                                printf("\n\t 4: CM to M");
                                printf("\n\t 5: M to DM");
                                printf("\n\t 6: DM to M");
                                printf("\n\t 7: FOOT to INCH");
                                printf("\n\t 8: INCH to FOOT");
                                printf("\n\t 9: M to FOOT");
                                printf("\n\t 10: FOOT to M");
                                printf("\n\t 11: KM to Mile");
                                printf("\n\t 12: Mile to KM");
                                printf("\n\t 13: Nautical mile to metre");
                                printf("\n\t 14: Metre to nautical mile");
                                printf("\n\n\tEnter your choice: ");
                                scanf("%d",&ch);

                                printf("\n\n\tEnter the Quantity: ");
                                scanf("%lf",&KM);

                                  switch(ch)

                                    {
                                      case 1: rresultt=KM/1000;
                                              printf("\n\n\t%lf M = %lf KM\n",KM,rresultt);
                                              break;

                                      case 2: rresultt=KM*1000;
                                              printf("\n\n\t%lf KM = %lf M\n",KM,rresultt);
                                              break;

                                      case 3: rresultt=KM*100;
                                              printf("\n\n\t%lf M = %lf CM\n",KM,rresultt);
                                              break;

                                      case 4: rresultt=KM/100;
                                              printf("\n\n\t%lf CM = %lf M\n",KM,rresultt);
                                              break;

                                      case 5: rresultt=KM*10;
                                              printf("\n\n\t%lf M = %lf DM\n",KM,rresultt);
                                              break;

                                      case 6: rresultt=KM/10;
                                              printf("\n\n\t%lf DM = %lf M\n",KM,rresultt);
                                              break;

                                      case 7: rresultt=KM*12;
                                              printf("\n\n\t%lf FOOT = %lf INCH\n",KM,rresultt);
                                              break;

                                      case 8: rresultt=KM/12;
                                              printf("\n\n\t%lf INCH = %lf FOOT\n",KM,rresultt);
                                              break;

                                      case 9: rresultt=KM*3.28;
                                              printf("\n\n\t%lf M = %lf FOOT\n",KM,rresultt);
                                              break;

                                      case 10:rresultt=KM/3.28;
                                              printf("\n\n\t%lf FOOT = %lf M\n",KM,rresultt);
                                              break;

                                      case 11:rresultt = (KM*0.621371);
                                              printf("\n\n\t The value in miles is %.3lf",rresultt);
                                              break;

                                      case 12:rresultt = (KM*1.60934);
                                              printf("\n\n\t The value in kilometres is %.3lf",rresultt);
                                              break;

                                      case 13:rresultt = (KM*1852);
                                              printf("\n\n\t The value in metres is %.3lf",rresultt);
                                              break;

                                      case 14:rresultt = (KM*0.000539957);
                                              printf("\n\n\t The value in nautical miles is %.3lf",rresultt);
                                              break;

                                      default:printf("\n\n\tWrong Choice");

                                    }
                                    printf("\n\n\tDo you want to perform any other length conversions? (y/n)");
                                    scanf(" %c",&ch1);

                              }
                              while(ch1=='y');
                              break;

                          case 8:

                            do

                              {
                                printf("\n\n\tChoose the area conversion:");
                                printf("\n\n\t 1: M^2 to KM^2");
                                printf("\n\t 2: KM^2 to M^2");
                                printf("\n\t 3: YARD to M^2");
                                printf("\n\t 4: M^2 to YARD");
                                printf("\n\t 5: ACRE to HECTARE");
                                printf("\n\t 6: HECTARE to ACRE");
                                printf("\n\t 7: ACRE to M^2");
                                printf("\n\t 8: M^2 to ACRE");
                                printf("\n\t 9: FOOT to ACRE^2");
                                printf("\n\t 10: ACRE^2 to FOOT");
                                printf("\n\n\tEnter your choice: ");
                                scanf("%d",&ch);

                                printf("\n\n\tEnter The Quantity: ");
                                scanf("%lf",&KM);

                                  switch(ch)

                                    {
                                      case 1: rresultt=KM/1000000;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 2: rresultt=KM*1000000;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 3: rresultt=KM/1.1959;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 4: rresultt=KM*1.1959;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 5: rresultt=KM/2.471;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 6: rresultt=KM*2.471;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 7: rresultt=KM*4046.945;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 8: rresultt=KM/4046.945;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 9: rresultt= KM/43560.95;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 10:rresultt=KM*43560.95;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      default:printf("\n\n\tWrong Choice");
                                              break;
                                    }
                                    printf("\n\n\tDo you want to perform any other area conversions? (y/n)");
                                    scanf(" %c",&ch1);

                              }
                              while(ch1=='y');
                              break;

                          case 9:

                            do

                              {
                                printf("\n\n\tChoose the volume conversion:");
                                printf("\n\n\t 1: LITRE to ML");
                                printf("\n\t 2: ML to LITRE");
                                printf("\n\t 3: LITRE to CENTI LITRE");
                                printf("\n\t 4: CENTI LITRE to LITRE");
                                printf("\n\t 5: LITRE to DECILITRE");
                                printf("\n\t 6: DECILITRE to LITRE");
                                printf("\n\t 7: LITRE to US GALLON");
                                printf("\n\t 8: US GALLON to LITRE  ");
                                printf("\n\t 9: LITRE to HECTOLITRE");
                                printf("\n\t 10: HECTOLITRE to LITRE");
                                printf("\n\n\tEnter your choice: ");
                                scanf("%d",&ch);

                                printf("\n\n\tEnter the Quantity: ");
                                scanf("%lf",&KM);

                                  switch(ch)

                                    {
                                      case 1: rresultt=KM*1000;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 2: rresultt=KM/1000;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 3: rresultt=KM*100;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 4: rresultt=KM/100;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 5: rresultt=KM*10;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 6: rresultt=KM/10;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 7: rresultt=KM*0.2641720;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 8: rresultt=KM/0.2641720;
                                             printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 9: rresultt=KM/100;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 10:rresultt=KM*100;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      default:printf("\n\n\tWrong Choice");
                                              break;

                                    }
                                    printf("\n\n\tDo you want to perform any other volume conversions? (y/n)");
                                    scanf(" %c",&ch1);

                              }
                              while(ch1=='y');
                              break;

                          case 10:

                            do

                              {
                                printf("\n\n\tChoose the speed conversion:");
                                printf("\n\n\t 1: KM/s to KM/h");
                                printf("\n\t 2: KM/h TO KM/s");
                                printf("\n\t 3: KM/h TO MILE/h");
                                printf("\n\t 4: MILE/h TO KM/h");
                                printf("\n\t 5: KM/s TO M/s");
                                printf("\n\t 6: M/s TO KM/s");
                                printf("\n\t 7: Convert speed of light KM/s");
                                printf("\n\t 8: Convert speed of light KM/h");
                                printf("\n\t 9: M/s TO INCH/s");
                                printf("\n\t 10: INCH/s TO M/s");
                                printf("\n\n\tEnter your choice: ");
                                scanf("%d",&ch);

                                printf("\n\n\tEnter the Quantity: ");
                                scanf("%lf",&KM);

                                  switch(ch)

                                    {
                                      case 1: rresultt=KM*3600;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 2: rresultt=KM/3600;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 3: rresultt=KM/1.6093;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 4: rresultt=KM*1.6093;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 5: rresultt=KM*1000;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 6: rresultt=KM/1000;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 7: rresultt=KM*299796.1386;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 8: rresultt=KM*1079266099.05;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 9: rresultt=KM*39.38;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 10:rresultt=KM/39.38;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      default:printf("\n\n\tWrong Choice");
                                              break;

                                    }
                                    printf("\n\n\tDo you want to perform any other speed conversions? (y/n)");
                                    scanf(" %c",&ch1);
                              }
                              while(ch1=='y');
                              break;

                          case 11:

                            do

                              {
                                printf("\n\n\tChoose the weight conversion:");
                                printf("\n\n\t 1: KG TO GRAM");
                                printf("\n\t 2: GRAM to KG");
                                printf("\n\t 3: KG to MG");
                                printf("\n\t 4: MG to KG");
                                printf("\n\t 5: KG to POUND");
                                printf("\n\t 6: POUND to KG");
                                printf("\n\t 7: KG to CARAT ");
                                printf("\n\t 8: CARAT to KG");
                                printf("\n\t 9: KG to LONG TON");
                                printf("\n\t 10: LOG TON to KG");
                                printf("\n\t 11: KG to QUINTAL");
                                printf("\n\t 12: QUINTAL to KG");
                                printf("\n\n\tEnter your choice: ");
                                scanf("%d",&ch);

                                printf("\n\n\tEnter the Quantity: ");
                                scanf("%lf",&KM);

                                  switch(ch)

                                    {
                                      case 1: rresultt=KM*1000;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 2: rresultt=KM/1000;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 3: rresultt=KM*1000000;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 4: rresultt=KM/1000000;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 5: rresultt=KM*2.2046;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 6: rresultt=KM/2.2046;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 7: rresultt=KM*5000;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 8: rresultt=KM/5000;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 9: rresultt=KM/1016.55;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 10:rresultt=KM*1016.53;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 11:rresultt=KM/100;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 12:rresultt=KM*100;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      default:printf("\n\n\tWrong Choice");
                                              break;

                                    }
                                    printf("\n\n\tDo you want to perform any other weight conversions? (y/n)");
                                    scanf(" %c",&ch1);
                              }
                              while(ch1=='y');
                              break;

                          case 12:

                            do

                              {
                                printf("\n\n\tChoose the temperature conversion:");
                                printf("\n\n\t 1: CENTI GRADE to FARENHITE");
                                printf("\n\t 2: FARENHITE to CENTIGRADE");
                                printf("\n\t 3: FARENHITE to KELVIN");
                                printf("\n\t 4: KELVIN to FARENHITE");
                                printf("\n\t 5: CENTI GRADE to KELVIN");
                                printf("\n\t 6: KELVIN to CENTI GRADE");
                                printf("\n\n\tEnter your choice: ");
                                scanf("%d",&ch);

                                printf("\n\n\tEnter the Quantity: ");
                                scanf("%lf",&KM);

                                  switch(ch)

                                    {
                                      case 1: rresultt=(1.8*KM)+32;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 2: rresultt=(KM-32)/1.8;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 3: rresultt=(KM-32)*5/9+273.15;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 4: rresultt=(KM-273.15)*9/5+32;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 5: rresultt=KM+273.15;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      case 6: rresultt=KM-273.15;
                                              printf("\n\n\t%lf",rresultt);
                                              break;

                                      default:printf("\n\n\tWrong Choice");
                                              break;

                                    }
                                    printf("\n\n\tDo you want to perform any other temperature conversions? (y/n)");
                                    scanf(" %c",&ch1);
                              }
                              while(ch1=='y');
                              break;

                          case 13:
                                  printf("\n\n\tEnter Cartesian coordinate x : ");
                                  scanf("%f",&x2);

                                  printf("\n\tEnter Cartesian coordinate y : ");
                                  scanf("%f",&y2);

                                  r3=sqrt(x2*x2+y2*y2);

                                  theta=atan(y2/x2);
                                  theta=180.0*theta/PI;

                                  printf("\n\n\tPolar coordinates are : r = %0.2f and theta = %0.2f in degrees",r3,theta);

                                  break;

                          case 14:printf("\n\n\tEnter radius of polar coordinate (r): ");
                                  scanf("%f",&r3);

                                  printf("\n\tEnter angle of polar coordinate in degrees (theta): ");
                                  scanf("%f",&theta);

                                  theta = theta * PI/180.0;

                                  x2 = r3 * cos(theta);
                                  y2 = r3 * sin(theta);

                                  printf("\n\n\tCartesian coordinates are (x,y) : (%0.3f, %0.3f)", x2, y2);

                                  break;

                          default:printf("\n\n\tWrong Choice");
                                  break;

                        }
                        printf("\n\n\tDo you want to perform any other conversions? (y/n)");
                        scanf(" %c",&ch1);

                  }
                  while(ch1=='y');
                  break;

              case 5:

                do

                  {
                    printf("\n\n\tChoose the algebraic Operation: ");
                    printf("\n\n\t 1: Zeroes of polynomial");
                    printf("\n\t 2: Roots of Quadratic Equations");
                    printf("\n\n\tEnter your choice: ");
                    scanf("%d",&ch);

                      switch(ch)

                        {
                          case 1: printf("\n\n\tValue of x\n");
                                  scanf("%d",&xn);

                                  printf("\n\ntEnter order of polynomial\n");
                                  scanf("%d",&order);

                                  for(ii=0;ii<=order;ii++)

                                    {
                                      printf("\n\n\tEnter coefficients of polynomial at x^%d\n",ii);
                                      scanf("%d",&coefficient[ii]);
                                    }

                                  for(ii=0;ii<=order;ii++)

                                    {
                                     expr+=coefficient[ii]*pow(xn,ii);
                                    }

                                  for(ii=order;ii>=0;ii--)

                                    {
                                     if(ii>0)
                                     printf("\n\n\t%dx^%d+",coefficient[ii],ii);
                                     else
                                     printf("\n\n\t%dx^%d=",coefficient[ii],ii);
                                    }

                                  printf("\n\n\t%d",expr);

                                  break;

                          case 2: printf("\n\n\tEnter coefficients a, b and c: ");

                                  scanf("%lf %lf %lf", &ab, &ba, &ca);

                                  D =(ba * ba)-(4 * ab * ca);

                                  // condition for real and different roots

                                  if (D > 0)

                                    {
                                      root1 = (-ba + sqrt(D))/(2 * ab);

                                      root2 = (-ba - sqrt(D))/(2 * ab);

                                      printf("\n\n\troot1 = %.2lf and root2 = %.2lf", root1, root2);

                                    }

                                  // condition for real and equal roots

                                  else if (D == 0)

                                    {

                                      root1 = root2 = -ba / (2 * ab);

                                      printf("\n\n\troot1 = root2 = %.2lf;", root1);

                                    }

                                  // if roots are not real

                                  else

                                    {
                                      realPart = (-ba) / (2 * ab);

                                      imagPart = (sqrt(-D)) / (2 * ab);

                                      root3=realPart+imagPart;

                                      root4=realPart-imagPart;

                                      printf("\n\n\troot1 = %lf and root2 = %lf", root3, root4);

                                    }
                                  break;

                          default:printf("\n\n\tWrong Choice");
                                  break;


                        }
                        printf("\n\n\tDo you want to perform any other algebraic operations? (y/n)");
                        scanf(" %c",&ch1);

                  }
                  while(ch1=='y');
                  break;

              case 6:

                do

                  {
                    printf("\n\n\tChoose the matrix operation to perform:");
                    printf("\n\n\t 1: Matrix Inverse");
                    printf("\n\n\t 2: Special Matrices");
                    printf("\n\n\t 3: Finding determinant of 3x3 matrix and checking if it is basis of R3 vector space");
                    printf("\n\n\tEnter your choice: ");

                    scanf("%d",&ch);

                      switch(ch)

                        {
                          case 1: printf("\n\n\tEnter the 9 elements of matrix: ");

                                  for(iya=0;iya<3;iya++)
                                      for(jiy=0;jiy<3;jiy++)
                                           scanf("%d",&aya[iya][jiy]);

                                  printf("\n\n\tThe matrix is\n");

                                  for(iya=0;iya<3;iya++)
                                    {
                                      printf("\n\t");
                                      for(jiy=0;jiy<3;jiy++)
                                           printf("%d\t",aya[iya][jiy]);
                                    }

                                  for(iya=0;iya<3;iya++)
                                      determinantt = determinantt + (aya[0][iya]*(aya[1][(iya+1)%3]*aya[2][(iya+2)%3] - aya[1][(iya+2)%3]*aya[2][(iya+1)%3]));

                                   printf("\n\n\tInverse of matrix is: \n\n");

                                 for(iya=0;iya<3;iya++)
                                    {
                                      for(jiy=0;jiy<3;jiy++)
                                          {printf("%.2f\t",((aya[(iya+1)%3][(jiy+1)%3] * aya[(iya+2)%3][(jiy+2)%3]) - (aya[(iya+1)%3][(jiy+2)%3]*aya[(iya+2)%3][(jiy+1)%3]))/ determinantt);}

                                          printf("\n");
                                    }
                                  break;

                          case 2:

                            do

                              {
                                printf("\n\n\tChoose the special matrix operation:");
                                printf("\n\n\t 1: Triangular Matrix");
                                printf("\n\n\t 2: Symmetric Matrix");
                                printf("\n\n\tEnter your choice: ");
                                scanf("%d",&ch);

                                  switch(ch)

                                    {
                                      case 1: printf("\n\n\tPlease enter the number of rows for the matrix: ");
                                              scanf("%d", &rows);
                                              printf("\n");

                                              printf("\n\tPlease enter the number of columns for the matrix: ");
                                              scanf("%d", &cols);
                                              printf("\n");

                                              printf("\n\tPlease enter the elements for the Matrix: ");

                                              for(rr = 0; rr < rows; rr++)

                                                {
                                                  for(cc = 0;cc < cols;cc++)

                                                    {
                                                      scanf("%d", &aa[rr][cc]);
                                                    }
                                                }

                                              if(rows != cols)

                                                {
                                                  printf("\n\tMatrix should be a square matrix\n");
                                                }

                                              else

                                                {


                                                  printf("\n\n\tLower triangular matrix: \n\n");

                                                  for(int rr = 0; rr < rows; rr++)

                                                    {

                                                      for(int cc = 0; cc < cols; cc++)

                                                        {
                                                          if(cc > rr)
                                                          {printf("0\t");}

                                                          else
                                                          {printf("%d\t", aa[rr][cc]);}
                                                        }
                                                      printf("\n\t");
                                                    }



                                                  printf("\n\tUpper triangular matrix: \n\n");

                                                  for(int rr = 0; rr < rows; rr++)

                                                    {
                                                      for(int cc = 0; cc < cols; cc++)

                                                      {
                                                        if(rr > cc)
                                                          {printf("0\t");}
                                                        else
                                                          {printf("%d\t", aa[rr][cc]);}
                                                      }
                                                      printf("\n\t");
                                                    }
                                                }
                                              break;

                                      case 2: printf("\n\n\tEnter the number of rows and columns of matrix: ");
                                              scanf("%d%d", &mm, &nn);
                                              printf("\n\tEnter elements of the matrix:\n\n");

                                              for (ccc = 0; ccc < mm; ccc++)
                                                for (ddd = 0; ddd < nn; ddd++)
                                                  scanf("%d", &matrixx[ccc][ddd]);

                                              for (ccc = 0; ccc < mm; ccc++)
                                                for (ddd = 0; ddd < nn; ddd++)
                                                  transposee[ddd][ccc] = matrixx[ccc][ddd];

                                              if (mm == nn) /* check if order is same */
                                              {
                                                for (ccc = 0; ccc < mm; ccc++)
                                                {
                                                  for (ddd = 0; ddd < mm; ddd++)
                                                  {
                                                    if (matrixx[ccc][ddd] != transposee[ccc][ddd])
                                                      break;
                                                  }
                                                  if (ddd != mm)
                                                    break;
                                                }
                                                if (ccc == mm)
                                                  printf("\n\tThe matrix is symmetric.");

                                                else
                                                  printf("\n\tThe matrix is not symmetric.");
                                              }
                                              else
                                                printf("\n\tThe matrix is not symmetric.");

                                              break;

                                      default:printf("\n\n\tWrong Choice");
                                              break;

                                    }
                                    printf("\n\n\tDo you want to repeat operations? (y/n)");
                                    scanf(" %c",&ch1);

                              }
                              while(ch1=='y');
                              break;


                          case 3: printf("\n\n\tEnter a 3 X 3 Matrix : ");
                                  printf("\n\tEnter the elements of matrix : \n");

                                  for(i2=0;i2<3;i2++)
                                  {
                                    for(j2=0;j2<3;j2++)
                                      {
                                        printf("\n\n\tEnter the values for [%d][%d] : ",i2,j2);
                                        scanf("%d",&arr[i2][j2]);
                                      }
                                  }

                                  printf("\n\n\tThe matrix is: ");

                                  for(i2=0;i2<3;i2++)
                                    {
                                      printf("\n");

                                      for(j2=0;j2<3;j2++)
                                        {printf("%d\t",arr[i2][j2]);}
                                    }

                                  det=arr[0][0]*((arr[1][1]*arr[2][2])-(arr[2][1]*arr[1][2]))-arr[0][1]*((arr[1][0]*arr[2][2])-(arr[2][0]*arr[1][2]))+arr[0][2]*((arr[1][0]*arr[2][1])-(arr[2][0]*arr[1][1]));

                                  printf("\n\n\tDeterminant of 3X3 matrix: %ld", det);

                                  if(det!=0)
                                    {
                                      printf("\n\tThe vectors forms the basis of R%d as the determinant is non-zero\n",3);
                                    }
                                  else
                                    {
                                      printf("\n\tThe vectors doesn't form the basis of R%d as the determinant is zero\n",3);
                                    }

                                  break;

                          default:printf("\n\n\tWrong Choice");
                                  break;

                        }
                        printf("\n\n\tDo you want to repeat operations? (y/n)");
                        scanf(" %c",&ch1);
                  }
                  while(ch1=='y');
                  break;

              case 7: //type coordinates i j k as i,j,k only for correct output

                do

                  {
                    printf("\n\n\tChoose the vector Operation:");
                    printf("\n\n\t 1: Magnitude of Vector");
                    printf("\n\t 2: Direction of vector w.r.t.X,Y,Z axes");
                    printf("\n\t 3: Angle between two vectors");
                    printf("\n\t 4: Vectorial addition");
                    printf("\n\t 5: Vectorial subtraction");
                    printf("\n\t 6: Product of scalar and vector");
                    printf("\n\t 7: Scalar product of Vectors");
                    printf("\n\t 8: Vector product of Vectors");
                    printf("\n\n\tEnter your choice: ");
                    scanf("%d",&ch);

                      switch(ch)

                        {

                          case 1: printf("\n\n\tEnter {I,J,K components} of vector (A):");
                                  scanf("%f,%f,%f",&a100,&b100,&c100);

                                  d100=sqrt(a100*a100+b100*b100+c100*c100);

                                  printf("\n\t Vector (A) is (%f)I+(%f)J+(%f)K \n",a100,b100,c100);
                                  printf("\n\t Magnitude of Vector (A) is {%f} \n\n ",d100);

                                  break;

                          case 2: printf("\n\n\tEnter {I,J,K components} of vector (A):");
                                  scanf("%f,%f,%f",&a100,&b100,&c100);

                                  if(a100==0&&b100==0&&c100==0)

                                    {
                                      printf("\n\t Vector (A) is (%f)I+(%f)j+(%f)K \n",a100,b100,c100);
                                      printf("\n\t Direction of Vector (A) IS UNDEFINED:TRY AGAIN \n\n ");
                                    }

                                  else

                                  {
                                    anglemid_vector(a100,b100,c100,1,0,0,1,d100,0);
                                    anglemid_vector(a100,b100,c100,0,1,0,1,e100,0);
                                    anglemid_vector(a100,b100,c100,0,0,1,1,f100,0);

                                    printf("\n\t Vector (A) is (%f)I+(%f)J+(%f)K \n",a100,b100,c100);
                                    printf("\n\t Vector (A) makes with [X axis] an angle of {%f} \n",d100);
                                    printf("\n\t Vector (A) makes with [Y axis] an angle of {%f} \n",e100);
                                    printf("\n\t Vector (A) makes with [Z axis] an angle of {%f} \n\n ",f100);
                                  }

                                  break;

                          case 3: printf("\n\n\tEnter {I,J,K components} of vector (A):");
                                  scanf("%f,%f,%f",&a100,&b100,&c100);

                                  printf("\n\n\t Enter {I,J,K components} of vector (B):");
                                  scanf("%f,%f,%f",&d100,&e100,&f100);

                                  if((a100*a100+b100*b100+c100*c100)!=0&&(d100*d100+e100*e100+f100*f100)!=0)

                                    {
                                      anglemid_vector(a100,b100,c100,d100,e100,f100,1,g100,0);
                                      printf("\n\t Vector (A) is (%f)I+(%f)J+(%f)K \n",a100,b100,c100);
                                      printf("\n\t Vector (B) is (%f)I+(%f)J+(%f)K \n",d100,e100,f100);
                                      printf("\n\t Angle between vectors (A) and (B) is {%f} \n\n ",g100);
                                    }

                                  else

                                    {
                                      printf("\n\t Vector (A) is (%f)I+(%f)J+(%f)K \n",a100,b100,c100);
                                      printf("\n\t Vector (B) is (%f)I+(%f)J+(%f)K \n",d100,e100,f100);
                                      printf("\n\t Angle between vectors (A) and (B) IS UNDEFINED:TRY AGAIN \n\n ");
                                    }

                                  break;

                          case 4: printf("\n\n\tEnter {I,J,K components} of vector (A):");
                                  scanf("%f,%f,%f",&a100,&b100,&c100);

                                  printf("\n\t Enter {I,J,K components} of vector (B):");
                                  scanf("%f,%f,%f",&d100,&e100,&f100);

                                  g100=a100+d100;
                                  h100=b100+e100;
                                  i100=c100+f100;

                                  printf("\n\t Vector (A) is (%f)I+(%f)J+(%f)K \n",a100,b100,c100);
                                  printf("\n\t Vector (B) is (%f)I+(%f)J+(%f)K \n",d100,e100,f100);
                                  printf("\n\t Vector (A)+(B) is {%f}I+{%f}J+{%f}K \n\n ",g100,h100,i100);

                                  break;

                          case 5: printf("\n\n\tEnter {I,J,K components} of vector (A):");
                                  scanf("%f,%f,%f",&a100,&b100,&c100);

                                  printf("\n\n\t Enter {I,J,K components} of vector (B):");
                                  scanf("%f,%f,%f",&d100,&e100,&f100);

                                  g100=a100-d100;
                                  h100=b100-e100;
                                  i100=c100-f100;

                                  printf("\n\t Vector (A) is (%f)I+(%f)J+(%f)K \n",a100,b100,c100);
                                  printf("\n\t Vector (B) is (%f)I+(%f)J+(%f)K \n",d100,e100,f100);
                                  printf("\n\t Vector (A)-(B) is {%f}I+{%f}J+{%f}K \n\n ",g100,h100,i100);

                                  break;

                          case 6: printf("\n\n\tEnter {a} value:");
                                  scanf("%f",&a100);

                                  printf("\n\n\tEnter {I,J,K components} of vector (A):");
                                  scanf("%f,%f,%f",&b100,&c100,&d100);

                                  e100=a100*b100;
                                  f100=a100*c100;
                                  g100=a100*d100;

                                  printf("\n\t Vector (A) is (%f)I+(%f)J+(%f)K \n",b100,c100,d100);
                                  printf("\n\t Vector [%f]*(A) is {%f}I+{%f}J+{%f}K \n\n ",a100,e100,f100,g100);

                                  break;

                          case 7: printf("\n\n\tEnter {I,J,K components} of vector (A):");
                                  scanf("%f,%f,%f",&a100,&b100,&c100);

                                  printf("\n\n\tEnter {I,J,K components} of vector (B):");
                                  scanf("%f,%f,%f",&d100,&e100,&f100);

                                  g100=a100*d100+b100*e100+c100*f100;

                                  printf("\n\t Vector (A) is (%f)I+(%f)J+(%f)K \n",a100,b100,c100);
                                  printf("\n\t Vector (B) is (%f)I+(%f)J+(%f)K \n",d100,e100,f100);
                                  printf("\n\t Scalar product OR Dot product of Vectors \n");
                                  printf("\n\t (A) and (B) represented by (A).(B) is {%f} \n\n ",g100);

                                  break;

                          case 8: printf("\n\n\tEnter {I,J,K components} of vector (A):");
                                  scanf("%f,%f,%f",&a100,&b100,&c100);

                                  printf("\n\n\tEnter {I,J,K components} of vector (B):");
                                  scanf("%f,%f,%f",&d100,&e100,&f100);

                                  g100=b100*f100-c100*e100;
                                  h100=c100*d100-a100*f100;
                                  i100=a100*e100-b100*d100;

                                  printf("\n\t Vector (A) is (%lf)I+(%lf)J+(%lf)K \n",a100,b100,c100);
                                  printf("\n\t Vector (B) is (%lf)I+(%lf)J+(%lf)K \n",d100,e100,f100);
                                  printf("\n\t Vector product OR Cross product of Vectors (A) and (B) \n");
                                  printf("\n\t represented by (A)x(B) is {%lf}I+{%lf}J+{%lf}K \n\n ",g100,h100,i100);

                                  break;

                          default:printf("\n\n\tWrong Choice");
                                  break;

                        }
                        printf("\n\n\tDo you want to repeat operations? (y/n)");
                        scanf(" %c",&ch1);
                  }
                  while(ch1=='y');
                  break;

              case 8:

                do

                  {
                    printf("\n\n\tChoose the complex number operation");
                    printf("\n\n\t 1: Addition");
                    printf("\n\t 2: Subtraction");
                    printf("\n\t 3: Multiplication");
                    printf("\n\t 4: Division");
                    printf("\n\t 5: Modulus");
                    printf("\n\t 6: Conjugate");
                    printf("\n\n\tEnter your choice: ");
                    scanf("%d",&ch);

                    printf("\n\tEnter a and b where a + ib is the first complex number.");
                    printf("\n\ta = ");
                    scanf("%d", &a.real);
                    printf("\n\tb = ");
                    scanf("%d", &a.img);
                    printf("\n\n\tEnter c and d where c + id is the second complex number.");
                    printf("\n\tc = ");
                    scanf("%d", &b99.real);
                    printf("\n\td = ");
                    scanf("%d", &b99.img);

                      switch(ch)

                        {
                          case 1: c.real = a.real + b99.real;
                                  c.img = a.img + b99.img;

                                  if (c.img >= 0)

                                    {printf("\n\n\tSum of the complex numbers = %d + %di", c.real, c.img);}

                                  else

                                    {printf("\n\n\tSum of the complex numbers = %d %di", c.real, c.img);}

                                  break;

                          case 2: c.real = a.real - b99.real;
                                  c.img = a.img - b99.img;

                                  if (c.img >= 0)

                                    {printf("\n\n\tDifference of the complex numbers = %d + %di", c.real, c.img);}

                                  else

                                    {printf("\n\n\tDifference of the complex numbers = %d %di", c.real, c.img);}

                                  break;

                          case 3: c.real = a.real*b99.real - a.img*b99.img;
                                  c.img = a.img*b99.real + a.real*b99.img;

                                  if (c.img >= 0)

                                    {printf("\n\n\tMultiplication of the complex numbers = %d + %di", c.real, c.img);}

                                  else

                                    {printf("\n\n\tMultiplication of the complex numbers = %d %di", c.real, c.img);}

                                  break;

                          case 4: if (b99.real == 0 && b99.img == 0)
                                    printf("\n\n\tDivision by 0 + 0i isn't allowed.");

                                  else

                                    {
                                      x5 = a.real*b99.real + a.img*b99.img;
                                      y5= a.img*b99.real - a.real*b99.img;
                                      z5 = b99.real*b99.real + b99.img*b99.img;

                                      if (x5%z5 == 0 && y5%z5 == 0)

                                        {

                                          if (y5/z5 >= 0)

                                            {printf("\n\n\tDivision of the complex numbers = %d + %di", x5/z5, y5/z5);}

                                          else

                                            {printf("\n\n\tDivision of the complex numbers = %d %di", x5/z5, y5/z5);}

                                        }

                                      else if (x5%z5 == 0 && y5%z5 != 0)

                                        {

                                          if (y5/z5 >= 0)

                                            {printf("\n\n\tDivision of two complex numbers = %d + %d/%di", x5/z5, y5, z5);}

                                          else

                                            {printf("\n\n\tDivision of two complex numbers = %d %d/%di", x5/z5, y5, z5);}

                                        }

                                      else if (x5%z5 != 0 && y5%z5 == 0)

                                        {

                                          if (y5/z5 >= 0)

                                            {printf("\n\n\tDivision of two complex numbers = %d/%d + %di", x5, z5, y5/z5);}

                                          else

                                            {printf("\n\n\tDivision of two complex numbers = %d %d/%di", x5, z5, y5/z5);}

                                        }

                                      else

                                        {

                                          if (y5/z5 >= 0)

                                            {printf("\n\n\tDivision of two complex numbers = %d/%d + %d/%di",x5, z5, y5, z5);}

                                          else

                                            {printf("\n\n\tDivision of two complex numbers = %d/%d %d/%di", x5, z5, y5, z5);}

                                        }

                                    }

                                  break;

                          case 5: printf("\n\n\t Enter the value of a and b of the complex number a + ib ");
                                  scanf("%d%d",&a.real,&a.img);

                                  mod = sqrt((a.real*a.real)+(a.img*a.img) );

                                  printf("\n\n\t The value of Modulus of Complex number that you entered is =>%f",mod);

                                  break;

                          case 6: printf("\n\t Enter the value of a and b of the complex number a + ib ");
                                  scanf("%d%d",&a.real,&a.img);


                                  printf("\n\t The Conjugate of complex no. %d+%d is %d -i%d ",a.real,a.img,a.real,a.img);

                                  break;

                          default:printf("\n\n\tWrong Choice");
                                  break;


                        }
                        printf("\n\n\tDo you want to repeat operations? (y/n)");
                        scanf(" %c",&ch1);

                  }
                  while(ch1=='y');
                  break;

              case 9:

                do

                  {
                    printf("\n\n\tChoose the statistical operation");
                    printf("\n\n\t 1: Mean and Variance");
                    printf("\n\t 2: Standard Deviation");
                    printf("\n\n\tEnter your choice: ");
                    scanf("%d",&ch);

                      switch(ch)

                        {
                          case 1: printf("\n\n\tEnter the value of N: ");
                                  scanf("%d",&n5);

                                  printf("\n\tEnter %d real numbers: ",n5);

                                  for (i2=0;i2<n5;i2++)

                                    {
                                      scanf("%f",&xy[i2]);
                                    }

                                  for (i2=0;i2<n5;i2++)
                                    {
                                      sum7=sum7+xy[i2];
                                    }

                                  average=sum7/(float)n5;

                                  for (i2=0;i2<n5;i2++)
                                    {
                                      sum8=sum8+pow((xy[i2]-average),2);
                                    }

                                  variance=sum8/(float)n5;

                                  printf("\n\n\tAverage of all elements = %.2f", average);
                                  printf("\n\tVariance of all elements = %.2f\n", variance);

                                  break;

                          case 2: printf("\n\n\tEnter 10 elements: ");

                                  for (i11 = 0; i11 < 10; ++i11)
                                      scanf("%f", &data[i11]);

                                  printf("\n\tStandard Deviation = %.6f", calculateSD(data));

                                  break;

                          default:printf("\n\n\tWrong Choice");
                                  break;
                        }
                        printf("\n\n\tDo you want to repeat the statistical calculator? (y/n)");
                        scanf(" %c",&ch1);

                  }
                  while(ch1=='y');
                  break;

              case 10:

                do

                  {
                    printf("\n\n\tChoose the calculus operation");
                    printf("\n\n\t 1: Differential Equations");
                    printf("\n\t 2: Integration");
                    printf("\n\n\tEnter your choice: ");
                    scanf("%d",&ch);

                      switch(ch)

                        {
                          case 1: printf("\n\n\tEnter the degree of polynomial equation: ");
                                  scanf("%d", &deg);

                                  printf("\n\n\tEnter the value of x1 for which the equation is to be evaluated: ");
                                  scanf("%f", &x1);

                                  for(i111=0;i111<=deg;i111++)
                                  {
                                    printf("\n\n\tEnter the coefficient of x1 to the power %d: ",i111);
                                    scanf("%f",&axa[i111]);
                                  }

                                  y1 = poly(axa, deg, x1);
                                  dy1 = deriv(axa, deg, x1);

                                  printf("\n\n\tThe value of polynomial equation for the value of x1 = %.2f is: %.2f",x1,y1);
                                  printf("\n\n\tThe value of the derivative of the polynomial equation at x1 = %.2f is: %.2f",x1,dy1);

                          case 2:  /* Input */

                                  printf("\n\n\tEnter lower limit of integration: ");
                                  scanf("%f", &lower);

                                  printf("\n\n\tEnter upper limit of integration: ");
                                  scanf("%f", &upper);

                                  printf("\n\n\tEnter number of sub intervals: ");
                                  scanf("%d", &subInterval);

                                  /* Calculation */
                                  /* Finding step size */

                                  stepSize = (upper - lower)/subInterval;

                                  /* Finding Integration Value */

                                  integration = f(lower) + f(upper);

                                  for(i1=1; i1<= subInterval-1; i1++)
                                    {
                                      k = lower + i1*stepSize;
                                      integration = integration + 2 * f(k);
                                    }

                                  integration = integration * stepSize/2;
                                  printf("\n\n\tRequired value of integration is: %.3f", integration);

                                  break;

                          default:printf("\n\n\tWrong Choice");
                                  break;


                        }
                        printf("\n\n\tDo you want to repeat the calculus calculator? (y/n)");
                        scanf(" %c",&ch1);

                  }
                  while(ch1=='y');
                  break;

              case 11:

                do

                  {
                    printf("\n\n\tChoose the series operation");
                    printf("\n\n\t 1: Sum of first n natural numbers");
                    printf("\n\t 2: Arithmetic Progression");
                    printf("\n\t 3: Geometric Progression");
                    printf("\n\t 4: Harmonic Progression");
                    printf("\n\t 5: Summation");
                    printf("\n\n\tEnter your choice: ");
                    scanf("%d",&ch);

                      switch(ch)

                        {
                          case 1: printf("\n\n\tEnter an integer number : ");
                                  scanf ("%d",&num);

                                  for(i3=1;i3<=num;i3++)

                                    {
                                      sum2=sum2+i3;
                                    }

                                  printf("\n\n\tSum of first %d natural numbers = %d\n",num,sum2);

                                  break;

                          case 2: printf("\n\n\tEnter the total numbers in the A.P. series : ");
                                  scanf("%d",&n5);

                                  printf("\n\tEnter the first term value of the A.P. series : ");
                                  scanf("%d",&a3);

                                  printf("\n\tEnter the common difference of A.P. series : ");
                                  scanf("%d",&d);

                                  sum3=(n5*(2*a3+(n5-1)*d))/2;
                                  tn=a3+(n5-1)*d;

                                  printf("\n\n\tSum of the A.P series is : ");

                                  for(i2=a3;i2<=tn;i2=i2+d)
                                    {
                                      if(i2!=tn)
                                        {
                                          printf("%d + ",i2);
                                        }
                                      else
                                        {
                                          printf("%d = %d ",i2,sum3);
                                        }
                                    }

                                  break;

                          case 3: printf("\n\n\tEnter the total numbers in the G.P. series: ");
                                  scanf("%d",&n5);

                                  printf("\n\tEnter the first term of the G.P. series: ");
                                  scanf("%f",&a4);

                                  printf("\n\tEnter the common ratio of G.P. series: ");
                                  scanf("%f",&r1);

                                  sum4=(a4*(1-pow(r1,n5+1)))/(1-r1);
                                  last_term=a4*pow(r1,n5-1);

                                  printf("\n\n\tLast term term of G.P. series is : %.4f",last_term);
                                  printf("\n\tSum of the G.P. series is : %.4f\n",sum4);

                                  break;

                          case 4: printf("\n\n\t 1 + 1/2 + 1/3 + ......... +1/n");
                                  printf("\n\tEnter the value of n : ");
                                  scanf("%d",&n5);

                                  for(i4=1;i4<=n5;i4++)

                                  {
                                      term=1/i4;
                                      sum5=sum5+term;
                                  }

                                  printf("\n\n\tThe Sum of H.P Series is = %.4f\n",sum5);

                                  break;

                          case 5: printf("\n\n\tThe given sequence is : \n\t");
                                  printf("1^2 + 2^2 + 3^2 + 4^2 + ......... + n^2");
                                  printf("\n\tEnter the value of n : ");

                                  scanf("%d",&n5);

                                  for(i2=1;i2<=n5;i2++)

                                    {
                                      sum6=sum6+pow(i2,2);
                                    }

                                  printf("\n\n\tSum of the series is %lu\n",sum6);

                                  break;
                          default:printf("\n\n\tWrong Choice");
                                  break;

                        }
                        printf("\n\n\tDo you want to repeat the series calculator? (y/n)");
                        scanf(" %c",&ch1);

                  }
                  while(ch1=='y');
                  break;

              case 12:

                do

                  {
                    printf("\n\n\tChoose the miscellaneous operation");
                    printf("\n\n\t 1: Floor and Ceil.");
                    printf("\n\t 2: Repeated Squaring");
                    printf("\n\t 3: Pascal Triangle");
                    printf("\n\t 4: Permutation and Combination");
                    printf("\n\n\tEnter your choice: ");
                    scanf("%d",&ch);

                      switch(ch)

                        {
                          case 1: printf("\n\n\tEnter a float value to find its floor and ceil :");
                                  scanf("%f",&val);

                                  fVal=floor(val);
                                  cVal =ceil(val);
                                  printf("\n\n\tFloor value :%f\nCeil value :%f",fVal,cVal);

                                  break;

                          case 2: printf("\nEnter a base number: ");
                                  scanf("%d", &base);

                                  printf("Enter an exponent: ");
                                  scanf("%d", &exp);

                                  while (exp != 0)
                                    {
                                      resultt *= base;
                                      --exp;
                                    }
                                  printf("Answer = %lld", rresult);

                                  break;

                          case 3: printf("\n 3) Pascal Triangle : ");
                                  printf("\n\n\tEnter the number of rows : ");
                                  scanf("%d",&row);

                                  for(i2=0;i2<row;i2++)

                                    {
                                      for(space=1;space<=row-i2;space++)
                                        {
                                          printf("  ");
                                        }
                                      for(j2=0;j2<=i2;j2++)
                                        {
                                          if(j2==0||i2==0)
                                            {
                                              coef=1;
                                            }
                                          else
                                            {
                                              coef=coef*(i2-j2+1)/j2;
                                            }
                                          printf("%4d",coef);
                                        }
                                        printf("\n");
                                      }
                                  break;

                          case 4: printf("\n\n\tEnter a number n: ");
                                  scanf("%d",&n55);

                                  printf("\n\tEnter a number r: ");
                                  scanf("%d",&r22);

                                  e2=n55-r22;

                                  fact1=1;

                                  for(i2=1;i2<=n55;i2++)
                                    {
                                      fact1=fact1*i2;
                                    }

                                  fact2=1;

                                  for(i2=1;i2<=e2;i2++)
                                    {
                                      fact2=fact2*i2;
                                    }

                                  fact3=1;

                                  for(i2=1;i2<=r22;i2++)
                                    {
                                      fact3=fact3*i2;
                                    }

                                  npr=fact1/fact2;
                                  printf("\n\n\tValue of %dP%d = %d",n55,r22,npr);

                                  ncr=fact1/(fact2*fact3);
                                  printf("\n\tValue of %dC%d = %d\n",n55,r22,ncr);

                                  break;

                          default:printf("\n\n\tWrong Choice");
                                  break;

                        }
                        printf("\n\n\tDo you want to repeat miscellaneous calculator? (y/n)");
                        scanf(" %c",&ch1);

                  }
                  while(ch1=='y');
                  break;

              default:printf("\n\n\tWrong choice");

            }
            printf("\n\n\tDo you want to repeat any calculations? (y/n)");
            scanf(" %c",&ch1);

      }
      while(ch1=='y');

  }

  //Function Definitions

  int maxxx(int num11, int num22)
    {
      return (num11 > num22 ) ? num11 : num22;
    }

  int minnn(int num11, int num22)
    {
      return (num11 > num22 ) ? num22 : num11;
    }

  void anglemid_vector(val a100,val b100,val c100,val d100,val e100,val f100,val g100,val i100,val *h100)

    {

      i100=a100*cos((a100*d100+b100*e100+c100*f100)/(sqrt(a100*a100+b100*b100+c100*c100)*sqrt(d100*d100+e100*e100+f100*f100)));
      if(g100!=1&&g100!=2&&g100!=3)
      printf("\n SYNTAX ERROR:TRY AGAIN \n ");
      else
      *h100=(g100==1)?(i100*RD):((g100==2)?(i100):(i100*RG));
    }

  float calculateSD(float data[])

    {
      float sum = 0.0, mean, SD = 0.0;
      int i1;
      for (i1 = 0; i1 < 10; ++i1)
        {
          sum += data[i1];
        }

      mean = sum / 10;
      for (i1 = 0; i1 < 10; ++i1)
        {
          SD += pow(data[i1] - mean, 2);
        }

      return sqrt(SD / 10);
    }

float poly(float a[], int deg, float x1)
{
	float p;
	int i111;

	p = a[deg];

	for(i111=deg;i111>=1;i111--)
	{
		p = (a[i111-1] + x1*p);
	}

	return p;
}

float deriv(float axa[], int deg, float x)
{
	float d[10], pd = 0, ps;
	int i111,x1;

	for(i111=0;i111<=deg;i111++)
	{
		ps = pow(x1, deg-(i111+1));
		d[i111] = (deg-i111)*axa[deg-i111]*ps;
		pd = pd + d[i111];
	}

	return pd;
}



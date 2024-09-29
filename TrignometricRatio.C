#include <stdio.h>
#include <string.h>

int main() {
  char userInput[3];
char neg= '-';
  char ptv='+';
  int angle, quad, remainder;
  printf("Enter trignometric function with angle: ");
  scanf("%s"
        "%d",
        userInput, &angle);
    remainder = angle % 360;
if(remainder<360 && remainder>=270){
    remainder = 360 - remainder ;
    quad=4;
} 
else if(remainder>=180 && remainder<270){
    remainder = remainder - 180;
    quad=3;
} else if (remainder<180 && remainder>90){
    remainder = 180 - remainder;
    quad=2;
} 
else {
    quad=1;
}
//printf("Angle: %d", remainder);
  // Compare strings case-insensitively
  if (strcasecmp("sin", userInput) == 0) {
    switch (remainder) {
    case 0:
if (quad == 1 || quad == 2) {
    printf("the value for sin %d is 0", angle);
} else {
    printf("the value for sin %d is %c 0", angle, neg);
}
      break;
    case 30:
    if (quad == 1 || quad == 2) {
    printf("the value for sin %d is %c 1/2", angle, ptv);
} else {
    printf("the value for sin %d is %c 1/2", angle, neg);
    }
    break;
      case 45:
        if (quad == 1 || quad == 2) {
            printf("the value for sin %d is %c 1/√2", angle, ptv);
        } else {
            printf("the value for sin %d is %c 1/√2", angle, neg);
        } 
      break;
      case 60:
      if (quad == 1 || quad == 2) {
            printf("the value for sin %d is %c √3/2", angle, ptv);
        } else {
            printf("the value for sin %d is %c √3/2", angle, neg);}
    break;
      case 90:
      if (quad == 1 || quad == 2) {
            printf("the value for sin %d is %c 1", angle, ptv);
        } else {
            printf("the value for sin %d is %c 1", angle, neg);
      }
      break;
  default:
    printf("sorry this program isn't cable of finding value for this angle");
    break;
    }
  } 
  else if (strcasecmp("cos", userInput) == 0) {
    switch (remainder) {
    case 0:
      if (quad == 1 || quad == 4) {
    printf("the value for cos %d is %c 1", angle, ptv);
} else {
    printf("the value for cos %d is %c 1", angle, neg);
}
      break;
    case 30:
    if (quad == 1 || quad == 4) {
    printf("the value for cos %d is %c √3/2 ", angle, ptv);
} else {
    printf("the value for cos %d is %c √3/2", angle, neg);
    }
    break;
      case 45:
        if (quad == 1 || quad == 4) {
            printf("the value for cos %d is %c 1/√2", angle, ptv);
        } else {
            printf("the value for cos %d is %c 1/√2", angle, neg);
        } 
      break;
      case 60:
      if (quad == 1 || quad == 4) {
            printf("the value for cos %d is %c 1/2", angle, ptv);
        } else {
            printf("the value for cos %d is %c 1/2", angle, neg);
    break;}
      case 90:
      if (quad == 1 || quad == 4) {
            printf("the value for cos %d is %c 0", angle, ptv);
        } else {
            printf("the value for cos %d is %c 0", angle, neg);
      }
      break;
  default:
    printf("sorry this program isn't cable of finding value for this angle");
    break;
    } }
  else if (strcasecmp("tan", userInput) == 0) {
    switch (remainder) {
    case 0:
      if (quad == 1 || quad == 3) {
    printf("the value for tan %d is 0", angle);
} else {
    printf("the value for tan %d is 0", angle);
}
      break;
    case 30:
    if (quad == 1 || quad == 3) {
    printf("the value for tan %d is %c 1/√3 ", angle, ptv);
} else {
    printf("the value for tan %d is %c 1/√3", angle, neg);
    }
    break;
      case 45:
        if (quad == 1 || quad == 3) {
            printf("the value for tan %d is %c 1", angle, ptv);
        } else {
            printf("the value for tan %d is %c 1", angle, neg);
        } 
      break;
      case 60:
      if (quad == 1 || quad == 3) {
            printf("the value for tan %d is %c √3", angle, ptv);
        } else {
            printf("the value for tan %d is %c √3", angle, neg);}
    break;
      case 90:
      if (quad == 1 || quad == 3) {
            printf("the value for tan %d is undefined", angle);
        } else {
            printf("the value for tan %d is undefind", angle);
      }
      break;
  default:
    printf("sorry this program isn't cable of finding value for this angle");
    break;
    }
  }
  else { 
    printf("sorry %s is not a valid trig function", userInput);
  }
  return 0;
}
void setup() {
  Serial.begin(9600);
}

int reversedString(String str) {
  int length = str.length();
  String reversed = "";
  for (int i = length - 1; i >= 0; i--) {
    reversed += str[i];
  }
  if( reversed.equals(str)){
    return 1;}
  else{
    return -1;
  }
}

void loop() {
  if (Serial.available() > 0) {
    String str = Serial.readString();
    int num = reversedString(str);
    if(num==1){
      Serial.print("Palindrome");
    }
    else if(num==-1){
      Serial.println("Not Pallindrome");
    }
    
  }
}

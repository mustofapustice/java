
package labfinal;

import java.io.*;
import java.util.Scanner;

public class problem14 {
    public static void main(String args[]) throws IOException {
        try{
            FileReader file = new FileReader("F:\\university folder 2nd year 1st semester\\ice2103 opp\\lab\\lab final practice\\java practice\\labfinal\\src\\labfinal\\test.txt");
            FileWriter file2 =new FileWriter("F:\\university folder 2nd year 1st semester\\ice2103 opp\\lab\\lab final practice\\java practice\\labfinal\\src\\labfinal\\test2.txt");
            int c;
           while((c=file.read())!=-1){
           System.out.print((char)c);
           file2.write((char)c);
            }
           System.out.println();
       file.close();
         file2.close();
        }catch(FileNotFoundException e){
            System.out.print("please enter text in the file");
        }
     
    }
}

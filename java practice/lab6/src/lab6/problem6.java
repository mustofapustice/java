package lab6;
import java.io.File;
import java.io.FileWriter;
import java.io.FileReader;
import java.io.IOException;

public class problem6 {
    public static void main(String[] args) throws IOException {
        //Writting my name and roll
        FileWriter writeFile = new FileWriter("Test.txt");
        writeFile.write("Name: Gulam Mustofa\n");
        writeFile.write("Roll: 200615\n");
        writeFile.close();
        
        //Reading file
        File obj = new File("Test.txt");
        FileReader readFile = new FileReader(obj);
        char str[] = new char[50];
        readFile.read(str);
        System.out.println(str);
        readFile.close();
    }
}
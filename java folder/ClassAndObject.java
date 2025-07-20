
/*
 * Java Class and Object Example
 */
public class ClassAndObject {
    String name = "Java";

    public void display() {
        System.out.println("Learning " + name);
    }

    public static void main(String[] args) {
        ClassAndObject obj = new ClassAndObject(); // object creation
        obj.display();
    }
}

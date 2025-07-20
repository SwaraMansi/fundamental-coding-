
/*
 * Java Polymorphism Example - Method Overriding
 */
class Shape {
    void draw() {
        System.out.println("Drawing shape");
    }
}

class Circle extends Shape {
    void draw() {
        System.out.println("Drawing circle");
    }

    public static void main(String[] args) {
        Shape s = new Circle(); // runtime polymorphism
        s.draw();
    }
}

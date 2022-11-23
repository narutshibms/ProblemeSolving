import java.util.Random;

class pi {
 // Monte Carlo Method.

public static boolean isInside(double x, double y) {

    double distance = Math.sqrt(Math.pow(x - 0.5, 2) + Math.pow(y - 0.5, 2));
    
   return (Math.abs(distance) <= 0.5) ;
    }


    public static void main(String[] args) {

        Random random = new Random();

        double inside = 0;

        double i;

        for(i = 1.0; i < 10000000.0; i += 1.0){

            double x = random.nextDouble(1.0);

            double y = random.nextDouble(1.0);

            if ( isInside(x, y) )inside += 1.0;

        }

        double pi = 4.0 * (inside) / (i - 1.0);
        System.out.println("val of pi is : " + pi);

    }

}


class Sulotion {

        public double f(double x) {
                return (double) (x - Math.tan(x)); // Newton Method.
        }

        public static double appro(int n) { 
		
		//Lebnez Method.
                
                int dex;
   
                double pi = 1.0;

                for (int i = 0; i < n; i++) {
                        dex = 2 * i + 3;

                 if (i % 2 == 1) 
                        pi = pi + 1 / (double) dex;
                        else    pi = pi - 1 / (double) dex;
                        
                }

                return pi;
        }

        public static void main(String[] Args) {

                
                System.out.println(" Pi =  " + 4*appro(100));
        }
}
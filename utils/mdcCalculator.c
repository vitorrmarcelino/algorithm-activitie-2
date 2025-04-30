int mdcCalculator(int a, int b){
    int i = 2;
    int mdc = 1;

    while (a != 1 || b != 1) {
        if (a % i == 0 && b % i == 0) {
            mdc *= i;
            a /= i;
            b /= i;
        } else if (a % i == 0) {
            a /= i;
        } else if (b % i == 0) {
            b /= i;
        } else {
            i++;
        }
    }

    return mdc;
}
int mmcCalculator(int a, int b){
    int i = 2;
    int mmc = 1;

    while (a != 1 || b != 1) {
        if (a % i == 0 && b % i == 0) {
            mmc *= i;
            a /= i;
            b /= i;
        } else if (a % i == 0) {
            mmc *= i;
            a /= i;
        } else if (b % i == 0) {
            mmc *= i;
            b /= i;
        } else {
            i++;
        }
    }

    return mmc;
}
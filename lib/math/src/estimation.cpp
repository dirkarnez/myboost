double interpolate(double x0, double x1, double y0, double y1, double x) {
    return y0 + (x - x0) * (y1 - y0) / (x1 - x0);
}

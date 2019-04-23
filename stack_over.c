int fid(int n) {
	if (n == 0 || n == 1 || n == 2) return n;
	return fid(n-1) + fid(n-2);
}
int fidTail(int n, int a, int b) {
	if (n == 0) return a;
	return fidTail(n-1, a+b, a);
}
int main() {
	//fid(100000000);
	fidTail(100000000, 1, 0);
}

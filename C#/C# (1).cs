/*
    Выполнить операции (здесь A, B, C, D — квадратные матрицы порядка n). Действия с матрицами оформить в виде класса;
    A(B-C).
*/
using System;
namespace ex_class
{
    class Matrix
    {
        int n;
        int[,] a = new int[40, 40];
        public void inp()
        {
            int i, j;
            Random r = new Random();
            Console.WriteLine("n?");
            n = Convert.ToInt32(Console.ReadLine());
            for (i = 0; i < n; i++)
                for (j = 0; j < n; j++)
                    a[i, j] = -10 + r.Next(21);
        }

        public void outp()
        {
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine();
                for (int j = 0; j < n; j++)
                    Console.Write("{0, 5}", a[i, j]);
            }
            Console.WriteLine();
        }

        public double diag()
        {
            double s = 0;
            for (int i = 0; i < n; i++)
            {
                s = s + a[i, i];
            }
            return s;
        }

        public Matrix mult(Matrix b)
        {
            Matrix c = new Matrix();
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                {
                    c.a[i, j] = a[i, j] * b.a[i, j];
                }
            c.n = n;
            return c;
        }
        public Matrix raznost(Matrix d)
        {
            Matrix c = new Matrix();
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                {
                    c.a[i, j] = d.a[i, j] - a[i, j];
                }
            c.n = n;
            return c;
        }
    }

    class Program
    {
        static void Main()
        {

            Matrix a = new Matrix();
            Matrix b = new Matrix();
            Matrix c = new Matrix();
            Matrix ans = new Matrix();
            Matrix ans2 = new Matrix();
            Matrix ans3 = new Matrix();
            a.inp();
            Console.WriteLine("Ìàòðèöà A: ");
            a.outp();
            b.inp();
            Console.WriteLine("Ìàòðèöà B: ");
            b.outp();
            c.inp();
            Console.WriteLine("Ìàòðèöà C: ");
            c.outp();
            Console.WriteLine("Ìàòðèöà B-C: ");
            ans2 = c.raznost(b);
            ans2.outp();
            Console.WriteLine("Ìàòðèöà A(B-C): ");
            ans3 = a.mult(ans2);
            ans3.outp();
            Console.ReadKey();
        }
    }
}

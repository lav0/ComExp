using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.InteropServices;
using ComExperimentLib;

namespace ComExperimentManagedClient
{
  class Program
  {
    static IServer1 s = new Server1Class();

    static void Main(string[] args)
    {
      s.ConverEnum(Enm.E1);

      DateTime dtStart = DateTime.Now;
      if (args[0] == "1") {
        CheckGetSomething();
      } else if (args[0] == "2") {
        CheckReturnSomething();
      }
      DateTime dtEnd = DateTime.Now;
      Console.WriteLine("Time: {0}", (dtEnd - dtStart).TotalMilliseconds);
    }

    static int iLimit = 100000;
    static void CheckGetSomething()
    {
      for (int i = 0; i < iLimit; i++) {
        Position p = new Position();
        s.GetSomething(out p);
        Console.WriteLine("{0} {1} {2}", p.X, p.Y, p.Z);
      }
    }

    static void CheckReturnSomething()
    {
      for (int i = 0; i < iLimit; i++) {
        IntPtr ptr = s.ReturnSomething();
        Position p = (Position)Marshal.PtrToStructure(ptr, typeof(Position));
        Marshal.FreeCoTaskMem(ptr);
        Console.WriteLine("{0} {1} {2}", p.X, p.Y, p.Z);
      }
    }
  }
}

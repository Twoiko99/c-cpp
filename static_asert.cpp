template<typename t>

class EveryThingButInt
{
    public:
      EveryThingButInt()
      {
        static_assert(sizeof(t) !=sizeof(int), "int zapreshen");

      }

};

int main()
{ EveryThingButInt <int> obj;//vivoda ne budet poskoljku kompiljacija neudachnajas -error: int zapreshen



    return 0;
}
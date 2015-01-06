//¿que esta mal con el siguiente codigo?
class Test
{
  public:
    Test(){};
    virtual ~Test(){};
    virtual Test(){};//Aqui esta el error ya que en virtual los constructores no pueden ser declarados
};

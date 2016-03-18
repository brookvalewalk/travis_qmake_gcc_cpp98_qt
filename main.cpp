#include <fstream>
#include <iostream>
#include <QFile>

int main()
{
  const std::string filename = "HelloWorld.png";
  QFile f(":/images/HelloWorld.png");
  if (QFile::exists(filename.c_str()))
  {
    std::remove(filename.c_str());
  }
  f.copy("HelloWorld.png");
  if (!QFile::exists(filename.c_str()))
  {
    std::cerr << "filename '" << filename << "' must be created\n";
    return 1;
  }
}

#include <iostream>
#include <QFile>

int main()
{
  const std::string filename = "HelloWorld.png";
  QFile f(":/images/HelloWorld.png");
  if (QFile::exists(filename.c_str()))
  {
    std::cerr << "filename '" << filename << "' must not exist beforehand";
    return 1;
  }
  f.copy("HelloWorld.png");
  if (!QFile::exists(filename.c_str()))
  {
    std::cerr << "filename '" << filename << "' must exist after";
    return 2;
  }
}

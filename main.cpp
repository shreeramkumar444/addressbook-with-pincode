#include<QApplication>
#include<Qsql>
#include<QSqlDatabase>
#include<QDebug>

int main(int argc, char *argv[])
{
QApplication a(argc, argv);
QSqlDatabase db;
db=QSqlDatabase :: addDatabase("QMYSQL");
db.setDatabaseName("db");
db.setUserName("root");
db.setPassword("admin");
if(!db.open())
{
    qDebug()<<"Database error occured";
}
else
{
    qDebug()<<" connected";
}
return a.exec();
}

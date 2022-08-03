#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{

}

//apenas preenchendo o map
void Test::fill()
{
    m_name = "test object";
    for(int i = 0; i < 10; i++)
    {
        QString num = QString::number(i);
        QString key = "Key: " + num;
        QString value = "This is item number: " + num;
        m_map.insert(key, value);
    }
}

QString Test::name()
{
    return m_name;
}

void Test::setName(const QString& value)
{
    m_name = value;
}

QMap<QString, QString> Test::map()
{
    return m_map;
}

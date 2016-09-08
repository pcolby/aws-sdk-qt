/*
    Copyright 2013-2016 Paul Colby

    This file is part of libqtaws-codegen.

    Libqtaws-codegen is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws-codegen is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <QDir>
#include <QJsonObject>

class Generator {

public:
    Generator(const QDir &outputDir);

    bool generate(const QString &serviceName, const QJsonObject &description);

protected:
    static QString readAll(const QString &fileName);
    static void replaceAll(const QMap<QString, QString> &tokens, QString &string);
    static bool writeAll(const QString &fileName, const QString &content);

private:
    QDir outputDir;

};

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

#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QJsonDocument>

#include "generator.h"

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    const QStringList arguments = QCoreApplication::arguments();
    if (arguments.contains(QLatin1String("-h"))) {
        qInfo() << QString::fromLatin1("Usage: %1 output-dir")
                   .arg(QCoreApplication::applicationName());
        return 0;
    }

    Generator generator(arguments.last());
    foreach (const QFileInfo &entry,
             QDir(QLatin1String(":/api-descriptions"), QLatin1String("*.json"),
                  QDir::Name|QDir::IgnoreCase, QDir::Files|QDir::Readable).entryInfoList()) {
        QFile file(entry.absoluteFilePath());
        file.open(QFile::ReadOnly);
        if (!generator.generate(QJsonDocument::fromJson(file.readAll()).object())) {
            return 1;
        }
    }
    return 0;
}

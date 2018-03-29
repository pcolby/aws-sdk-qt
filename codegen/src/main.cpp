/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt Code Generator.

    AWS SDK for Qt Code Generator is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt Code Generator is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with the AWS SDK for Qt Code Generator.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QJsonDocument>

#include "generator.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    const QStringList arguments = QCoreApplication::arguments();
    if (arguments.size() != 2) {
        qInfo() << QString::fromLatin1("Usage: %1 output-dir")
                   .arg(QCoreApplication::applicationName());
        return 1;
    }

    const QFileInfo outputDir(arguments.last());
    if ((!outputDir.exists()) || (!outputDir.isDir()) || (!outputDir.isWritable())) {
        qWarning() << "output directory does not exist, is not a directory, or is not writeable"
                   << outputDir.absoluteFilePath();
        return 2;
    }

    Generator generator(outputDir.absoluteFilePath());
    if (!generator.generate(QDir(QLatin1String(":/api-descriptions"), QLatin1String("*.json"),
                            QDir::Name|QDir::IgnoreCase, QDir::Files|QDir::Readable).entryInfoList()))
    {
        return 3;
    }
    return 0;
}

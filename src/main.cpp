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
#include <QFileInfo>
#include <QJsonDocument>

#include "generator.h"

QString getServiceNameFromFileName(const QString &fileName)
{
    /// @todo Just for now, put SQS into a different folder so we don't blow
    /// away our existing SQS client code; this will go away when we're ready.
    if (fileName.startsWith(QLatin1String("sqs"))) {
        return QLatin1String("sqs2");
    }

    // <servce-name>-yyyy-mm-dd.normal.json
    Q_ASSERT(fileName.endsWith(QLatin1String(".normal.json")));
    return fileName.left(fileName.size() - 23);
}

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
    foreach (const QFileInfo &entry,
             QDir(QLatin1String(":/api-descriptions"), QLatin1String("*.json"),
                  QDir::Name|QDir::IgnoreCase, QDir::Files|QDir::Readable).entryInfoList()) {
        QFile file(entry.absoluteFilePath());
        file.open(QFile::ReadOnly);
        if (!generator.generate(
                getServiceNameFromFileName(entry.fileName()),
                QJsonDocument::fromJson(file.readAll()).object())) {
            return 3;
        }
    }
    return 0;
}

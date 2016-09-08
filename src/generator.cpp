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

#include "generator.h"

#include <QDebug>
#include <QJsonParseError>

Generator::Generator(const QDir &outputDir)
    : outputDir(outputDir)
{
    Q_ASSERT(outputDir.exists());
}

bool Generator::generate(const QString &serviceName,
                         const QJsonObject &description)
{
    qDebug() << "generating" << serviceName << description
        .value(QLatin1String("metadata")).toObject()
        .value(QLatin1String("endpointPrefix")).toString();

    outputDir.mkdir(serviceName);
    const QString projectDir = outputDir.absoluteFilePath(serviceName);

    /// @todo Generate model classes.

    /// @todo Generate request / response classes.

    /// @todo Generate service client.

    /// @todo Generate ancillary project files.
    const QString qmakeProjectFile = readAll(QLatin1String(":/templates/service.pro"));
    /// @todo search and replace tokens.
    writeAll(QString::fromLatin1("%1/%2.pro").arg(projectDir).arg(serviceName), qmakeProjectFile);

    return true;
}

QString Generator::readAll(const QString &fileName)
{
    QFile file(fileName);
    if (!file.exists()) {
        qWarning() << "file does not exist" << fileName;
        return QString();
    }
    if (!file.open(QFile::ReadOnly)) {
        qWarning() << "failed to open file for reading" << fileName;
        return QString();
    }
    return QString::fromUtf8(file.readAll());
}

bool Generator::writeAll(const QString &fileName, const QString &content)
{
    QFile file(fileName);
    if (!file.open(QFile::WriteOnly)) {
        qWarning() << "failed to open file for writing" << fileName;
        return false;
    }
    if (file.write(content.toUtf8()) < 0) {
        qWarning() << "failed to write to file" << fileName;
        return false;
    }
    return true;
}

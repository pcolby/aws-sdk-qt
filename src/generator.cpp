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
#include <QRegularExpression>

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
    QMap<QString, QString> tags;
    tags.insert(QLatin1String("serviceName"), serviceName);
    replaceTags(tags, QLatin1String(":/templates/service.pro"),
                QString::fromLatin1("%1/%2.pro").arg(projectDir).arg(serviceName));

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

QString Generator::replaceTags(const QMap<QString, QString> &tags,
                               const QString &input)
{
    QString output(input);
    for (auto iter = tags.constBegin(); iter != tags.constEnd(); ++iter) {
        output.replace(QRegularExpression(QString::fromLatin1("{{\\s*%1\\s*}}")
            .arg(QRegularExpression::escape(iter.key()))), iter.value());
    }
    return output;
}

bool Generator::replaceTags(const QMap<QString, QString> &tags,
                            const QString &inFile, const QString &outFile)
{
    const QString input = readAll(inFile);
    return (input.isNull()) ? false : writeAll(outFile, replaceTags(tags, input));
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

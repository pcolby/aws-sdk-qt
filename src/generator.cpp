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

bool Generator::generate(const QString &serviceFileName,
                         const QJsonObject &description)
{
    qDebug() << "generating" << serviceFileName;
    outputDir.mkdir(serviceFileName);
    const QString projectDir = outputDir.absoluteFilePath(serviceFileName);

    const QJsonObject metaData = description .value(QLatin1String("metadata")).toObject();
    const QString className = getClassName(metaData) + QLatin1String("Client");

    QMap<QString, QString> tags;
    tags.insert(QLatin1String("TargetLibName"), serviceFileName);
    tags.insert(QLatin1String("ClassName"), className);
    tags.insert(QLatin1String("HeaderName"), className.toLower());
    tags.insert(QLatin1String("INCLUDE_GUARD_NAME"), className.toUpper());
    /// @todo Break this string over multiple lines nicely.
    tags.insert(QLatin1String("Documentation"), description.value(QLatin1String("documentation")).toString());

    /// @todo Generate model classes.

    /// @todo Generate request / response classes.

    /// @todo Generate service client.
    replaceTags(tags, QLatin1String(":/templates/client.cpp"),
                QString::fromLatin1("%1/%2.cpp").arg(projectDir).arg(className.toLower()));
    replaceTags(tags, QLatin1String(":/templates/client.h"),
                QString::fromLatin1("%1/%2.h").arg(projectDir).arg(className.toLower()));
    replaceTags(tags, QLatin1String(":/templates/client_p.h"),
                QString::fromLatin1("%1/%2_p.h").arg(projectDir).arg(className.toLower()));

    /// @todo Generate ancillary project files.
    replaceTags(tags, QLatin1String(":/templates/service.pro"),
                QString::fromLatin1("%1/%2.pro").arg(projectDir).arg(serviceFileName));

    return true;
}

QString Generator::getClassName(const QJsonObject &metaData)
{
    // Replicate what aws-sdk-cpp does; ie use the abbreviated name, if present
    // otherwise fall back to the full service name.
    QString className = metaData.value(QLatin1String("serviceAbbreviation")).toString();
    if (className.isEmpty()) {
        className = metaData.value(QLatin1String("serviceFullName")).toString();
    }

    // Trim, the same as aws-sdk-cpp too.
    return className.replace(QRegularExpression("[- _/]|Amazon|AWS"), QString());
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

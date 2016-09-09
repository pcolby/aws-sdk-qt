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

    const QJsonObject metaData = description.value(QLatin1String("metadata")).toObject();
    const QString classNamePrefix = getClassNamePrefix(metaData);
    const QString className = classNamePrefix + QLatin1String("Client");

    QMap<QString, QString> tags;
    for (auto iter = metaData.constBegin(); iter != metaData.constEnd(); ++iter) {
        tags.insert(QLatin1String("metadata.") + iter.key(), iter.value().toString());
    }
    tags.insert(QLatin1String("TargetLibName"), serviceFileName);
    tags.insert(QLatin1String("ClassName"), className);
    tags.insert(QLatin1String("HeaderName"), className.toLower());
    tags.insert(QLatin1String("INCLUDE_GUARD_NAME"), className.toUpper());
    tags.insert(QLatin1String("SignatureVersion"), metaData.value(QLatin1String("signatureVersion")).toString().toUpper());
    tags.insert(QLatin1String("ClassBrief"), getClassBrief(metaData));
    /// @todo Break this string over multiple lines nicely.
    tags.insert(QLatin1String("ClassDocumentation"),
        formatHtmlDocumentation(description.value(QLatin1String("documentation")).toString()));

    /// @todo Generate model classes.

    /// @todo Generate request / response classes.

    /// @todo Generate service client.
    const QJsonObject operations = description.value(QLatin1String("operations")).toObject();
    tags.insert(QLatin1String("OperationSignatures"), getFunctionSignatures(
                classNamePrefix,operations).join(QLatin1Char('\n')));
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

QString Generator::formatHtmlDocumentation(const QString &html)
{
    QString content(html);

    content.replace(QRegularExpression(QLatin1String("<br?/>")), QLatin1String("\n\n"));
    content.replace(QRegularExpression(QLatin1String("</?p>")), QLatin1String("\n\n"));

    /// @todo There's a lot more we could do here...

    content = content.trimmed();
    content.replace(QRegularExpression(QLatin1String(" *\n")), QLatin1String("\n"));
    content.replace(QRegularExpression(QLatin1String("\n\n\n"),
       QRegularExpression::MultilineOption), QLatin1String("\n"));

    content.replace(QRegularExpression(QLatin1String("\n([^\n])")), QLatin1String("\n + \\1"));
    content.replace(QRegularExpression(QLatin1String("\n\n")), QLatin1String("\n *\n"));
    return content;
}

QString Generator::getClassBrief(const QJsonObject &metaData)
{
    QString brief = QString::fromLatin1("Client for %1").arg(
        metaData.value(QLatin1String("serviceFullName")).toString());

    QString serviceAbbreviation =
        metaData.value(QLatin1String("serviceAbbreviation")).toString();
    serviceAbbreviation.replace(QRegularExpression("Amazon|AWS"), QString());

    if ((!serviceAbbreviation.isEmpty()) && (!brief.contains(serviceAbbreviation))) {
        brief += QString::fromLatin1(" (%1)").arg(serviceAbbreviation);
    }
    return brief;
}

QString Generator::getClassNamePrefix(const QJsonObject &metaData)
{
    // Replicate what aws-sdk-cpp does; ie use the abbreviated name, if present
    // otherwise fall back to the full service name.
    QString prefix = metaData.value(QLatin1String("serviceAbbreviation")).toString();
    if (prefix.isEmpty()) {
        prefix = metaData.value(QLatin1String("serviceFullName")).toString();
    }

    // Trim, the same as aws-sdk-cpp too.
    return prefix.replace(QRegularExpression("[- _/]|Amazon|AWS"), QString());
}

QString Generator::getFunctionSignature(
        const QString &classNamePrefix, const QString &operationName,
        const QJsonObject &operation)
{
    // This is all covered by the JSON Schema validation of the resource files.
    Q_ASSERT(operationName.size() > 1);
    Q_ASSERT(operationName.at(0).isLetter());
    Q_ASSERT(operationName.at(0).isUpper());

    // The function name is just the operation name with a lower first letter.
    const QString functionName = operationName.at(0).toLower() + operationName.mid(1);

    // The return type is a pointer to an <OperationName>Response object.
    // Note, we intentionally don't use operation.output.{resultwrapper,shape}
    // values here, since the return type is a QNetworkResponse-derived class,
    // so its more appropriate to keep to the *Response class naming convention
    // (even, or perhaps especially, when the operation has no output property).
    const QString returnType = classNamePrefix + operationName
            + QLatin1String("Response *");

    const QString functionArguments = operation.contains(QLatin1String("input"))
            ? QString::fromLatin1("const %1%2Request &request")
              .arg(classNamePrefix) .arg(operationName)
            : QString(); // No input to this request.

    return QString::fromLatin1("    %1 %2(%3);")
            .arg(returnType).arg(functionName).arg(functionArguments);
}

QStringList Generator::getFunctionSignatures(
        const QString &classNamePrefix, const QJsonObject &operations)
{
    QStringList signatures;
    for (auto iter = operations.constBegin(); iter != operations.constEnd(); ++iter) {
        signatures.append(getFunctionSignature(
            classNamePrefix, iter.key(), iter.value().toObject()));
    }
    return signatures;
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

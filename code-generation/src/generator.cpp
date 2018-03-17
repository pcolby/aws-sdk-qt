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

#include <grantlee/templateloader.h>

Generator::Generator(const QDir &outputDir)
    : outputDir(outputDir)
{
    Q_ASSERT(outputDir.exists());

    auto loader = QSharedPointer<Grantlee::FileSystemTemplateLoader>::create();
    loader->setTemplateDirs(QStringList() << QStringLiteral(":/templates"));
    engine.addTemplateLoader(loader);
    engine.setSmartTrimEnabled(true);

    const QDir dir(QLatin1String(":/templates"));
    foreach (const QString &name, dir.entryList(QDir::Files|QDir::Readable)) {
        qDebug() << "loading template" << name;
        const auto tmplate = engine.loadByName(name);
        if (tmplate->error()) {
            qWarning() << "error loading template" << name << tmplate->errorString();
            continue;
        }
        templates.insert(name, tmplate);
    }
}

bool Generator::generate(const QString &serviceFileName,
                         const QJsonObject &description)
{
    qDebug() << "generating" << serviceFileName;
    outputDir.mkdir(serviceFileName);
    const QString projectDir = outputDir.absoluteFilePath(serviceFileName);

    const QJsonObject metaData = description.value(QLatin1String("metadata")).toObject();
    const QString classNamePrefix = getClassNamePrefix(metaData);
    const QString className =
        ((classNamePrefix.contains(QRegularExpression(QLatin1String("^[^a-z]+$"))))
        ? classNamePrefix.at(0) + classNamePrefix.mid(1).toLower() : classNamePrefix)
        + QLatin1String("Client");

    Grantlee::Context context;
    for (auto iter = metaData.constBegin(); iter != metaData.constEnd(); ++iter) {
        qDebug() << "metadata" << iter.key() << iter.value();
        context.insert(iter.key(), iter.value());
    }
    context.insert(QLatin1String("TargetLibName"), serviceFileName);
    context.insert(QLatin1String("NameSpaceName"), classNamePrefix);
    context.insert(QLatin1String("ClassName"), className);
    context.insert(QLatin1String("HeaderName"), className.toLower());
    context.insert(QLatin1String("INCLUDE_GUARD_NAME"), className.toUpper());
    context.insert(QLatin1String("SignatureVersion"), metaData.value(QLatin1String("signatureVersion")).toString().toUpper());
    context.insert(QLatin1String("ClassBrief"), getClassBrief(metaData));
    /// @todo Break this string over multiple lines nicely.
    context.insert(QLatin1String("ClassDocumentation"),
        formatHtmlDocumentation(description.value(QLatin1String("documentation")).toString()));

    /// @todo
    context.insert(QStringLiteral("publicSlots"), QStringLiteral("{{publicSlots}}"));
    context.insert(QStringLiteral("servicename"), QStringLiteral("{{servicename}}"));

    /// @todo Generate model classes.

    /// @todo Generate request / response classes.

    /// @todo Generate service client.
    const QJsonObject operations = description.value(QLatin1String("operations")).toObject();
    context.insert(QStringLiteral("OperationSignatures"),
                   getFunctionSignatures(operations).join(QLatin1Char('\n')));
    render(QStringLiteral("client.cpp"), context,
           QStringLiteral("%1/%2.cpp").arg(projectDir).arg(className.toLower()));
    render(QStringLiteral("client.h"), context,
           QStringLiteral("%1/%2.h").arg(projectDir).arg(className.toLower()));
    render(QStringLiteral("client_p.h"), context,
           QStringLiteral("%1/%2_p.h").arg(projectDir).arg(className.toLower()));

    /// @todo Generate ancillary project files.
    render(QStringLiteral("service.pro"), context,
           QStringLiteral("%1/%2.pro").arg(projectDir).arg(serviceFileName));

    return true;
}

QStringList Generator::formatHtmlDocumentation(const QString &html)
{
    QString content(html);

    QStringList lines;
    QString line;
    foreach (QString word, content.split(QRegularExpression(QStringLiteral("\\s+")), QString::SkipEmptyParts)) {
        if (word.startsWith(QStringLiteral("<p>")) || word.endsWith(QStringLiteral("</p>"))) {
            lines.append(line);
            line.clear();
            if (!lines.last().isEmpty()) {
                lines.append(QStringLiteral("")); // A blank line.
            }
            if (word.startsWith(QStringLiteral("<p>"))) {
                word.remove(0,3);
            }
            if (word.endsWith(QStringLiteral("</p>"))) {
                word.remove(word.size()-5,4);
            }
        }

        if (line.isEmpty()) {
            line += word;
        } else if (line.size() + word.size() < 120) {
            line += QLatin1Char(' ') + word;
        } else {
            lines.append(line);
            line = word;
        }
    }

    // Remove leading and trailing blank lines.
    while ((!lines.isEmpty()) && (lines.first().isEmpty())) {
        lines.removeFirst();
    }
    while ((!lines.isEmpty()) && (lines.last().isEmpty())) {
        lines.removeLast();
    }
    return lines;
}

QString Generator::getClassBrief(const QJsonObject &metaData)
{
    QString brief = QString::fromLatin1("Client for %1").arg(
        metaData.value(QLatin1String("serviceFullName")).toString());

    QString serviceAbbreviation =
        metaData.value(QLatin1String("serviceAbbreviation")).toString();
    serviceAbbreviation.replace(QRegularExpression(QLatin1String("Amazon|AWS")), QString());

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
    return prefix.replace(QRegularExpression(QLatin1String("[- _/]|Amazon|AWS")), QString());
}

QString Generator::getFunctionSignature(const QString &operationName, const QJsonObject &operation)
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
    const QString returnType = operationName
            + QLatin1String("Response *");

    const QString functionArguments = operation.contains(QLatin1String("input"))
            ? QString::fromLatin1("const %2Request &request")
              .arg(operationName)
            : QString(); // No input to this request.

    return QString::fromLatin1("    %1 %2(%3);")
            .arg(returnType).arg(functionName).arg(functionArguments);
}

/// @todo Make this return a QVariantList (or QJsonArray)
QStringList Generator::getFunctionSignatures(const QJsonObject &operations)
{
    QStringList signatures;
    for (auto iter = operations.constBegin(); iter != operations.constEnd(); ++iter) {
        signatures.append(getFunctionSignature(iter.key(), iter.value().toObject()));
    }
    return signatures;
}

// Grantlee output stream that does *no* content escaping.
class NoEscapeStream : public Grantlee::OutputStream {
public:
    NoEscapeStream(QTextStream * stream) : Grantlee::OutputStream(stream) { }

    virtual QString escape(const QString &input) const { return input; }

    virtual QSharedPointer<OutputStream> clone( QTextStream *stream ) const {
        return QSharedPointer<OutputStream>(new NoEscapeStream(stream));
    }
};

bool Generator::render(
    const QString &templateName,
    Grantlee::Context &context,
    const QString &outputFileName) const
{
    if (!templates.contains(templateName)) {
        qWarning() << "template does not exist" << templateName;
        return false;
    }

    QFile file(outputFileName);
    if (!file.open(QFile::WriteOnly)) {
        qWarning() << "failed to open file for writing" << outputFileName;
        return false;
    }

    QTextStream textStream(&file);
    NoEscapeStream noEscapeStream(&textStream);
    templates[templateName]->render(&noEscapeStream, &context);
    return true;
}

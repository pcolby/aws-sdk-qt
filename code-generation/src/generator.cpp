/*
    Copyright 2013-2018 Paul Colby

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
    qDebug() << "generating service" << serviceFileName;
    outputDir.mkdir(serviceFileName);
    const QString projectDir = outputDir.absoluteFilePath(serviceFileName);

    const QJsonObject metaData = description.value(QLatin1String("metadata")).toObject();
    const QString classNamePrefix = getClassNamePrefix(metaData);
    const QString className =
        ((classNamePrefix.contains(QRegularExpression(QLatin1String("^[^a-z]+$"))))
        ? classNamePrefix.at(0) + classNamePrefix.mid(1).toLower() : classNamePrefix)
        + QLatin1String("Client");

    Grantlee::Context context(description.toVariantHash());
    context.insert(QLatin1String("TargetLibName"), serviceFileName);
    context.insert(QLatin1String("NameSpaceName"), classNamePrefix);
    context.insert(QLatin1String("ClassName"), className);
    context.insert(QLatin1String("ClassDocumentation"),
        formatHtmlDocumentation(description.value(QLatin1String("documentation")).toString()));

    /// @todo Generate model classes.
    foreach (const QString &operationName, description.value(QLatin1String("operations")).toObject().keys()) {
        generateModelClasses(projectDir, operationName, description);
    }

    /// @todo Generate request / response classes.

    /// @todo Generate service client.
    context.push();
    QVariantMap operations = context.lookup(QLatin1String("operations")).toMap();
    for (auto iter = operations.begin(); iter != operations.end(); ++iter) {
        QVariantMap operation = iter.value().toMap();
        if (operation.contains(QLatin1String("documentation"))) {
            operation.insert(QLatin1String("documentationFormatted"),
                      formatHtmlDocumentation(operation.value(QLatin1String("documentation")).toString()));
            iter.value() = operation;
        }
    }
    context.insert(QLatin1String("operations"), operations);
    render(QStringLiteral("client.cpp"), context, projectDir, className.toLower() + QLatin1String(".cpp"));
    render(QStringLiteral("client.h"),   context, projectDir, className.toLower() + QLatin1String(".h"));
    render(QStringLiteral("client_p.h"), context, projectDir, className.toLower() + QLatin1String("_p.h"));
    context.pop();

    /// @todo Generate ancillary project files.
    context.push();
    context.insert(QStringLiteral("HeaderFiles"), QStringList()
                   << QStringLiteral("%1.h").arg(className.toLower())
                   << QStringLiteral("%1_p.h").arg(className.toLower()));
    context.insert(QStringLiteral("SourceFiles"), QStringList()
                   << QStringLiteral("%1.cpp").arg(className.toLower()));
    render(QStringLiteral("service.pro"), context, projectDir, serviceFileName + QLatin1String(".pro"));
    context.pop();
    return true;
}

QStringList Generator::formatHtmlDocumentation(const QString &html)
{
    QString content(html);

    /// @todo There's much more we can do here, indeed the documentation
    /// conversation still needs a lot of love. But its a start, and no point
    /// prioritising it yet, since its more important we get the code structure
    /// right first.

    content.replace(QStringLiteral("<function>"), QStringLiteral("<code>"));
    content.replace(QStringLiteral("</function>"), QStringLiteral("</code>"));

    content.replace(QStringLiteral("<important>"), QStringLiteral("<b>"));
    content.replace(QStringLiteral("</important>"), QStringLiteral("</b>"));

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

bool Generator::generateModelClasses(const QString &projectDir, const QString &operationName, const QJsonObject &description)
{
    qDebug() << "generating model for operation" << operationName;
    Grantlee::Context context(description.value(QStringLiteral("operation")).toObject().toVariantHash());

    /// @todo Generate request class.
    context.push();
    const QString requestClassName = operationName + QStringLiteral("Request");
    context.insert(QStringLiteral("ClassName"), requestClassName);
    render(QStringLiteral("request.cpp"), context, projectDir, requestClassName.toLower() + QStringLiteral(".cpp"));
    render(QStringLiteral("request.h"),   context, projectDir, requestClassName.toLower() + QStringLiteral(".h"));
    render(QStringLiteral("request_p.h"), context, projectDir, requestClassName.toLower() + QStringLiteral("_p.h"));
    context.pop();

    /// @todo Generate response class.
    context.push();
    const QString responseClassName = operationName + QStringLiteral("Response");
    context.insert(QStringLiteral("ClassName"), responseClassName);
    render(QStringLiteral("response.cpp"), context, projectDir, responseClassName.toLower() + QStringLiteral(".cpp"));
    render(QStringLiteral("response.h"),   context, projectDir, responseClassName.toLower() + QStringLiteral(".h"));
    render(QStringLiteral("response_p.h"), context, projectDir, responseClassName.toLower() + QStringLiteral("_p.h"));
    context.pop();
    return true;
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

// Grantlee output stream that does *no* content escaping.
class NoEscapeStream : public Grantlee::OutputStream {
public:
    NoEscapeStream(QTextStream * stream) : Grantlee::OutputStream(stream) { }

    virtual QString escape(const QString &input) const { return input; }

    virtual QSharedPointer<OutputStream> clone( QTextStream *stream ) const {
        return QSharedPointer<OutputStream>(new NoEscapeStream(stream));
    }
};

bool Generator::render(const QString &templateName, Grantlee::Context &context,
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

bool Generator::render(const QString &templateName, Grantlee::Context &context,
                       const QString &outputDirName, const QString &outputFileName) const
{
    return render(templateName, context, outputDirName + QLatin1Char('/') + outputFileName);
}

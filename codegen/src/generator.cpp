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

#include "generator.h"

#include <QDebug>
#include <QJsonParseError>
#include <QRegularExpression>

#include <grantlee/templateloader.h>

#define QSL(str) QStringLiteral(str) // Shorten the QStringLiteral macro for readability.

Generator::Generator(const QDir &outputDir)
    : outputDir(outputDir)
{
    Q_ASSERT(outputDir.exists());

    auto loader = QSharedPointer<Grantlee::FileSystemTemplateLoader>::create();
    loader->setTemplateDirs(QStringList() << QSL(":/templates"));
    engine.addTemplateLoader(loader);
    engine.setSmartTrimEnabled(true);

    const QDir dir(QSL(":/templates"));
    foreach (const QString &name, dir.entryList(QDir::Files|QDir::Readable)) {
        qInfo() << "loading template" << name;
        const auto tmplate = engine.loadByName(name);
        if (tmplate->error()) {
            qWarning() << "error loading template" << name << tmplate->errorString();
            continue;
        }
        templates.insert(name, tmplate);
    }
}

int Generator::generate(const QFileInfoList &descriptions)
{
    int count = 0;
    QStringList serviceFileNames;
    foreach (const QFileInfo &entry, descriptions) {
        QFile file(entry.absoluteFilePath());
        file.open(QFile::ReadOnly);
        // <servce-name>-yyyy-mm-dd.normal.json
        Q_ASSERT(entry.fileName().endsWith(QLatin1String(".normal.json")));
        const QString serviceFileName = entry.fileName().chopped(23);
        const int thisCount = generate(serviceFileName, QJsonDocument::fromJson(file.readAll()).object());
        if (thisCount < 0) {
            return thisCount;
        }
        count += thisCount;
        serviceFileNames.append(serviceFileName);
    }
    serviceFileNames.sort();

    Grantlee::Context context;
    context.insert(QSL("ServiceNames"), serviceFileNames);
    if (!render(QSL("src.pro"), context, outputDir.absoluteFilePath(QSL("src.pro")))) {
        return -1;
    }
    return ++count;
}

int Generator::generate(const QString &serviceFileName,
                         const QJsonObject &description)
{
    qInfo() << "generating service" << serviceFileName;
    outputDir.mkdir(serviceFileName);
    headers.clear();
    sources.clear();
    const QString projectDir = outputDir.absoluteFilePath(serviceFileName);

    const QJsonObject metaData = description.value(QLatin1String("metadata")).toObject();
    const QString classNamePrefix = getClassNamePrefix(metaData);
    const QString clientClassName =
        ((classNamePrefix.contains(QRegularExpression(QSL("^[^a-z]+$"))))
        ? classNamePrefix.at(0) + classNamePrefix.mid(1).toLower() : classNamePrefix)
        + QSL("Client");

    Grantlee::Context context(description.toVariantHash());
    context.insert(QSL("ServiceName"), classNamePrefix);
    context.insert(QSL("TargetLibName"), serviceFileName);
    context.insert(QSL("NameSpaceName"), classNamePrefix);
    context.insert(QSL("ClassDocumentation"),
        formatHtmlDocumentation(description.value(QLatin1String("documentation")).toString()));

    // Generate model classes.
    context.push();
    context.insert(QSL("ClientClassName"), clientClassName);
    renderClassFiles(QSL("requestbase"),  context, projectDir, classNamePrefix + QSL("Request"));
    renderClassFiles(QSL("responsebase"), context, projectDir, classNamePrefix + QSL("Response"));
    foreach (const QString &operationName, description.value(QLatin1String("operations")).toObject().keys()) {
        generateModelClasses(context, projectDir, operationName, description);
    }
    context.pop();

    // Generate service client.
    context.push();
    QVariantMap operations = context.lookup(QSL("operations")).toMap();
    for (auto iter = operations.begin(); iter != operations.end(); ++iter) {
        QVariantMap operation = iter.value().toMap();
        if (operation.contains(QSL("documentation"))) {
            operation.insert(QSL("documentationFormatted"),
                      formatHtmlDocumentation(operation.value(QSL("documentation")).toString()));
            iter.value() = operation;
        }
    }
    context.insert(QSL("operations"), operations);
    renderClassFiles(QSL("client"), context, projectDir, clientClassName);
    context.pop();

    // Generate ancillary project files.
    context.push();
    headers.sort();
    sources.sort();
    context.insert(QSL("HeaderFiles"), headers);
    context.insert(QSL("SourceFiles"), sources);
    if (!render(QSL("service.pro"), context, projectDir, serviceFileName + QSL(".pro"))) {
        context.pop();
        return -1;
    }
    context.pop();
    return headers.size() + sources.size() + 1;
}

QStringList Generator::formatHtmlDocumentation(const QString &html)
{
    QString content(html);

    /// @todo There's much more we can do here, indeed the documentation
    /// conversation still needs a lot of love. But its a start, and no point
    /// prioritising it yet, since its more important we get the code structure
    /// right first.

    content.replace(QSL("<function>"), QSL("<code>"));
    content.replace(QSL("</function>"), QSL("</code>"));

    content.replace(QSL("<important>"), QSL("<b>"));
    content.replace(QSL("</important>"), QSL("</b>"));

    QStringList lines;
    QString line;
    foreach (QString word, content.split(QRegularExpression(QSL("\\s+")), QString::SkipEmptyParts)) {
        if (word.startsWith(QSL("<p>")) || word.endsWith(QSL("</p>"))) {
            lines.append(line);
            line.clear();
            if (!lines.last().isEmpty()) {
                lines.append(QSL("")); // A blank line.
            }
            if (word.startsWith(QSL("<p>"))) {
                word.remove(0,3);
            }
            if (word.endsWith(QSL("</p>"))) {
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

bool Generator::generateModelClasses(Grantlee::Context &context, const QString &projectDir,
                                     const QString &operationName, const QJsonObject &description)
{
    qDebug() << "generating model for" << operationName;
    const QJsonObject operation = description.value(QLatin1String("operations"))
            .toObject().value(operationName).toObject();
    context.insert(QLatin1String("operation"), operation.toVariantHash());
    context.insert(QLatin1String("OperationName"), operationName);

    // Generate request class.
    if (operation.contains(QLatin1String("input"))) {
        context.push();
        renderClassFiles(QSL("request"), context, projectDir, operationName + QSL("Request"));
        context.pop();
    }

    // Generate response class.
    context.push();
    renderClassFiles(QSL("response"), context, projectDir, operationName + QSL("Response"));
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
    return prefix.replace(QRegularExpression(QSL("[- _/]|Amazon|AWS")), QString());
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
    if (templates[templateName]->error()) {
        qInfo() << "failed to generate" << outputFileName << templates[templateName]->errorString();
        return false;
    }
    return true;
}

bool Generator::render(const QString &templateName, Grantlee::Context &context,
                       const QString &outputDirName, const QString &outputFileName) const
{
    return render(templateName, context, outputDirName + QLatin1Char('/') + outputFileName);
}

void Generator::renderClassFiles(const QString &templateBaseName, Grantlee::Context &context,
                                 const QString &outputPathName, const QString className)
{
    context.push();
    context.insert(QSL("ClassName"), className);
    foreach (const QString &extension, QStringList() << QSL(".cpp") << QSL(".h") << QSL("_p.h")) {
        render(templateBaseName + extension, context, outputPathName, className.toLower() + extension);
        ((extension == QSL(".cpp")) ? sources : headers).append(className.toLower() + extension);
    }
    context.pop();
}

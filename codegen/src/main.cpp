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

#include <QCommandLineParser>
#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QLoggingCategory>

#include "generator.h"

void configureLogging(const QCommandLineParser &parser)
{
    // Start with the Qt default message pattern (see qtbase:::qlogging.cpp:defaultPattern)
    QString messagePattern = QStringLiteral("%{if-category}%{category}: %{endif}%{message}");

    if (parser.isSet(QStringLiteral("debug"))) {
        messagePattern.prepend(QStringLiteral("%{time process} %{type} %{function} "));
        QLoggingCategory::defaultCategory()->setEnabled(QtDebugMsg, true);
    }

    if (!parser.isSet(QStringLiteral("no-color"))) {
        messagePattern.prepend(QStringLiteral(
      //"%{if-debug}D%{endif}"
      //"%{if-info}\x1b[32m%{endif}"
        "%{if-warning}\x1b[35m%{endif}" // Magenta
        "%{if-critical}\x1b31m%{endif}" // Red
        "%{if-fatal}31;1%{endif}"));    // Red and bold
        messagePattern.append(QStringLiteral("\x1b[0m"));
    }

    qSetMessagePattern(messagePattern);
}

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    // Set default paths reletive to the codegen project's source directory.
    const QDir srcDir = QFileInfo(QFile::decodeName(__FILE__)).dir();
    const QString defaultTemplatesPath = QDir::cleanPath(srcDir.absoluteFilePath(
        QStringLiteral("../aws-sdk-cpp/code-generation/api-descriptions")));
    const QString defaultOutputPath = QDir::cleanPath(srcDir.absoluteFilePath(
        QStringLiteral("../../src")));

    // Parse the command line options.
    QCommandLineParser parser;
    parser.setApplicationDescription(QStringLiteral("Generate code for the AWS SDK for Qt project."));
    parser.addHelpOption();
    parser.addOptions({
        {{QStringLiteral("a"), QStringLiteral("apis")},
          QStringLiteral("Read API descriptions from dir (default is %1)").arg(defaultTemplatesPath),
          QStringLiteral("dir"), defaultTemplatesPath},
        {{QStringLiteral("d"), QStringLiteral("debug")}, QStringLiteral("Enable debug output")},
        {{QStringLiteral("f"), QStringLiteral("force")},
          QStringLiteral("Dont prompt before generating files")},
        { QStringLiteral("no-color"), QStringLiteral("Do not color the output")},
        {{QStringLiteral("o"), QStringLiteral("output")},
          QStringLiteral("Write output to dir (default is %1)").arg(defaultOutputPath),
          QStringLiteral("dir"), defaultOutputPath},
    });
    parser.addPositionalArgument(
        QStringLiteral("services"),
        QStringLiteral("Services to generate, such as 'alexaforbusiness'; omit for all services"),
        QStringLiteral("[services...]"));
    parser.process(app);
    configureLogging(parser);

    // Verify that the output directory exists.
    const QFileInfo outputDir(QDir::cleanPath(parser.value(QStringLiteral("output"))));
    if ((!outputDir.exists()) || (!outputDir.isDir()) || (!outputDir.isWritable())) {
        qWarning() << "output directory does not exist, is not a directory, or is not writeable"
                   << outputDir.absoluteFilePath();
        return 2;
    }

    // Build a list of API descriptions to generate code from.
    const QStringList serviceNames = parser.positionalArguments();
    QFileInfoList descriptions = QDir(
        parser.value(QStringLiteral("apis")), QLatin1String("*-???\?-?\?-??.normal.json"),
        QDir::Name|QDir::IgnoreCase, QDir::Files|QDir::Readable).entryInfoList();
    for (int i = 0; i < descriptions.size(); ++i) {
        const QString serviceName = descriptions.at(i).fileName().chopped(23);
        if ((!serviceNames.isEmpty()) && (!serviceNames.contains(serviceName))) {
            qDebug() << "skipping" << descriptions.at(i).fileName();
            descriptions.removeAt(i--);
        } else if ((i > 0) && (serviceName == descriptions.at(i-1).fileName().chopped(23))) {
            qDebug() << descriptions.at(i).fileName() << "supersedes" << descriptions.at(i-1).fileName();
            descriptions.removeAt(--i);
        }
    }

    // If services were specified on the command line, make sure they were all known services.
    foreach (const QString &serviceName, serviceNames) {
        bool found = false;
        for (int i = 0; (!found) && (i < descriptions.size()); ++i) {
            if (descriptions.at(i).fileName().chopped(23) == serviceName) {
                found = true;
            }
        }
        if (!found) {
            qWarning() << "no API description found for service" << serviceName
                       << "in" << outputDir.absoluteFilePath();
            return 3;
        }
    }

    // Verify that we found services to generate code for.
    if (descriptions.isEmpty()) {
        qWarning() << "no API descriptions found in" << outputDir.absoluteFilePath();
        return 3;
    }

    // Let the user know we're about to generate a lot of files.
    if (!parser.isSet(QStringLiteral("force"))) {
        qWarning() << "About to generate a lot of files in" << outputDir.absoluteFilePath();
        qInfo() << "Press Enter to contine";
        QTextStream stream(stdin);
        stream.readLine();
    }

    // Generate code.
    Generator generator(outputDir.absoluteFilePath());
    if (!generator.generate(descriptions))
    {
        return 3;
    }
    return 0;
}

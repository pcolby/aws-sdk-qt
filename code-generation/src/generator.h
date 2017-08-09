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

#include <QDir>
#include <QJsonObject>

class Generator {

public:
    explicit Generator(const QDir &outputDir);

    bool generate(const QString &serviceFileName, const QJsonObject &description);

protected:
    static QString formatHtmlDocumentation(const QString &html);
    static QString getClassBrief(const QJsonObject &metaData);
    static QString getClassNamePrefix(const QJsonObject &metaData);
    static QString getFunctionSignature(const QString &operationName, const QJsonObject &operation);
    static QStringList getFunctionSignatures(const QJsonObject &operations);
    static QString readAll(const QString &fileName);
    static QString replaceTags(const QMap<QString, QString> &tags,
                               const QString &input);
    static bool replaceTags(const QMap<QString, QString> &tags,
                            const QString &inFile, const QString &outFile);
    static bool writeAll(const QString &fileName, const QString &content);

private:
    QDir outputDir;

};

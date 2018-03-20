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

#include <QDir>
#include <QJsonObject>

#include <grantlee/engine.h>

class Generator {

public:
    explicit Generator(const QDir &outputDir);

    bool generate(const QString &serviceFileName, const QJsonObject &description);

protected:
    static QStringList formatHtmlDocumentation(const QString &html);
    bool generateModelClasses(const QString &projectDir, const QString &operationName, const QJsonObject &description);
    static QString getClassNamePrefix(const QJsonObject &metaData);
    bool render(const QString &templateName, Grantlee::Context &context, const QString &outputFileName) const;

private:
    QDir outputDir;
    Grantlee::Engine engine;
    QMap<QString, Grantlee::Template> templates;
};

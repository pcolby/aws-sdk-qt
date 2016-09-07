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

}

bool Generator::addApiDescription(const QJsonObject &description)
{
    const QString endpointPrefix = description
        .value(QLatin1String("metadata")).toObject()
        .value(QLatin1String("endpointPrefix")).toString();
    if (endpointPrefix.isNull()) {
        qWarning() << "endpointPrefix is missing, or not a string";
        return false;
    }

    auto iter = apiDescriptions.find(endpointPrefix);
    if (iter != apiDescriptions.end()) {
        // compare version.
    } else {
        apiDescriptions.insert(endpointPrefix, description);
    }

    return true;
}

bool Generator::addApiDescription(const QString &fileName)
{
    qDebug() << "adding" << fileName;

    QFile file(fileName);
    if (!file.open(QFile::ReadOnly)) {
        qWarning() << "failed to open file for reading" << fileName;
        return false;
    }

    QJsonParseError parseError;
    const QJsonDocument json = QJsonDocument::fromJson(file.readAll(), &parseError);
    if (parseError.error != QJsonParseError::NoError) {
        qWarning() << "failed to parse JSON file" << fileName << '-'
                   << parseError.errorString() << "at offset" << parseError.offset;
        return false;
    }

    if (!json.isObject()) {
        qWarning() << "content is not a JSON object" << fileName;
        return false;
    }

    if (!addApiDescription(json.object())) {
        qWarning() << "failed to add" << fileName;
        return false;
    }
    return true;
}

int Generator::generate()
{
    foreach (const QJsonObject &description, apiDescriptions) {
        generateApi(description);
    }
    return 0;
}

bool Generator::generateApi(const QJsonObject &description)
{
    qDebug() << "generating" << description
        .value(QLatin1String("metadata")).toObject()
        .value(QLatin1String("endpointPrefix")).toString();

    /// @todo Generato model classes.

    /// @todo Generate request / response classes.

    /// @todo Generate service client.

    /// @todo Generate ancillary project files.

    return true;
}

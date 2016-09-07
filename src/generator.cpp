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

bool Generator::generate(const QJsonObject &description)
{
    qDebug() << "generating" << description
        .value(QLatin1String("metadata")).toObject()
        .value(QLatin1String("endpointPrefix")).toString();

    /// @todo Generate model classes.

    /// @todo Generate request / response classes.

    /// @todo Generate service client.

    /// @todo Generate ancillary project files.

    return true;
}

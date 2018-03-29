/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "lightsailresponse.h"
#include "lightsailresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  LightsailResponse
 *
 * @brief  Handles Lightsail Lightsail responses.
 *
 * @see    LightsailClient::lightsail
 */

/**
 * @brief  Constructs a new LightsailResponse object.
 *
 * @param  parent   This object's parent.
 */
LightsailResponse::LightsailResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new LightsailResponsePrivate(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void LightsailResponse::parseFailure(QIODevice &response)
{
    Q_D(LightsailResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/**
 * @internal
 *
 * @class  LightsailResponsePrivate
 *
 * @brief  Private implementation for LightsailResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new LightsailResponsePrivate object.
 *
 * @param  q  Pointer to this object's public LightsailResponse instance.
 */
LightsailResponsePrivate::LightsailResponsePrivate(
    LightsailResponse * const q) : QtAws::Core::AwsAbstractResponePrivate(q)
{

}

} // namespace Lightsail
} // namespace QtAws

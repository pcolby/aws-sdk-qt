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

#include "iamresponse.h"
#include "iamresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  IAMResponse
 *
 * @brief  Handles IAM IAM responses.
 *
 * @see    IAMClient::iAM
 */

/**
 * @brief  Constructs a new IAMResponse object.
 *
 * @param  parent   This object's parent.
 */
IAMResponse::IAMResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new IAMResponsePrivate(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void IAMResponse::parseFailure(QIODevice &response)
{
    Q_D(IAMResponse);
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
 * @class  IAMResponsePrivate
 *
 * @brief  Private implementation for IAMResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new IAMResponsePrivate object.
 *
 * @param  q  Pointer to this object's public IAMResponse instance.
 */
IAMResponsePrivate::IAMResponsePrivate(
    IAMResponse * const q) : QtAws::Core::AwsAbstractResponePrivate(q)
{

}

} // namespace IAM
} // namespace QtAws

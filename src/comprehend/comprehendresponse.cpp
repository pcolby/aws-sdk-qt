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

#include "comprehendresponse.h"
#include "comprehendresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/**
 * @class  ComprehendResponse
 *
 * @brief  Handles Comprehend Comprehend responses.
 *
 * @see    ComprehendClient::comprehend
 */

/**
 * @brief  Constructs a new ComprehendResponse object.
 *
 * @param  parent   This object's parent.
 */
ComprehendResponse::ComprehendResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ComprehendResponsePrivate(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void ComprehendResponse::parseFailure(QIODevice &response)
{
    Q_D(ComprehendResponse);
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
 * @class  ComprehendResponsePrivate
 *
 * @brief  Private implementation for ComprehendResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ComprehendResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ComprehendResponse instance.
 */
ComprehendResponsePrivate::ComprehendResponsePrivate(
    ComprehendResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Comprehend
} // namespace QtAws

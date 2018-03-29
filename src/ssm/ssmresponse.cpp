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

#include "ssmresponse.h"
#include "ssmresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  SSMResponse
 *
 * @brief  Handles SSM SSM responses.
 *
 * @see    SSMClient::sSM
 */

/**
 * @brief  Constructs a new SSMResponse object.
 *
 * @param  parent   This object's parent.
 */
SSMResponse::SSMResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SSMResponsePrivate(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void SSMResponse::parseFailure(QIODevice &response)
{
    Q_D(SSMResponse);
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
 * @class  SSMResponsePrivate
 *
 * @brief  Private implementation for SSMResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SSMResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SSMResponse instance.
 */
SSMResponsePrivate::SSMResponsePrivate(
    SSMResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace SSM
} // namespace QtAws

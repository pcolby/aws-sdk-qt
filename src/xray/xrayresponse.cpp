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

#include "xrayresponse.h"
#include "xrayresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace XRay {

/**
 * @class  XRayResponse
 *
 * @brief  Handles XRay XRay responses.
 *
 * @see    XRayClient::xRay
 */

/**
 * @brief  Constructs a new XRayResponse object.
 *
 * @param  parent   This object's parent.
 */
XRayResponse::XRayResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new XRayResponsePrivate(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void XRayResponse::parseFailure(QIODevice &response)
{
    Q_D(XRayResponse);
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
 * @class  XRayResponsePrivate
 *
 * @brief  Private implementation for XRayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new XRayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public XRayResponse instance.
 */
XRayResponsePrivate::XRayResponsePrivate(
    XRayResponse * const q) : QtAws::Core::AwsAbstractResponePrivate(q)
{

}

} // namespace XRay
} // namespace QtAws

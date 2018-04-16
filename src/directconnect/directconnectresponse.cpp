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

#include "directconnectresponse.h"
#include "directconnectresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DirectConnectResponse
 *
 * \brief The DirectConnectResponse class provides an interface for DirectConnect responses.
 *
 * \ingroup DirectConnect
 */

/*!
 * @brief  Constructs a new DirectConnectResponse object.
 *
 * @param  parent   This object's parent.
 */
DirectConnectResponse::DirectConnectResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new DirectConnectResponsePrivate(this), parent)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DirectConnectResponse object.
 *
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DirectConnectResponsePrivate.
 *
 * @param  d       Pointer to private data (aka D-Pointer).
 * @param  parent  This object's parent.
 */
DirectConnectResponse::DirectConnectResponse(DirectConnectResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void DirectConnectResponse::parseFailure(QIODevice &response)
{
    Q_D(DirectConnectResponse);
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

/*!
 * @internal
 *
 * @class  DirectConnectResponsePrivate
 *
 * @brief  Private implementation for DirectConnectResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DirectConnectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DirectConnectResponse instance.
 */
DirectConnectResponsePrivate::DirectConnectResponsePrivate(
    DirectConnectResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace DirectConnect
} // namespace QtAws

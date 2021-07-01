/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "apigatewayresponse.h"
#include "apigatewayresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::APIGatewayResponse
 * \brief The APIGatewayResponse class provides an interface for APIGateway responses.
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a APIGatewayResponse object with parent \a parent.
 */
APIGatewayResponse::APIGatewayResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new APIGatewayResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a APIGatewayResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from APIGatewayResponsePrivate.
 */
APIGatewayResponse::APIGatewayResponse(APIGatewayResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void APIGatewayResponse::parseFailure(QIODevice &response)
{
    //Q_D(APIGatewayResponse);
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
 * \class QtAws::APIGateway::APIGatewayResponsePrivate
 * \brief The APIGatewayResponsePrivate class provides private implementation for APIGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a APIGatewayResponsePrivate object with public implementation \a q.
 */
APIGatewayResponsePrivate::APIGatewayResponsePrivate(
    APIGatewayResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace APIGateway
} // namespace QtAws

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

#include "apigatewayv2response.h"
#include "apigatewayv2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::ApiGatewayV2Response
 * \brief The ApiGatewayV2Response class provides an interface for ApiGatewayV2 responses.
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a ApiGatewayV2Response object with parent \a parent.
 */
ApiGatewayV2Response::ApiGatewayV2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ApiGatewayV2ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ApiGatewayV2Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApiGatewayV2ResponsePrivate.
 */
ApiGatewayV2Response::ApiGatewayV2Response(ApiGatewayV2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ApiGatewayV2Response::parseFailure(QIODevice &response)
{
    //Q_D(ApiGatewayV2Response);
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
 * \class QtAws::ApiGatewayV2::ApiGatewayV2ResponsePrivate
 * \brief The ApiGatewayV2ResponsePrivate class provides private implementation for ApiGatewayV2Response.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a ApiGatewayV2ResponsePrivate object with public implementation \a q.
 */
ApiGatewayV2ResponsePrivate::ApiGatewayV2ResponsePrivate(
    ApiGatewayV2Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ApiGatewayV2
} // namespace QtAws

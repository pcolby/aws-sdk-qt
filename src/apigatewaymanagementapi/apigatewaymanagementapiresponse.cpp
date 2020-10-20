/*
    Copyright 2013-2020 Paul Colby

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

#include "apigatewaymanagementapiresponse.h"
#include "apigatewaymanagementapiresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayManagementApi {

/*!
 * \class QtAws::ApiGatewayManagementApi::ApiGatewayManagementApiResponse
 * \brief The ApiGatewayManagementApiResponse class provides an interface for ApiGatewayManagementApi responses.
 *
 * \inmodule QtAwsApiGatewayManagementApi
 */

/*!
 * Constructs a ApiGatewayManagementApiResponse object with parent \a parent.
 */
ApiGatewayManagementApiResponse::ApiGatewayManagementApiResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ApiGatewayManagementApiResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ApiGatewayManagementApiResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApiGatewayManagementApiResponsePrivate.
 */
ApiGatewayManagementApiResponse::ApiGatewayManagementApiResponse(ApiGatewayManagementApiResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ApiGatewayManagementApiResponse::parseFailure(QIODevice &response)
{
    //Q_D(ApiGatewayManagementApiResponse);
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
 * \class QtAws::ApiGatewayManagementApi::ApiGatewayManagementApiResponsePrivate
 * \brief The ApiGatewayManagementApiResponsePrivate class provides private implementation for ApiGatewayManagementApiResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayManagementApi
 */

/*!
 * Constructs a ApiGatewayManagementApiResponsePrivate object with public implementation \a q.
 */
ApiGatewayManagementApiResponsePrivate::ApiGatewayManagementApiResponsePrivate(
    ApiGatewayManagementApiResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ApiGatewayManagementApi
} // namespace QtAws

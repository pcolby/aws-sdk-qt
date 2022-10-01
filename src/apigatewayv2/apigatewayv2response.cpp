// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

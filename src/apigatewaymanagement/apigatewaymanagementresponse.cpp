// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "apigatewaymanagementresponse.h"
#include "apigatewaymanagementresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayManagement {

/*!
 * \class QtAws::ApiGatewayManagement::ApiGatewayManagementResponse
 * \brief The ApiGatewayManagementResponse class provides an interface for ApiGatewayManagement responses.
 *
 * \inmodule QtAwsApiGatewayManagement
 */

/*!
 * Constructs a ApiGatewayManagementResponse object with parent \a parent.
 */
ApiGatewayManagementResponse::ApiGatewayManagementResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ApiGatewayManagementResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ApiGatewayManagementResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApiGatewayManagementResponsePrivate.
 */
ApiGatewayManagementResponse::ApiGatewayManagementResponse(ApiGatewayManagementResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ApiGatewayManagementResponse::parseFailure(QIODevice &response)
{
    //Q_D(ApiGatewayManagementResponse);
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
 * \class QtAws::ApiGatewayManagement::ApiGatewayManagementResponsePrivate
 * \brief The ApiGatewayManagementResponsePrivate class provides private implementation for ApiGatewayManagementResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayManagement
 */

/*!
 * Constructs a ApiGatewayManagementResponsePrivate object with public implementation \a q.
 */
ApiGatewayManagementResponsePrivate::ApiGatewayManagementResponsePrivate(
    ApiGatewayManagementResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ApiGatewayManagement
} // namespace QtAws

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

#include "getintegrationsresponse.h"
#include "getintegrationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationsResponse
 * \brief The GetIntegrationsResponse class provides an interace for ApiGatewayV2 GetIntegrations responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getIntegrations
 */

/*!
 * Constructs a GetIntegrationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetIntegrationsResponse::GetIntegrationsResponse(
        const GetIntegrationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetIntegrationsResponsePrivate(this), parent)
{
    setRequest(new GetIntegrationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIntegrationsRequest * GetIntegrationsResponse::request() const
{
    return static_cast<const GetIntegrationsRequest *>(ApiGatewayV2Response::request());
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetIntegrations \a response.
 */
void GetIntegrationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIntegrationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationsResponsePrivate
 * \brief The GetIntegrationsResponsePrivate class provides private implementation for GetIntegrationsResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetIntegrationsResponsePrivate object with public implementation \a q.
 */
GetIntegrationsResponsePrivate::GetIntegrationsResponsePrivate(
    GetIntegrationsResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetIntegrations response element from \a xml.
 */
void GetIntegrationsResponsePrivate::parseGetIntegrationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntegrationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws

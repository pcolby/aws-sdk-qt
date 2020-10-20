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

#include "getintegrationresponsesresponse.h"
#include "getintegrationresponsesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationResponsesResponse
 * \brief The GetIntegrationResponsesResponse class provides an interace for ApiGatewayV2 GetIntegrationResponses responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getIntegrationResponses
 */

/*!
 * Constructs a GetIntegrationResponsesResponse object for \a reply to \a request, with parent \a parent.
 */
GetIntegrationResponsesResponse::GetIntegrationResponsesResponse(
        const GetIntegrationResponsesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetIntegrationResponsesResponsePrivate(this), parent)
{
    setRequest(new GetIntegrationResponsesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIntegrationResponsesRequest * GetIntegrationResponsesResponse::request() const
{
    Q_D(const GetIntegrationResponsesResponse);
    return static_cast<const GetIntegrationResponsesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetIntegrationResponses \a response.
 */
void GetIntegrationResponsesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIntegrationResponsesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetIntegrationResponsesResponsePrivate
 * \brief The GetIntegrationResponsesResponsePrivate class provides private implementation for GetIntegrationResponsesResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetIntegrationResponsesResponsePrivate object with public implementation \a q.
 */
GetIntegrationResponsesResponsePrivate::GetIntegrationResponsesResponsePrivate(
    GetIntegrationResponsesResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetIntegrationResponses response element from \a xml.
 */
void GetIntegrationResponsesResponsePrivate::parseGetIntegrationResponsesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntegrationResponsesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws

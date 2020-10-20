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

#include "getrouteresponsesresponse.h"
#include "getrouteresponsesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetRouteResponsesResponse
 * \brief The GetRouteResponsesResponse class provides an interace for ApiGatewayV2 GetRouteResponses responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getRouteResponses
 */

/*!
 * Constructs a GetRouteResponsesResponse object for \a reply to \a request, with parent \a parent.
 */
GetRouteResponsesResponse::GetRouteResponsesResponse(
        const GetRouteResponsesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetRouteResponsesResponsePrivate(this), parent)
{
    setRequest(new GetRouteResponsesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRouteResponsesRequest * GetRouteResponsesResponse::request() const
{
    Q_D(const GetRouteResponsesResponse);
    return static_cast<const GetRouteResponsesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetRouteResponses \a response.
 */
void GetRouteResponsesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRouteResponsesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetRouteResponsesResponsePrivate
 * \brief The GetRouteResponsesResponsePrivate class provides private implementation for GetRouteResponsesResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetRouteResponsesResponsePrivate object with public implementation \a q.
 */
GetRouteResponsesResponsePrivate::GetRouteResponsesResponsePrivate(
    GetRouteResponsesResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetRouteResponses response element from \a xml.
 */
void GetRouteResponsesResponsePrivate::parseGetRouteResponsesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRouteResponsesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws

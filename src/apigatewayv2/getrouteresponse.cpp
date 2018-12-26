/*
    Copyright 2013-2018 Paul Colby

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

#include "getrouteresponse.h"
#include "getrouteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetRouteResponse
 * \brief The GetRouteResponse class provides an interace for ApiGatewayV2 GetRoute responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getRoute
 */

/*!
 * Constructs a GetRouteResponse object for \a reply to \a request, with parent \a parent.
 */
GetRouteResponse::GetRouteResponse(
        const GetRouteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetRouteResponsePrivate(this), parent)
{
    setRequest(new GetRouteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRouteRequest * GetRouteResponse::request() const
{
    Q_D(const GetRouteResponse);
    return static_cast<const GetRouteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetRoute \a response.
 */
void GetRouteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRouteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetRouteResponsePrivate
 * \brief The GetRouteResponsePrivate class provides private implementation for GetRouteResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetRouteResponsePrivate object with public implementation \a q.
 */
GetRouteResponsePrivate::GetRouteResponsePrivate(
    GetRouteResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetRoute response element from \a xml.
 */
void GetRouteResponsePrivate::parseGetRouteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRouteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws

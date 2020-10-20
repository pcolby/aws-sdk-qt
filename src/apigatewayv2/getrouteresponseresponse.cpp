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

#include "getrouteresponseresponse.h"
#include "getrouteresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::GetRouteResponseResponse
 * \brief The GetRouteResponseResponse class provides an interace for ApiGatewayV2 GetRouteResponse responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::getRouteResponse
 */

/*!
 * Constructs a GetRouteResponseResponse object for \a reply to \a request, with parent \a parent.
 */
GetRouteResponseResponse::GetRouteResponseResponse(
        const GetRouteResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new GetRouteResponseResponsePrivate(this), parent)
{
    setRequest(new GetRouteResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRouteResponseRequest * GetRouteResponseResponse::request() const
{
    Q_D(const GetRouteResponseResponse);
    return static_cast<const GetRouteResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 GetRouteResponse \a response.
 */
void GetRouteResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRouteResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::GetRouteResponseResponsePrivate
 * \brief The GetRouteResponseResponsePrivate class provides private implementation for GetRouteResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a GetRouteResponseResponsePrivate object with public implementation \a q.
 */
GetRouteResponseResponsePrivate::GetRouteResponseResponsePrivate(
    GetRouteResponseResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 GetRouteResponse response element from \a xml.
 */
void GetRouteResponseResponsePrivate::parseGetRouteResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRouteResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws

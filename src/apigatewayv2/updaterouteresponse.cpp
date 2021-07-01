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

#include "updaterouteresponse.h"
#include "updaterouteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateRouteResponse
 * \brief The UpdateRouteResponse class provides an interace for ApiGatewayV2 UpdateRoute responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateRoute
 */

/*!
 * Constructs a UpdateRouteResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRouteResponse::UpdateRouteResponse(
        const UpdateRouteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new UpdateRouteResponsePrivate(this), parent)
{
    setRequest(new UpdateRouteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRouteRequest * UpdateRouteResponse::request() const
{
    Q_D(const UpdateRouteResponse);
    return static_cast<const UpdateRouteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 UpdateRoute \a response.
 */
void UpdateRouteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRouteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateRouteResponsePrivate
 * \brief The UpdateRouteResponsePrivate class provides private implementation for UpdateRouteResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateRouteResponsePrivate object with public implementation \a q.
 */
UpdateRouteResponsePrivate::UpdateRouteResponsePrivate(
    UpdateRouteResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 UpdateRoute response element from \a xml.
 */
void UpdateRouteResponsePrivate::parseUpdateRouteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRouteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws

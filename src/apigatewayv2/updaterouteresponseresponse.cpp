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

#include "updaterouteresponseresponse.h"
#include "updaterouteresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::UpdateRouteResponseResponse
 * \brief The UpdateRouteResponseResponse class provides an interace for ApiGatewayV2 UpdateRouteResponse responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::updateRouteResponse
 */

/*!
 * Constructs a UpdateRouteResponseResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRouteResponseResponse::UpdateRouteResponseResponse(
        const UpdateRouteResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new UpdateRouteResponseResponsePrivate(this), parent)
{
    setRequest(new UpdateRouteResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRouteResponseRequest * UpdateRouteResponseResponse::request() const
{
    Q_D(const UpdateRouteResponseResponse);
    return static_cast<const UpdateRouteResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 UpdateRouteResponse \a response.
 */
void UpdateRouteResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRouteResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::UpdateRouteResponseResponsePrivate
 * \brief The UpdateRouteResponseResponsePrivate class provides private implementation for UpdateRouteResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a UpdateRouteResponseResponsePrivate object with public implementation \a q.
 */
UpdateRouteResponseResponsePrivate::UpdateRouteResponseResponsePrivate(
    UpdateRouteResponseResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 UpdateRouteResponse response element from \a xml.
 */
void UpdateRouteResponseResponsePrivate::parseUpdateRouteResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRouteResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws

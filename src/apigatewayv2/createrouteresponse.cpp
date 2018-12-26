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

#include "createrouteresponse.h"
#include "createrouteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateRouteResponse
 * \brief The CreateRouteResponse class provides an interace for ApiGatewayV2 CreateRoute responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createRoute
 */

/*!
 * Constructs a CreateRouteResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRouteResponse::CreateRouteResponse(
        const CreateRouteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new CreateRouteResponsePrivate(this), parent)
{
    setRequest(new CreateRouteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRouteRequest * CreateRouteResponse::request() const
{
    Q_D(const CreateRouteResponse);
    return static_cast<const CreateRouteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 CreateRoute \a response.
 */
void CreateRouteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRouteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::CreateRouteResponsePrivate
 * \brief The CreateRouteResponsePrivate class provides private implementation for CreateRouteResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateRouteResponsePrivate object with public implementation \a q.
 */
CreateRouteResponsePrivate::CreateRouteResponsePrivate(
    CreateRouteResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 CreateRoute response element from \a xml.
 */
void CreateRouteResponsePrivate::parseCreateRouteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRouteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws

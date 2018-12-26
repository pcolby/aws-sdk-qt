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

#include "createrouteresponseresponse.h"
#include "createrouteresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::CreateRouteResponseResponse
 * \brief The CreateRouteResponseResponse class provides an interace for ApiGatewayV2 CreateRouteResponse responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::createRouteResponse
 */

/*!
 * Constructs a CreateRouteResponseResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRouteResponseResponse::CreateRouteResponseResponse(
        const CreateRouteResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new CreateRouteResponseResponsePrivate(this), parent)
{
    setRequest(new CreateRouteResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRouteResponseRequest * CreateRouteResponseResponse::request() const
{
    Q_D(const CreateRouteResponseResponse);
    return static_cast<const CreateRouteResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 CreateRouteResponse \a response.
 */
void CreateRouteResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRouteResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::CreateRouteResponseResponsePrivate
 * \brief The CreateRouteResponseResponsePrivate class provides private implementation for CreateRouteResponseResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a CreateRouteResponseResponsePrivate object with public implementation \a q.
 */
CreateRouteResponseResponsePrivate::CreateRouteResponseResponsePrivate(
    CreateRouteResponseResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 CreateRouteResponse response element from \a xml.
 */
void CreateRouteResponseResponsePrivate::parseCreateRouteResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRouteResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws

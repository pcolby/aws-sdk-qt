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

#include "deleterouterequestparameterresponse.h"
#include "deleterouterequestparameterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteRequestParameterResponse
 * \brief The DeleteRouteRequestParameterResponse class provides an interace for ApiGatewayV2 DeleteRouteRequestParameter responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteRouteRequestParameter
 */

/*!
 * Constructs a DeleteRouteRequestParameterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRouteRequestParameterResponse::DeleteRouteRequestParameterResponse(
        const DeleteRouteRequestParameterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteRouteRequestParameterResponsePrivate(this), parent)
{
    setRequest(new DeleteRouteRequestParameterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRouteRequestParameterRequest * DeleteRouteRequestParameterResponse::request() const
{
    return static_cast<const DeleteRouteRequestParameterRequest *>(ApiGatewayV2Response::request());
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 DeleteRouteRequestParameter \a response.
 */
void DeleteRouteRequestParameterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRouteRequestParameterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteRequestParameterResponsePrivate
 * \brief The DeleteRouteRequestParameterResponsePrivate class provides private implementation for DeleteRouteRequestParameterResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteRouteRequestParameterResponsePrivate object with public implementation \a q.
 */
DeleteRouteRequestParameterResponsePrivate::DeleteRouteRequestParameterResponsePrivate(
    DeleteRouteRequestParameterResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteRouteRequestParameter response element from \a xml.
 */
void DeleteRouteRequestParameterResponsePrivate::parseDeleteRouteRequestParameterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRouteRequestParameterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws

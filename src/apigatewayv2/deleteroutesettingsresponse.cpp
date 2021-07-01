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

#include "deleteroutesettingsresponse.h"
#include "deleteroutesettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteSettingsResponse
 * \brief The DeleteRouteSettingsResponse class provides an interace for ApiGatewayV2 DeleteRouteSettings responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteRouteSettings
 */

/*!
 * Constructs a DeleteRouteSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRouteSettingsResponse::DeleteRouteSettingsResponse(
        const DeleteRouteSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteRouteSettingsResponsePrivate(this), parent)
{
    setRequest(new DeleteRouteSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRouteSettingsRequest * DeleteRouteSettingsResponse::request() const
{
    Q_D(const DeleteRouteSettingsResponse);
    return static_cast<const DeleteRouteSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 DeleteRouteSettings \a response.
 */
void DeleteRouteSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRouteSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteRouteSettingsResponsePrivate
 * \brief The DeleteRouteSettingsResponsePrivate class provides private implementation for DeleteRouteSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteRouteSettingsResponsePrivate object with public implementation \a q.
 */
DeleteRouteSettingsResponsePrivate::DeleteRouteSettingsResponsePrivate(
    DeleteRouteSettingsResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteRouteSettings response element from \a xml.
 */
void DeleteRouteSettingsResponsePrivate::parseDeleteRouteSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRouteSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws

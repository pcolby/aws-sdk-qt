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

#include "deleteaccesslogsettingsresponse.h"
#include "deleteaccesslogsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteAccessLogSettingsResponse
 * \brief The DeleteAccessLogSettingsResponse class provides an interace for ApiGatewayV2 DeleteAccessLogSettings responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteAccessLogSettings
 */

/*!
 * Constructs a DeleteAccessLogSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAccessLogSettingsResponse::DeleteAccessLogSettingsResponse(
        const DeleteAccessLogSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteAccessLogSettingsResponsePrivate(this), parent)
{
    setRequest(new DeleteAccessLogSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAccessLogSettingsRequest * DeleteAccessLogSettingsResponse::request() const
{
    return static_cast<const DeleteAccessLogSettingsRequest *>(ApiGatewayV2Response::request());
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 DeleteAccessLogSettings \a response.
 */
void DeleteAccessLogSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAccessLogSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteAccessLogSettingsResponsePrivate
 * \brief The DeleteAccessLogSettingsResponsePrivate class provides private implementation for DeleteAccessLogSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteAccessLogSettingsResponsePrivate object with public implementation \a q.
 */
DeleteAccessLogSettingsResponsePrivate::DeleteAccessLogSettingsResponsePrivate(
    DeleteAccessLogSettingsResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteAccessLogSettings response element from \a xml.
 */
void DeleteAccessLogSettingsResponsePrivate::parseDeleteAccessLogSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccessLogSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws

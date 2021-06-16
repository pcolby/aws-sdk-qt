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

#include "deletecorsconfigurationresponse.h"
#include "deletecorsconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::DeleteCorsConfigurationResponse
 * \brief The DeleteCorsConfigurationResponse class provides an interace for ApiGatewayV2 DeleteCorsConfiguration responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::deleteCorsConfiguration
 */

/*!
 * Constructs a DeleteCorsConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCorsConfigurationResponse::DeleteCorsConfigurationResponse(
        const DeleteCorsConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new DeleteCorsConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteCorsConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCorsConfigurationRequest * DeleteCorsConfigurationResponse::request() const
{
    Q_D(const DeleteCorsConfigurationResponse);
    return static_cast<const DeleteCorsConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 DeleteCorsConfiguration \a response.
 */
void DeleteCorsConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCorsConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::DeleteCorsConfigurationResponsePrivate
 * \brief The DeleteCorsConfigurationResponsePrivate class provides private implementation for DeleteCorsConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a DeleteCorsConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteCorsConfigurationResponsePrivate::DeleteCorsConfigurationResponsePrivate(
    DeleteCorsConfigurationResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 DeleteCorsConfiguration response element from \a xml.
 */
void DeleteCorsConfigurationResponsePrivate::parseDeleteCorsConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCorsConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws

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

#include "resetauthorizerscacheresponse.h"
#include "resetauthorizerscacheresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGatewayV2 {

/*!
 * \class QtAws::ApiGatewayV2::ResetAuthorizersCacheResponse
 * \brief The ResetAuthorizersCacheResponse class provides an interace for ApiGatewayV2 ResetAuthorizersCache responses.
 *
 * \inmodule QtAwsApiGatewayV2
 *
 *  Amazon API Gateway
 *
 * \sa ApiGatewayV2Client::resetAuthorizersCache
 */

/*!
 * Constructs a ResetAuthorizersCacheResponse object for \a reply to \a request, with parent \a parent.
 */
ResetAuthorizersCacheResponse::ResetAuthorizersCacheResponse(
        const ResetAuthorizersCacheRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayV2Response(new ResetAuthorizersCacheResponsePrivate(this), parent)
{
    setRequest(new ResetAuthorizersCacheRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetAuthorizersCacheRequest * ResetAuthorizersCacheResponse::request() const
{
    return static_cast<const ResetAuthorizersCacheRequest *>(ApiGatewayV2Response::request());
}

/*!
 * \reimp
 * Parses a successful ApiGatewayV2 ResetAuthorizersCache \a response.
 */
void ResetAuthorizersCacheResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetAuthorizersCacheResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGatewayV2::ResetAuthorizersCacheResponsePrivate
 * \brief The ResetAuthorizersCacheResponsePrivate class provides private implementation for ResetAuthorizersCacheResponse.
 * \internal
 *
 * \inmodule QtAwsApiGatewayV2
 */

/*!
 * Constructs a ResetAuthorizersCacheResponsePrivate object with public implementation \a q.
 */
ResetAuthorizersCacheResponsePrivate::ResetAuthorizersCacheResponsePrivate(
    ResetAuthorizersCacheResponse * const q) : ApiGatewayV2ResponsePrivate(q)
{

}

/*!
 * Parses a ApiGatewayV2 ResetAuthorizersCache response element from \a xml.
 */
void ResetAuthorizersCacheResponsePrivate::parseResetAuthorizersCacheResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetAuthorizersCacheResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGatewayV2
} // namespace QtAws

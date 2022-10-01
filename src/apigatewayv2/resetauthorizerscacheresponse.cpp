// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const ResetAuthorizersCacheResponse);
    return static_cast<const ResetAuthorizersCacheRequest *>(d->request);
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

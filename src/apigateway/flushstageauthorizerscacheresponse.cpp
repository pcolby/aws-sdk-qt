// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "flushstageauthorizerscacheresponse.h"
#include "flushstageauthorizerscacheresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::FlushStageAuthorizersCacheResponse
 * \brief The FlushStageAuthorizersCacheResponse class provides an interace for ApiGateway FlushStageAuthorizersCache responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::flushStageAuthorizersCache
 */

/*!
 * Constructs a FlushStageAuthorizersCacheResponse object for \a reply to \a request, with parent \a parent.
 */
FlushStageAuthorizersCacheResponse::FlushStageAuthorizersCacheResponse(
        const FlushStageAuthorizersCacheRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new FlushStageAuthorizersCacheResponsePrivate(this), parent)
{
    setRequest(new FlushStageAuthorizersCacheRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const FlushStageAuthorizersCacheRequest * FlushStageAuthorizersCacheResponse::request() const
{
    Q_D(const FlushStageAuthorizersCacheResponse);
    return static_cast<const FlushStageAuthorizersCacheRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway FlushStageAuthorizersCache \a response.
 */
void FlushStageAuthorizersCacheResponse::parseSuccess(QIODevice &response)
{
    //Q_D(FlushStageAuthorizersCacheResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::FlushStageAuthorizersCacheResponsePrivate
 * \brief The FlushStageAuthorizersCacheResponsePrivate class provides private implementation for FlushStageAuthorizersCacheResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a FlushStageAuthorizersCacheResponsePrivate object with public implementation \a q.
 */
FlushStageAuthorizersCacheResponsePrivate::FlushStageAuthorizersCacheResponsePrivate(
    FlushStageAuthorizersCacheResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway FlushStageAuthorizersCache response element from \a xml.
 */
void FlushStageAuthorizersCacheResponsePrivate::parseFlushStageAuthorizersCacheResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("FlushStageAuthorizersCacheResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "flushstagecacheresponse.h"
#include "flushstagecacheresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApiGateway {

/*!
 * \class QtAws::ApiGateway::FlushStageCacheResponse
 * \brief The FlushStageCacheResponse class provides an interace for ApiGateway FlushStageCache responses.
 *
 * \inmodule QtAwsApiGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa ApiGatewayClient::flushStageCache
 */

/*!
 * Constructs a FlushStageCacheResponse object for \a reply to \a request, with parent \a parent.
 */
FlushStageCacheResponse::FlushStageCacheResponse(
        const FlushStageCacheRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApiGatewayResponse(new FlushStageCacheResponsePrivate(this), parent)
{
    setRequest(new FlushStageCacheRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const FlushStageCacheRequest * FlushStageCacheResponse::request() const
{
    Q_D(const FlushStageCacheResponse);
    return static_cast<const FlushStageCacheRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApiGateway FlushStageCache \a response.
 */
void FlushStageCacheResponse::parseSuccess(QIODevice &response)
{
    //Q_D(FlushStageCacheResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApiGateway::FlushStageCacheResponsePrivate
 * \brief The FlushStageCacheResponsePrivate class provides private implementation for FlushStageCacheResponse.
 * \internal
 *
 * \inmodule QtAwsApiGateway
 */

/*!
 * Constructs a FlushStageCacheResponsePrivate object with public implementation \a q.
 */
FlushStageCacheResponsePrivate::FlushStageCacheResponsePrivate(
    FlushStageCacheResponse * const q) : ApiGatewayResponsePrivate(q)
{

}

/*!
 * Parses a ApiGateway FlushStageCache response element from \a xml.
 */
void FlushStageCacheResponsePrivate::parseFlushStageCacheResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("FlushStageCacheResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApiGateway
} // namespace QtAws

/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "flushstagecacheresponse.h"
#include "flushstagecacheresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::FlushStageCacheResponse
 * \brief The FlushStageCacheResponse class provides an interace for APIGateway FlushStageCache responses.
 *
 * \inmodule QtAwsAPIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::flushStageCache
 */

/*!
 * Constructs a FlushStageCacheResponse object for \a reply to \a request, with parent \a parent.
 */
FlushStageCacheResponse::FlushStageCacheResponse(
        const FlushStageCacheRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new FlushStageCacheResponsePrivate(this), parent)
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
 * Parses a successful APIGateway FlushStageCache \a response.
 */
void FlushStageCacheResponse::parseSuccess(QIODevice &response)
{
    Q_D(FlushStageCacheResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::APIGateway::FlushStageCacheResponsePrivate
 * \brief The FlushStageCacheResponsePrivate class provides private implementation for FlushStageCacheResponse.
 * \internal
 *
 * \inmodule QtAwsAPIGateway
 */

/*!
 * Constructs a FlushStageCacheResponsePrivate object with public implementation \a q.
 */
FlushStageCacheResponsePrivate::FlushStageCacheResponsePrivate(
    FlushStageCacheResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * Parses a APIGateway FlushStageCache response element from \a xml.
 */
void FlushStageCacheResponsePrivate::parseFlushStageCacheResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("FlushStageCacheResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws

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

#include "describesignalingchannelresponse.h"
#include "describesignalingchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::DescribeSignalingChannelResponse
 * \brief The DescribeSignalingChannelResponse class provides an interace for KinesisVideo DescribeSignalingChannel responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::describeSignalingChannel
 */

/*!
 * Constructs a DescribeSignalingChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSignalingChannelResponse::DescribeSignalingChannelResponse(
        const DescribeSignalingChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new DescribeSignalingChannelResponsePrivate(this), parent)
{
    setRequest(new DescribeSignalingChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSignalingChannelRequest * DescribeSignalingChannelResponse::request() const
{
    Q_D(const DescribeSignalingChannelResponse);
    return static_cast<const DescribeSignalingChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo DescribeSignalingChannel \a response.
 */
void DescribeSignalingChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSignalingChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::DescribeSignalingChannelResponsePrivate
 * \brief The DescribeSignalingChannelResponsePrivate class provides private implementation for DescribeSignalingChannelResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a DescribeSignalingChannelResponsePrivate object with public implementation \a q.
 */
DescribeSignalingChannelResponsePrivate::DescribeSignalingChannelResponsePrivate(
    DescribeSignalingChannelResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo DescribeSignalingChannel response element from \a xml.
 */
void DescribeSignalingChannelResponsePrivate::parseDescribeSignalingChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSignalingChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws

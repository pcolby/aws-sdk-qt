// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

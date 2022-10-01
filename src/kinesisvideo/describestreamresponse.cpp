// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describestreamresponse.h"
#include "describestreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::DescribeStreamResponse
 * \brief The DescribeStreamResponse class provides an interace for KinesisVideo DescribeStream responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::describeStream
 */

/*!
 * Constructs a DescribeStreamResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeStreamResponse::DescribeStreamResponse(
        const DescribeStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new DescribeStreamResponsePrivate(this), parent)
{
    setRequest(new DescribeStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeStreamRequest * DescribeStreamResponse::request() const
{
    Q_D(const DescribeStreamResponse);
    return static_cast<const DescribeStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo DescribeStream \a response.
 */
void DescribeStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::DescribeStreamResponsePrivate
 * \brief The DescribeStreamResponsePrivate class provides private implementation for DescribeStreamResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a DescribeStreamResponsePrivate object with public implementation \a q.
 */
DescribeStreamResponsePrivate::DescribeStreamResponsePrivate(
    DescribeStreamResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo DescribeStream response element from \a xml.
 */
void DescribeStreamResponsePrivate::parseDescribeStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws

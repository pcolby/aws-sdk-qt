// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeapplicationsnapshotresponse.h"
#include "describeapplicationsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DescribeApplicationSnapshotResponse
 * \brief The DescribeApplicationSnapshotResponse class provides an interace for KinesisAnalyticsV2 DescribeApplicationSnapshot responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::describeApplicationSnapshot
 */

/*!
 * Constructs a DescribeApplicationSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeApplicationSnapshotResponse::DescribeApplicationSnapshotResponse(
        const DescribeApplicationSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new DescribeApplicationSnapshotResponsePrivate(this), parent)
{
    setRequest(new DescribeApplicationSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeApplicationSnapshotRequest * DescribeApplicationSnapshotResponse::request() const
{
    Q_D(const DescribeApplicationSnapshotResponse);
    return static_cast<const DescribeApplicationSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 DescribeApplicationSnapshot \a response.
 */
void DescribeApplicationSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeApplicationSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DescribeApplicationSnapshotResponsePrivate
 * \brief The DescribeApplicationSnapshotResponsePrivate class provides private implementation for DescribeApplicationSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DescribeApplicationSnapshotResponsePrivate object with public implementation \a q.
 */
DescribeApplicationSnapshotResponsePrivate::DescribeApplicationSnapshotResponsePrivate(
    DescribeApplicationSnapshotResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 DescribeApplicationSnapshot response element from \a xml.
 */
void DescribeApplicationSnapshotResponsePrivate::parseDescribeApplicationSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeApplicationSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws

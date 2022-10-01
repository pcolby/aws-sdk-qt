// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeapplicationversionresponse.h"
#include "describeapplicationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DescribeApplicationVersionResponse
 * \brief The DescribeApplicationVersionResponse class provides an interace for KinesisAnalyticsV2 DescribeApplicationVersion responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::describeApplicationVersion
 */

/*!
 * Constructs a DescribeApplicationVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeApplicationVersionResponse::DescribeApplicationVersionResponse(
        const DescribeApplicationVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new DescribeApplicationVersionResponsePrivate(this), parent)
{
    setRequest(new DescribeApplicationVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeApplicationVersionRequest * DescribeApplicationVersionResponse::request() const
{
    Q_D(const DescribeApplicationVersionResponse);
    return static_cast<const DescribeApplicationVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 DescribeApplicationVersion \a response.
 */
void DescribeApplicationVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeApplicationVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DescribeApplicationVersionResponsePrivate
 * \brief The DescribeApplicationVersionResponsePrivate class provides private implementation for DescribeApplicationVersionResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DescribeApplicationVersionResponsePrivate object with public implementation \a q.
 */
DescribeApplicationVersionResponsePrivate::DescribeApplicationVersionResponsePrivate(
    DescribeApplicationVersionResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 DescribeApplicationVersion response element from \a xml.
 */
void DescribeApplicationVersionResponsePrivate::parseDescribeApplicationVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeApplicationVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws

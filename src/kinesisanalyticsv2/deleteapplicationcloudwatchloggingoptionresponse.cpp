// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationcloudwatchloggingoptionresponse.h"
#include "deleteapplicationcloudwatchloggingoptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationCloudWatchLoggingOptionResponse
 * \brief The DeleteApplicationCloudWatchLoggingOptionResponse class provides an interace for KinesisAnalyticsV2 DeleteApplicationCloudWatchLoggingOption responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::deleteApplicationCloudWatchLoggingOption
 */

/*!
 * Constructs a DeleteApplicationCloudWatchLoggingOptionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApplicationCloudWatchLoggingOptionResponse::DeleteApplicationCloudWatchLoggingOptionResponse(
        const DeleteApplicationCloudWatchLoggingOptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new DeleteApplicationCloudWatchLoggingOptionResponsePrivate(this), parent)
{
    setRequest(new DeleteApplicationCloudWatchLoggingOptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApplicationCloudWatchLoggingOptionRequest * DeleteApplicationCloudWatchLoggingOptionResponse::request() const
{
    Q_D(const DeleteApplicationCloudWatchLoggingOptionResponse);
    return static_cast<const DeleteApplicationCloudWatchLoggingOptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 DeleteApplicationCloudWatchLoggingOption \a response.
 */
void DeleteApplicationCloudWatchLoggingOptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApplicationCloudWatchLoggingOptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationCloudWatchLoggingOptionResponsePrivate
 * \brief The DeleteApplicationCloudWatchLoggingOptionResponsePrivate class provides private implementation for DeleteApplicationCloudWatchLoggingOptionResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DeleteApplicationCloudWatchLoggingOptionResponsePrivate object with public implementation \a q.
 */
DeleteApplicationCloudWatchLoggingOptionResponsePrivate::DeleteApplicationCloudWatchLoggingOptionResponsePrivate(
    DeleteApplicationCloudWatchLoggingOptionResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 DeleteApplicationCloudWatchLoggingOption response element from \a xml.
 */
void DeleteApplicationCloudWatchLoggingOptionResponsePrivate::parseDeleteApplicationCloudWatchLoggingOptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApplicationCloudWatchLoggingOptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws

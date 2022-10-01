// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addapplicationcloudwatchloggingoptionresponse.h"
#include "addapplicationcloudwatchloggingoptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationCloudWatchLoggingOptionResponse
 * \brief The AddApplicationCloudWatchLoggingOptionResponse class provides an interace for KinesisAnalyticsV2 AddApplicationCloudWatchLoggingOption responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::addApplicationCloudWatchLoggingOption
 */

/*!
 * Constructs a AddApplicationCloudWatchLoggingOptionResponse object for \a reply to \a request, with parent \a parent.
 */
AddApplicationCloudWatchLoggingOptionResponse::AddApplicationCloudWatchLoggingOptionResponse(
        const AddApplicationCloudWatchLoggingOptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsV2Response(new AddApplicationCloudWatchLoggingOptionResponsePrivate(this), parent)
{
    setRequest(new AddApplicationCloudWatchLoggingOptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddApplicationCloudWatchLoggingOptionRequest * AddApplicationCloudWatchLoggingOptionResponse::request() const
{
    Q_D(const AddApplicationCloudWatchLoggingOptionResponse);
    return static_cast<const AddApplicationCloudWatchLoggingOptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisAnalyticsV2 AddApplicationCloudWatchLoggingOption \a response.
 */
void AddApplicationCloudWatchLoggingOptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddApplicationCloudWatchLoggingOptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationCloudWatchLoggingOptionResponsePrivate
 * \brief The AddApplicationCloudWatchLoggingOptionResponsePrivate class provides private implementation for AddApplicationCloudWatchLoggingOptionResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a AddApplicationCloudWatchLoggingOptionResponsePrivate object with public implementation \a q.
 */
AddApplicationCloudWatchLoggingOptionResponsePrivate::AddApplicationCloudWatchLoggingOptionResponsePrivate(
    AddApplicationCloudWatchLoggingOptionResponse * const q) : KinesisAnalyticsV2ResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalyticsV2 AddApplicationCloudWatchLoggingOption response element from \a xml.
 */
void AddApplicationCloudWatchLoggingOptionResponsePrivate::parseAddApplicationCloudWatchLoggingOptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationCloudWatchLoggingOptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalyticsV2
} // namespace QtAws

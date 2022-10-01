// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addapplicationcloudwatchloggingoptionresponse.h"
#include "addapplicationcloudwatchloggingoptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationCloudWatchLoggingOptionResponse
 * \brief The AddApplicationCloudWatchLoggingOptionResponse class provides an interace for KinesisAnalytics AddApplicationCloudWatchLoggingOption responses.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *  <fullname>Amazon Kinesis Analytics</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p <note>
 * 
 *  This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 *  Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 *  href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 * 
 *  Documentation</a>> </note>
 * 
 *  This is the <i>Amazon Kinesis Analytics v1 API Reference</i>. The Amazon Kinesis Analytics Developer Guide provides
 *  additional information.
 *
 * \sa KinesisAnalyticsClient::addApplicationCloudWatchLoggingOption
 */

/*!
 * Constructs a AddApplicationCloudWatchLoggingOptionResponse object for \a reply to \a request, with parent \a parent.
 */
AddApplicationCloudWatchLoggingOptionResponse::AddApplicationCloudWatchLoggingOptionResponse(
        const AddApplicationCloudWatchLoggingOptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new AddApplicationCloudWatchLoggingOptionResponsePrivate(this), parent)
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
 * Parses a successful KinesisAnalytics AddApplicationCloudWatchLoggingOption \a response.
 */
void AddApplicationCloudWatchLoggingOptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddApplicationCloudWatchLoggingOptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationCloudWatchLoggingOptionResponsePrivate
 * \brief The AddApplicationCloudWatchLoggingOptionResponsePrivate class provides private implementation for AddApplicationCloudWatchLoggingOptionResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a AddApplicationCloudWatchLoggingOptionResponsePrivate object with public implementation \a q.
 */
AddApplicationCloudWatchLoggingOptionResponsePrivate::AddApplicationCloudWatchLoggingOptionResponsePrivate(
    AddApplicationCloudWatchLoggingOptionResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a KinesisAnalytics AddApplicationCloudWatchLoggingOption response element from \a xml.
 */
void AddApplicationCloudWatchLoggingOptionResponsePrivate::parseAddApplicationCloudWatchLoggingOptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationCloudWatchLoggingOptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws

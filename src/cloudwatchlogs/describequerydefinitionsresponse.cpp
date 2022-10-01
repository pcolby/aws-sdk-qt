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

#include "describequerydefinitionsresponse.h"
#include "describequerydefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/*!
 * \class QtAws::CloudWatchLogs::DescribeQueryDefinitionsResponse
 * \brief The DescribeQueryDefinitionsResponse class provides an interace for CloudWatchLogs DescribeQueryDefinitions responses.
 *
 * \inmodule QtAwsCloudWatchLogs
 *
 *  You can use Amazon CloudWatch Logs to monitor, store, and access your log files from EC2 instances, CloudTrail, and
 *  other sources. You can then retrieve the associated log data from CloudWatch Logs using the CloudWatch console,
 *  CloudWatch Logs commands in the Amazon Web Services CLI, CloudWatch Logs API, or CloudWatch Logs
 * 
 *  SDK>
 * 
 *  You can use CloudWatch Logs
 * 
 *  to> <ul> <li>
 * 
 *  <b>Monitor logs from EC2 instances in real-time</b>: You can use CloudWatch Logs to monitor applications and systems
 *  using log data. For example, CloudWatch Logs can track the number of errors that occur in your application logs and send
 *  you a notification whenever the rate of errors exceeds a threshold that you specify. CloudWatch Logs uses your log data
 *  for monitoring so no code changes are required. For example, you can monitor application logs for specific literal terms
 *  (such as "NullReferenceException") or count the number of occurrences of a literal term at a particular position in log
 *  data (such as "404" status codes in an Apache access log). When the term you are searching for is found, CloudWatch Logs
 *  reports the data to a CloudWatch metric that you
 * 
 *  specify> </li> <li>
 * 
 *  <b>Monitor CloudTrail logged events</b>: You can create alarms in CloudWatch and receive notifications of particular API
 *  activity as captured by CloudTrail. You can use the notification to perform
 * 
 *  troubleshooting> </li> <li>
 * 
 *  <b>Archive log data</b>: You can use CloudWatch Logs to store your log data in highly durable storage. You can change
 *  the log retention setting so that any log events older than this setting are automatically deleted. The CloudWatch Logs
 *  agent makes it easy to quickly send both rotated and non-rotated log data off of a host and into the log service. You
 *  can then access the raw log data when you need
 *
 * \sa CloudWatchLogsClient::describeQueryDefinitions
 */

/*!
 * Constructs a DescribeQueryDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeQueryDefinitionsResponse::DescribeQueryDefinitionsResponse(
        const DescribeQueryDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new DescribeQueryDefinitionsResponsePrivate(this), parent)
{
    setRequest(new DescribeQueryDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeQueryDefinitionsRequest * DescribeQueryDefinitionsResponse::request() const
{
    Q_D(const DescribeQueryDefinitionsResponse);
    return static_cast<const DescribeQueryDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchLogs DescribeQueryDefinitions \a response.
 */
void DescribeQueryDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeQueryDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchLogs::DescribeQueryDefinitionsResponsePrivate
 * \brief The DescribeQueryDefinitionsResponsePrivate class provides private implementation for DescribeQueryDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchLogs
 */

/*!
 * Constructs a DescribeQueryDefinitionsResponsePrivate object with public implementation \a q.
 */
DescribeQueryDefinitionsResponsePrivate::DescribeQueryDefinitionsResponsePrivate(
    DescribeQueryDefinitionsResponse * const q) : CloudWatchLogsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchLogs DescribeQueryDefinitions response element from \a xml.
 */
void DescribeQueryDefinitionsResponsePrivate::parseDescribeQueryDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeQueryDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatchLogs
} // namespace QtAws

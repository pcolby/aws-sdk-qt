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

#include "deletesubscriptionfilterresponse.h"
#include "deletesubscriptionfilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/*!
 * \class QtAws::CloudWatchLogs::DeleteSubscriptionFilterResponse
 * \brief The DeleteSubscriptionFilterResponse class provides an interace for CloudWatchLogs DeleteSubscriptionFilter responses.
 *
 * \inmodule QtAwsCloudWatchLogs
 *
 *  You can use Amazon CloudWatch Logs to monitor, store, and access your log files from Amazon EC2 instances, AWS
 *  CloudTrail, or other sources. You can then retrieve the associated log data from CloudWatch Logs using the CloudWatch
 *  console, CloudWatch Logs commands in the AWS CLI, CloudWatch Logs API, or CloudWatch Logs
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
 *  for monitoring; so, no code changes are required. For example, you can monitor application logs for specific literal
 *  terms (such as "NullReferenceException") or count the number of occurrences of a literal term at a particular position
 *  in log data (such as "404" status codes in an Apache access log). When the term you are searching for is found,
 *  CloudWatch Logs reports the data to a CloudWatch metric that you
 * 
 *  specify> </li> <li>
 * 
 *  <b>Monitor AWS CloudTrail logged events</b>: You can create alarms in CloudWatch and receive notifications of particular
 *  API activity as captured by CloudTrail and use the notification to perform
 * 
 *  troubleshooting> </li> <li>
 * 
 *  <b>Archive log data</b>: You can use CloudWatch Logs to store your log data in highly durable storage. You can change
 *  the log retention setting so that any log events older than this setting are automatically deleted. The CloudWatch Logs
 *  agent makes it easy to quickly send both rotated and non-rotated log data off of a host and into the log service. You
 *  can then access the raw log data when you need
 *
 * \sa CloudWatchLogsClient::deleteSubscriptionFilter
 */

/*!
 * Constructs a DeleteSubscriptionFilterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSubscriptionFilterResponse::DeleteSubscriptionFilterResponse(
        const DeleteSubscriptionFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new DeleteSubscriptionFilterResponsePrivate(this), parent)
{
    setRequest(new DeleteSubscriptionFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSubscriptionFilterRequest * DeleteSubscriptionFilterResponse::request() const
{
    Q_D(const DeleteSubscriptionFilterResponse);
    return static_cast<const DeleteSubscriptionFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchLogs DeleteSubscriptionFilter \a response.
 */
void DeleteSubscriptionFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSubscriptionFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchLogs::DeleteSubscriptionFilterResponsePrivate
 * \brief The DeleteSubscriptionFilterResponsePrivate class provides private implementation for DeleteSubscriptionFilterResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchLogs
 */

/*!
 * Constructs a DeleteSubscriptionFilterResponsePrivate object with public implementation \a q.
 */
DeleteSubscriptionFilterResponsePrivate::DeleteSubscriptionFilterResponsePrivate(
    DeleteSubscriptionFilterResponse * const q) : CloudWatchLogsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchLogs DeleteSubscriptionFilter response element from \a xml.
 */
void DeleteSubscriptionFilterResponsePrivate::parseDeleteSubscriptionFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSubscriptionFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatchLogs
} // namespace QtAws

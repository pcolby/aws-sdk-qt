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

#include "deleteretentionpolicyresponse.h"
#include "deleteretentionpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/*!
 * \class QtAws::CloudWatchLogs::DeleteRetentionPolicyResponse
 * \brief The DeleteRetentionPolicyResponse class provides an interace for CloudWatchLogs DeleteRetentionPolicy responses.
 *
 * \inmodule QtAwsCloudWatchLogs
 *
 *  You can use Amazon CloudWatch Logs to monitor, store, and access your log files from EC2 instances, AWS CloudTrail, and
 *  other sources. You can then retrieve the associated log data from CloudWatch Logs using the CloudWatch console,
 *  CloudWatch Logs commands in the AWS CLI, CloudWatch Logs API, or CloudWatch Logs
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
 *  <b>Monitor AWS CloudTrail logged events</b>: You can create alarms in CloudWatch and receive notifications of particular
 *  API activity as captured by CloudTrail. You can use the notification to perform
 * 
 *  troubleshooting> </li> <li>
 * 
 *  <b>Archive log data</b>: You can use CloudWatch Logs to store your log data in highly durable storage. You can change
 *  the log retention setting so that any log events older than this setting are automatically deleted. The CloudWatch Logs
 *  agent makes it easy to quickly send both rotated and non-rotated log data off of a host and into the log service. You
 *  can then access the raw log data when you need
 *
 * \sa CloudWatchLogsClient::deleteRetentionPolicy
 */

/*!
 * Constructs a DeleteRetentionPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRetentionPolicyResponse::DeleteRetentionPolicyResponse(
        const DeleteRetentionPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new DeleteRetentionPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteRetentionPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRetentionPolicyRequest * DeleteRetentionPolicyResponse::request() const
{
    Q_D(const DeleteRetentionPolicyResponse);
    return static_cast<const DeleteRetentionPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchLogs DeleteRetentionPolicy \a response.
 */
void DeleteRetentionPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRetentionPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchLogs::DeleteRetentionPolicyResponsePrivate
 * \brief The DeleteRetentionPolicyResponsePrivate class provides private implementation for DeleteRetentionPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchLogs
 */

/*!
 * Constructs a DeleteRetentionPolicyResponsePrivate object with public implementation \a q.
 */
DeleteRetentionPolicyResponsePrivate::DeleteRetentionPolicyResponsePrivate(
    DeleteRetentionPolicyResponse * const q) : CloudWatchLogsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchLogs DeleteRetentionPolicy response element from \a xml.
 */
void DeleteRetentionPolicyResponsePrivate::parseDeleteRetentionPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRetentionPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatchLogs
} // namespace QtAws

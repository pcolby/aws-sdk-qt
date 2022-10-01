// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagloggrouprequest.h"
#include "untagloggrouprequest_p.h"
#include "untagloggroupresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/*!
 * \class QtAws::CloudWatchLogs::UntagLogGroupRequest
 * \brief The UntagLogGroupRequest class provides an interface for CloudWatchLogs UntagLogGroup requests.
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
 * \sa CloudWatchLogsClient::untagLogGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UntagLogGroupRequest::UntagLogGroupRequest(const UntagLogGroupRequest &other)
    : CloudWatchLogsRequest(new UntagLogGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagLogGroupRequest object.
 */
UntagLogGroupRequest::UntagLogGroupRequest()
    : CloudWatchLogsRequest(new UntagLogGroupRequestPrivate(CloudWatchLogsRequest::UntagLogGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UntagLogGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagLogGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagLogGroupRequest::response(QNetworkReply * const reply) const
{
    return new UntagLogGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatchLogs::UntagLogGroupRequestPrivate
 * \brief The UntagLogGroupRequestPrivate class provides private implementation for UntagLogGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatchLogs
 */

/*!
 * Constructs a UntagLogGroupRequestPrivate object for CloudWatchLogs \a action,
 * with public implementation \a q.
 */
UntagLogGroupRequestPrivate::UntagLogGroupRequestPrivate(
    const CloudWatchLogsRequest::Action action, UntagLogGroupRequest * const q)
    : CloudWatchLogsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagLogGroupRequest
 * class' copy constructor.
 */
UntagLogGroupRequestPrivate::UntagLogGroupRequestPrivate(
    const UntagLogGroupRequestPrivate &other, UntagLogGroupRequest * const q)
    : CloudWatchLogsRequestPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws

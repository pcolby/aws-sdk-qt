// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putdestinationrequest.h"
#include "putdestinationrequest_p.h"
#include "putdestinationresponse.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/*!
 * \class QtAws::CloudWatchLogs::PutDestinationRequest
 * \brief The PutDestinationRequest class provides an interface for CloudWatchLogs PutDestination requests.
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
 * \sa CloudWatchLogsClient::putDestination
 */

/*!
 * Constructs a copy of \a other.
 */
PutDestinationRequest::PutDestinationRequest(const PutDestinationRequest &other)
    : CloudWatchLogsRequest(new PutDestinationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutDestinationRequest object.
 */
PutDestinationRequest::PutDestinationRequest()
    : CloudWatchLogsRequest(new PutDestinationRequestPrivate(CloudWatchLogsRequest::PutDestinationAction, this))
{

}

/*!
 * \reimp
 */
bool PutDestinationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutDestinationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutDestinationRequest::response(QNetworkReply * const reply) const
{
    return new PutDestinationResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatchLogs::PutDestinationRequestPrivate
 * \brief The PutDestinationRequestPrivate class provides private implementation for PutDestinationRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatchLogs
 */

/*!
 * Constructs a PutDestinationRequestPrivate object for CloudWatchLogs \a action,
 * with public implementation \a q.
 */
PutDestinationRequestPrivate::PutDestinationRequestPrivate(
    const CloudWatchLogsRequest::Action action, PutDestinationRequest * const q)
    : CloudWatchLogsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutDestinationRequest
 * class' copy constructor.
 */
PutDestinationRequestPrivate::PutDestinationRequestPrivate(
    const PutDestinationRequestPrivate &other, PutDestinationRequest * const q)
    : CloudWatchLogsRequestPrivate(other, q)
{

}

} // namespace CloudWatchLogs
} // namespace QtAws

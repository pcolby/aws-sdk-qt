// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmetricstreamrequest.h"
#include "getmetricstreamrequest_p.h"
#include "getmetricstreamresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::GetMetricStreamRequest
 * \brief The GetMetricStreamRequest class provides an interface for CloudWatch GetMetricStream requests.
 *
 * \inmodule QtAwsCloudWatch
 *
 *  Amazon CloudWatch monitors your Amazon Web Services (Amazon Web Services) resources and the applications you run on
 *  Amazon Web Services in real time. You can use CloudWatch to collect and track metrics, which are the variables you want
 *  to measure for your resources and
 * 
 *  applications>
 * 
 *  CloudWatch alarms send notifications or automatically change the resources you are monitoring based on rules that you
 *  define. For example, you can monitor the CPU usage and disk reads and writes of your Amazon EC2 instances. Then, use
 *  this data to determine whether you should launch additional instances to handle increased load. You can also use this
 *  data to stop under-used instances to save
 * 
 *  money>
 * 
 *  In addition to monitoring the built-in metrics that come with Amazon Web Services, you can monitor your own custom
 *  metrics. With CloudWatch, you gain system-wide visibility into resource utilization, application performance, and
 *  operational
 *
 * \sa CloudWatchClient::getMetricStream
 */

/*!
 * Constructs a copy of \a other.
 */
GetMetricStreamRequest::GetMetricStreamRequest(const GetMetricStreamRequest &other)
    : CloudWatchRequest(new GetMetricStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMetricStreamRequest object.
 */
GetMetricStreamRequest::GetMetricStreamRequest()
    : CloudWatchRequest(new GetMetricStreamRequestPrivate(CloudWatchRequest::GetMetricStreamAction, this))
{

}

/*!
 * \reimp
 */
bool GetMetricStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMetricStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMetricStreamRequest::response(QNetworkReply * const reply) const
{
    return new GetMetricStreamResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::GetMetricStreamRequestPrivate
 * \brief The GetMetricStreamRequestPrivate class provides private implementation for GetMetricStreamRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a GetMetricStreamRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
GetMetricStreamRequestPrivate::GetMetricStreamRequestPrivate(
    const CloudWatchRequest::Action action, GetMetricStreamRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMetricStreamRequest
 * class' copy constructor.
 */
GetMetricStreamRequestPrivate::GetMetricStreamRequestPrivate(
    const GetMetricStreamRequestPrivate &other, GetMetricStreamRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

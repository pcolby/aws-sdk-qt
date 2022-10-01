// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putmetricstreamrequest.h"
#include "putmetricstreamrequest_p.h"
#include "putmetricstreamresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::PutMetricStreamRequest
 * \brief The PutMetricStreamRequest class provides an interface for CloudWatch PutMetricStream requests.
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
 * \sa CloudWatchClient::putMetricStream
 */

/*!
 * Constructs a copy of \a other.
 */
PutMetricStreamRequest::PutMetricStreamRequest(const PutMetricStreamRequest &other)
    : CloudWatchRequest(new PutMetricStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutMetricStreamRequest object.
 */
PutMetricStreamRequest::PutMetricStreamRequest()
    : CloudWatchRequest(new PutMetricStreamRequestPrivate(CloudWatchRequest::PutMetricStreamAction, this))
{

}

/*!
 * \reimp
 */
bool PutMetricStreamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutMetricStreamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutMetricStreamRequest::response(QNetworkReply * const reply) const
{
    return new PutMetricStreamResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::PutMetricStreamRequestPrivate
 * \brief The PutMetricStreamRequestPrivate class provides private implementation for PutMetricStreamRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a PutMetricStreamRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
PutMetricStreamRequestPrivate::PutMetricStreamRequestPrivate(
    const CloudWatchRequest::Action action, PutMetricStreamRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutMetricStreamRequest
 * class' copy constructor.
 */
PutMetricStreamRequestPrivate::PutMetricStreamRequestPrivate(
    const PutMetricStreamRequestPrivate &other, PutMetricStreamRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

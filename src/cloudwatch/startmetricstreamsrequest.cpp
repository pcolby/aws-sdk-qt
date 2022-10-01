// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startmetricstreamsrequest.h"
#include "startmetricstreamsrequest_p.h"
#include "startmetricstreamsresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::StartMetricStreamsRequest
 * \brief The StartMetricStreamsRequest class provides an interface for CloudWatch StartMetricStreams requests.
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
 * \sa CloudWatchClient::startMetricStreams
 */

/*!
 * Constructs a copy of \a other.
 */
StartMetricStreamsRequest::StartMetricStreamsRequest(const StartMetricStreamsRequest &other)
    : CloudWatchRequest(new StartMetricStreamsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartMetricStreamsRequest object.
 */
StartMetricStreamsRequest::StartMetricStreamsRequest()
    : CloudWatchRequest(new StartMetricStreamsRequestPrivate(CloudWatchRequest::StartMetricStreamsAction, this))
{

}

/*!
 * \reimp
 */
bool StartMetricStreamsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartMetricStreamsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartMetricStreamsRequest::response(QNetworkReply * const reply) const
{
    return new StartMetricStreamsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::StartMetricStreamsRequestPrivate
 * \brief The StartMetricStreamsRequestPrivate class provides private implementation for StartMetricStreamsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a StartMetricStreamsRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
StartMetricStreamsRequestPrivate::StartMetricStreamsRequestPrivate(
    const CloudWatchRequest::Action action, StartMetricStreamsRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartMetricStreamsRequest
 * class' copy constructor.
 */
StartMetricStreamsRequestPrivate::StartMetricStreamsRequestPrivate(
    const StartMetricStreamsRequestPrivate &other, StartMetricStreamsRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

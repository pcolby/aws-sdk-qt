// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmetricstatisticsrequest.h"
#include "getmetricstatisticsrequest_p.h"
#include "getmetricstatisticsresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::GetMetricStatisticsRequest
 * \brief The GetMetricStatisticsRequest class provides an interface for CloudWatch GetMetricStatistics requests.
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
 * \sa CloudWatchClient::getMetricStatistics
 */

/*!
 * Constructs a copy of \a other.
 */
GetMetricStatisticsRequest::GetMetricStatisticsRequest(const GetMetricStatisticsRequest &other)
    : CloudWatchRequest(new GetMetricStatisticsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMetricStatisticsRequest object.
 */
GetMetricStatisticsRequest::GetMetricStatisticsRequest()
    : CloudWatchRequest(new GetMetricStatisticsRequestPrivate(CloudWatchRequest::GetMetricStatisticsAction, this))
{

}

/*!
 * \reimp
 */
bool GetMetricStatisticsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMetricStatisticsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMetricStatisticsRequest::response(QNetworkReply * const reply) const
{
    return new GetMetricStatisticsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::GetMetricStatisticsRequestPrivate
 * \brief The GetMetricStatisticsRequestPrivate class provides private implementation for GetMetricStatisticsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a GetMetricStatisticsRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
GetMetricStatisticsRequestPrivate::GetMetricStatisticsRequestPrivate(
    const CloudWatchRequest::Action action, GetMetricStatisticsRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMetricStatisticsRequest
 * class' copy constructor.
 */
GetMetricStatisticsRequestPrivate::GetMetricStatisticsRequestPrivate(
    const GetMetricStatisticsRequestPrivate &other, GetMetricStatisticsRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

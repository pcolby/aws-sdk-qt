// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describealarmsformetricrequest.h"
#include "describealarmsformetricrequest_p.h"
#include "describealarmsformetricresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::DescribeAlarmsForMetricRequest
 * \brief The DescribeAlarmsForMetricRequest class provides an interface for CloudWatch DescribeAlarmsForMetric requests.
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
 * \sa CloudWatchClient::describeAlarmsForMetric
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAlarmsForMetricRequest::DescribeAlarmsForMetricRequest(const DescribeAlarmsForMetricRequest &other)
    : CloudWatchRequest(new DescribeAlarmsForMetricRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAlarmsForMetricRequest object.
 */
DescribeAlarmsForMetricRequest::DescribeAlarmsForMetricRequest()
    : CloudWatchRequest(new DescribeAlarmsForMetricRequestPrivate(CloudWatchRequest::DescribeAlarmsForMetricAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAlarmsForMetricRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAlarmsForMetricResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAlarmsForMetricRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAlarmsForMetricResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::DescribeAlarmsForMetricRequestPrivate
 * \brief The DescribeAlarmsForMetricRequestPrivate class provides private implementation for DescribeAlarmsForMetricRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a DescribeAlarmsForMetricRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
DescribeAlarmsForMetricRequestPrivate::DescribeAlarmsForMetricRequestPrivate(
    const CloudWatchRequest::Action action, DescribeAlarmsForMetricRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAlarmsForMetricRequest
 * class' copy constructor.
 */
DescribeAlarmsForMetricRequestPrivate::DescribeAlarmsForMetricRequestPrivate(
    const DescribeAlarmsForMetricRequestPrivate &other, DescribeAlarmsForMetricRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

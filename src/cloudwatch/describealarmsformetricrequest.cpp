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
 *  Amazon CloudWatch monitors your Amazon Web Services (AWS) resources and the applications you run on AWS in real time.
 *  You can use CloudWatch to collect and track metrics, which are the variables you want to measure for your resources and
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
 *  In addition to monitoring the built-in metrics that come with AWS, you can monitor your own custom metrics. With
 *  CloudWatch, you gain system-wide visibility into resource utilization, application performance, and operational
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

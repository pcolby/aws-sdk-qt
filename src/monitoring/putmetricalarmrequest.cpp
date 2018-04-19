/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putmetricalarmrequest.h"
#include "putmetricalarmrequest_p.h"
#include "putmetricalarmresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::PutMetricAlarmRequest
 * \brief The PutMetricAlarmRequest class provides an interface for CloudWatch PutMetricAlarm requests.
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
 * \sa CloudWatchClient::putMetricAlarm
 */

/*!
 * Constructs a copy of \a other.
 */
PutMetricAlarmRequest::PutMetricAlarmRequest(const PutMetricAlarmRequest &other)
    : CloudWatchRequest(new PutMetricAlarmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutMetricAlarmRequest object.
 */
PutMetricAlarmRequest::PutMetricAlarmRequest()
    : CloudWatchRequest(new PutMetricAlarmRequestPrivate(CloudWatchRequest::PutMetricAlarmAction, this))
{

}

/*!
 * \reimp
 */
bool PutMetricAlarmRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutMetricAlarmResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutMetricAlarmRequest::response(QNetworkReply * const reply) const
{
    return new PutMetricAlarmResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::PutMetricAlarmRequestPrivate
 * \brief The PutMetricAlarmRequestPrivate class provides private implementation for PutMetricAlarmRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a PutMetricAlarmRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
PutMetricAlarmRequestPrivate::PutMetricAlarmRequestPrivate(
    const CloudWatchRequest::Action action, PutMetricAlarmRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutMetricAlarmRequest
 * class' copy constructor.
 */
PutMetricAlarmRequestPrivate::PutMetricAlarmRequestPrivate(
    const PutMetricAlarmRequestPrivate &other, PutMetricAlarmRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

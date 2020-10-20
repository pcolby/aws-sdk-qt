/*
    Copyright 2013-2020 Paul Colby

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

#include "disablealarmactionsrequest.h"
#include "disablealarmactionsrequest_p.h"
#include "disablealarmactionsresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::DisableAlarmActionsRequest
 * \brief The DisableAlarmActionsRequest class provides an interface for CloudWatch DisableAlarmActions requests.
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
 * \sa CloudWatchClient::disableAlarmActions
 */

/*!
 * Constructs a copy of \a other.
 */
DisableAlarmActionsRequest::DisableAlarmActionsRequest(const DisableAlarmActionsRequest &other)
    : CloudWatchRequest(new DisableAlarmActionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableAlarmActionsRequest object.
 */
DisableAlarmActionsRequest::DisableAlarmActionsRequest()
    : CloudWatchRequest(new DisableAlarmActionsRequestPrivate(CloudWatchRequest::DisableAlarmActionsAction, this))
{

}

/*!
 * \reimp
 */
bool DisableAlarmActionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableAlarmActionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableAlarmActionsRequest::response(QNetworkReply * const reply) const
{
    return new DisableAlarmActionsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::DisableAlarmActionsRequestPrivate
 * \brief The DisableAlarmActionsRequestPrivate class provides private implementation for DisableAlarmActionsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a DisableAlarmActionsRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
DisableAlarmActionsRequestPrivate::DisableAlarmActionsRequestPrivate(
    const CloudWatchRequest::Action action, DisableAlarmActionsRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableAlarmActionsRequest
 * class' copy constructor.
 */
DisableAlarmActionsRequestPrivate::DisableAlarmActionsRequestPrivate(
    const DisableAlarmActionsRequestPrivate &other, DisableAlarmActionsRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

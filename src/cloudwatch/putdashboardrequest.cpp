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

#include "putdashboardrequest.h"
#include "putdashboardrequest_p.h"
#include "putdashboardresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::PutDashboardRequest
 * \brief The PutDashboardRequest class provides an interface for CloudWatch PutDashboard requests.
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
 * \sa CloudWatchClient::putDashboard
 */

/*!
 * Constructs a copy of \a other.
 */
PutDashboardRequest::PutDashboardRequest(const PutDashboardRequest &other)
    : CloudWatchRequest(new PutDashboardRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutDashboardRequest object.
 */
PutDashboardRequest::PutDashboardRequest()
    : CloudWatchRequest(new PutDashboardRequestPrivate(CloudWatchRequest::PutDashboardAction, this))
{

}

/*!
 * \reimp
 */
bool PutDashboardRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutDashboardResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutDashboardRequest::response(QNetworkReply * const reply) const
{
    return new PutDashboardResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::PutDashboardRequestPrivate
 * \brief The PutDashboardRequestPrivate class provides private implementation for PutDashboardRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a PutDashboardRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
PutDashboardRequestPrivate::PutDashboardRequestPrivate(
    const CloudWatchRequest::Action action, PutDashboardRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutDashboardRequest
 * class' copy constructor.
 */
PutDashboardRequestPrivate::PutDashboardRequestPrivate(
    const PutDashboardRequestPrivate &other, PutDashboardRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

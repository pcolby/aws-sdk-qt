// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdashboardrequest.h"
#include "getdashboardrequest_p.h"
#include "getdashboardresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::GetDashboardRequest
 * \brief The GetDashboardRequest class provides an interface for CloudWatch GetDashboard requests.
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
 * \sa CloudWatchClient::getDashboard
 */

/*!
 * Constructs a copy of \a other.
 */
GetDashboardRequest::GetDashboardRequest(const GetDashboardRequest &other)
    : CloudWatchRequest(new GetDashboardRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDashboardRequest object.
 */
GetDashboardRequest::GetDashboardRequest()
    : CloudWatchRequest(new GetDashboardRequestPrivate(CloudWatchRequest::GetDashboardAction, this))
{

}

/*!
 * \reimp
 */
bool GetDashboardRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDashboardResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDashboardRequest::response(QNetworkReply * const reply) const
{
    return new GetDashboardResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::GetDashboardRequestPrivate
 * \brief The GetDashboardRequestPrivate class provides private implementation for GetDashboardRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a GetDashboardRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
GetDashboardRequestPrivate::GetDashboardRequestPrivate(
    const CloudWatchRequest::Action action, GetDashboardRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDashboardRequest
 * class' copy constructor.
 */
GetDashboardRequestPrivate::GetDashboardRequestPrivate(
    const GetDashboardRequestPrivate &other, GetDashboardRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

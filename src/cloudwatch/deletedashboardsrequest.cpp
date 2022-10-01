// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedashboardsrequest.h"
#include "deletedashboardsrequest_p.h"
#include "deletedashboardsresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::DeleteDashboardsRequest
 * \brief The DeleteDashboardsRequest class provides an interface for CloudWatch DeleteDashboards requests.
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
 * \sa CloudWatchClient::deleteDashboards
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDashboardsRequest::DeleteDashboardsRequest(const DeleteDashboardsRequest &other)
    : CloudWatchRequest(new DeleteDashboardsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDashboardsRequest object.
 */
DeleteDashboardsRequest::DeleteDashboardsRequest()
    : CloudWatchRequest(new DeleteDashboardsRequestPrivate(CloudWatchRequest::DeleteDashboardsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDashboardsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDashboardsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDashboardsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDashboardsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::DeleteDashboardsRequestPrivate
 * \brief The DeleteDashboardsRequestPrivate class provides private implementation for DeleteDashboardsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a DeleteDashboardsRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
DeleteDashboardsRequestPrivate::DeleteDashboardsRequestPrivate(
    const CloudWatchRequest::Action action, DeleteDashboardsRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDashboardsRequest
 * class' copy constructor.
 */
DeleteDashboardsRequestPrivate::DeleteDashboardsRequestPrivate(
    const DeleteDashboardsRequestPrivate &other, DeleteDashboardsRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enablealarmactionsrequest.h"
#include "enablealarmactionsrequest_p.h"
#include "enablealarmactionsresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::EnableAlarmActionsRequest
 * \brief The EnableAlarmActionsRequest class provides an interface for CloudWatch EnableAlarmActions requests.
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
 * \sa CloudWatchClient::enableAlarmActions
 */

/*!
 * Constructs a copy of \a other.
 */
EnableAlarmActionsRequest::EnableAlarmActionsRequest(const EnableAlarmActionsRequest &other)
    : CloudWatchRequest(new EnableAlarmActionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableAlarmActionsRequest object.
 */
EnableAlarmActionsRequest::EnableAlarmActionsRequest()
    : CloudWatchRequest(new EnableAlarmActionsRequestPrivate(CloudWatchRequest::EnableAlarmActionsAction, this))
{

}

/*!
 * \reimp
 */
bool EnableAlarmActionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableAlarmActionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableAlarmActionsRequest::response(QNetworkReply * const reply) const
{
    return new EnableAlarmActionsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::EnableAlarmActionsRequestPrivate
 * \brief The EnableAlarmActionsRequestPrivate class provides private implementation for EnableAlarmActionsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a EnableAlarmActionsRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
EnableAlarmActionsRequestPrivate::EnableAlarmActionsRequestPrivate(
    const CloudWatchRequest::Action action, EnableAlarmActionsRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableAlarmActionsRequest
 * class' copy constructor.
 */
EnableAlarmActionsRequestPrivate::EnableAlarmActionsRequestPrivate(
    const EnableAlarmActionsRequestPrivate &other, EnableAlarmActionsRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

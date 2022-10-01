// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setalarmstaterequest.h"
#include "setalarmstaterequest_p.h"
#include "setalarmstateresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::SetAlarmStateRequest
 * \brief The SetAlarmStateRequest class provides an interface for CloudWatch SetAlarmState requests.
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
 * \sa CloudWatchClient::setAlarmState
 */

/*!
 * Constructs a copy of \a other.
 */
SetAlarmStateRequest::SetAlarmStateRequest(const SetAlarmStateRequest &other)
    : CloudWatchRequest(new SetAlarmStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetAlarmStateRequest object.
 */
SetAlarmStateRequest::SetAlarmStateRequest()
    : CloudWatchRequest(new SetAlarmStateRequestPrivate(CloudWatchRequest::SetAlarmStateAction, this))
{

}

/*!
 * \reimp
 */
bool SetAlarmStateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetAlarmStateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetAlarmStateRequest::response(QNetworkReply * const reply) const
{
    return new SetAlarmStateResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::SetAlarmStateRequestPrivate
 * \brief The SetAlarmStateRequestPrivate class provides private implementation for SetAlarmStateRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a SetAlarmStateRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
SetAlarmStateRequestPrivate::SetAlarmStateRequestPrivate(
    const CloudWatchRequest::Action action, SetAlarmStateRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetAlarmStateRequest
 * class' copy constructor.
 */
SetAlarmStateRequestPrivate::SetAlarmStateRequestPrivate(
    const SetAlarmStateRequestPrivate &other, SetAlarmStateRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putcompositealarmrequest.h"
#include "putcompositealarmrequest_p.h"
#include "putcompositealarmresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::PutCompositeAlarmRequest
 * \brief The PutCompositeAlarmRequest class provides an interface for CloudWatch PutCompositeAlarm requests.
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
 * \sa CloudWatchClient::putCompositeAlarm
 */

/*!
 * Constructs a copy of \a other.
 */
PutCompositeAlarmRequest::PutCompositeAlarmRequest(const PutCompositeAlarmRequest &other)
    : CloudWatchRequest(new PutCompositeAlarmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutCompositeAlarmRequest object.
 */
PutCompositeAlarmRequest::PutCompositeAlarmRequest()
    : CloudWatchRequest(new PutCompositeAlarmRequestPrivate(CloudWatchRequest::PutCompositeAlarmAction, this))
{

}

/*!
 * \reimp
 */
bool PutCompositeAlarmRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutCompositeAlarmResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutCompositeAlarmRequest::response(QNetworkReply * const reply) const
{
    return new PutCompositeAlarmResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::PutCompositeAlarmRequestPrivate
 * \brief The PutCompositeAlarmRequestPrivate class provides private implementation for PutCompositeAlarmRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a PutCompositeAlarmRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
PutCompositeAlarmRequestPrivate::PutCompositeAlarmRequestPrivate(
    const CloudWatchRequest::Action action, PutCompositeAlarmRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutCompositeAlarmRequest
 * class' copy constructor.
 */
PutCompositeAlarmRequestPrivate::PutCompositeAlarmRequestPrivate(
    const PutCompositeAlarmRequestPrivate &other, PutCompositeAlarmRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

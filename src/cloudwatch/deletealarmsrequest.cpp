// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletealarmsrequest.h"
#include "deletealarmsrequest_p.h"
#include "deletealarmsresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::DeleteAlarmsRequest
 * \brief The DeleteAlarmsRequest class provides an interface for CloudWatch DeleteAlarms requests.
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
 * \sa CloudWatchClient::deleteAlarms
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAlarmsRequest::DeleteAlarmsRequest(const DeleteAlarmsRequest &other)
    : CloudWatchRequest(new DeleteAlarmsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAlarmsRequest object.
 */
DeleteAlarmsRequest::DeleteAlarmsRequest()
    : CloudWatchRequest(new DeleteAlarmsRequestPrivate(CloudWatchRequest::DeleteAlarmsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAlarmsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAlarmsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAlarmsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAlarmsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::DeleteAlarmsRequestPrivate
 * \brief The DeleteAlarmsRequestPrivate class provides private implementation for DeleteAlarmsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a DeleteAlarmsRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
DeleteAlarmsRequestPrivate::DeleteAlarmsRequestPrivate(
    const CloudWatchRequest::Action action, DeleteAlarmsRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAlarmsRequest
 * class' copy constructor.
 */
DeleteAlarmsRequestPrivate::DeleteAlarmsRequestPrivate(
    const DeleteAlarmsRequestPrivate &other, DeleteAlarmsRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describealarmsrequest.h"
#include "describealarmsrequest_p.h"
#include "describealarmsresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::DescribeAlarmsRequest
 * \brief The DescribeAlarmsRequest class provides an interface for CloudWatch DescribeAlarms requests.
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
 * \sa CloudWatchClient::describeAlarms
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAlarmsRequest::DescribeAlarmsRequest(const DescribeAlarmsRequest &other)
    : CloudWatchRequest(new DescribeAlarmsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAlarmsRequest object.
 */
DescribeAlarmsRequest::DescribeAlarmsRequest()
    : CloudWatchRequest(new DescribeAlarmsRequestPrivate(CloudWatchRequest::DescribeAlarmsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAlarmsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAlarmsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAlarmsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAlarmsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::DescribeAlarmsRequestPrivate
 * \brief The DescribeAlarmsRequestPrivate class provides private implementation for DescribeAlarmsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a DescribeAlarmsRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
DescribeAlarmsRequestPrivate::DescribeAlarmsRequestPrivate(
    const CloudWatchRequest::Action action, DescribeAlarmsRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAlarmsRequest
 * class' copy constructor.
 */
DescribeAlarmsRequestPrivate::DescribeAlarmsRequestPrivate(
    const DescribeAlarmsRequestPrivate &other, DescribeAlarmsRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

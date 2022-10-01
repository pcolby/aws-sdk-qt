// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmetricdatarequest.h"
#include "getmetricdatarequest_p.h"
#include "getmetricdataresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::GetMetricDataRequest
 * \brief The GetMetricDataRequest class provides an interface for CloudWatch GetMetricData requests.
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
 * \sa CloudWatchClient::getMetricData
 */

/*!
 * Constructs a copy of \a other.
 */
GetMetricDataRequest::GetMetricDataRequest(const GetMetricDataRequest &other)
    : CloudWatchRequest(new GetMetricDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMetricDataRequest object.
 */
GetMetricDataRequest::GetMetricDataRequest()
    : CloudWatchRequest(new GetMetricDataRequestPrivate(CloudWatchRequest::GetMetricDataAction, this))
{

}

/*!
 * \reimp
 */
bool GetMetricDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMetricDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMetricDataRequest::response(QNetworkReply * const reply) const
{
    return new GetMetricDataResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::GetMetricDataRequestPrivate
 * \brief The GetMetricDataRequestPrivate class provides private implementation for GetMetricDataRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a GetMetricDataRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
GetMetricDataRequestPrivate::GetMetricDataRequestPrivate(
    const CloudWatchRequest::Action action, GetMetricDataRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMetricDataRequest
 * class' copy constructor.
 */
GetMetricDataRequestPrivate::GetMetricDataRequestPrivate(
    const GetMetricDataRequestPrivate &other, GetMetricDataRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

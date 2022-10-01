// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmetricstreamsrequest.h"
#include "listmetricstreamsrequest_p.h"
#include "listmetricstreamsresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::ListMetricStreamsRequest
 * \brief The ListMetricStreamsRequest class provides an interface for CloudWatch ListMetricStreams requests.
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
 * \sa CloudWatchClient::listMetricStreams
 */

/*!
 * Constructs a copy of \a other.
 */
ListMetricStreamsRequest::ListMetricStreamsRequest(const ListMetricStreamsRequest &other)
    : CloudWatchRequest(new ListMetricStreamsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMetricStreamsRequest object.
 */
ListMetricStreamsRequest::ListMetricStreamsRequest()
    : CloudWatchRequest(new ListMetricStreamsRequestPrivate(CloudWatchRequest::ListMetricStreamsAction, this))
{

}

/*!
 * \reimp
 */
bool ListMetricStreamsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMetricStreamsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMetricStreamsRequest::response(QNetworkReply * const reply) const
{
    return new ListMetricStreamsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::ListMetricStreamsRequestPrivate
 * \brief The ListMetricStreamsRequestPrivate class provides private implementation for ListMetricStreamsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a ListMetricStreamsRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
ListMetricStreamsRequestPrivate::ListMetricStreamsRequestPrivate(
    const CloudWatchRequest::Action action, ListMetricStreamsRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMetricStreamsRequest
 * class' copy constructor.
 */
ListMetricStreamsRequestPrivate::ListMetricStreamsRequestPrivate(
    const ListMetricStreamsRequestPrivate &other, ListMetricStreamsRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

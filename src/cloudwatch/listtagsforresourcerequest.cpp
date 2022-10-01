// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsforresourcerequest.h"
#include "listtagsforresourcerequest_p.h"
#include "listtagsforresourceresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::ListTagsForResourceRequest
 * \brief The ListTagsForResourceRequest class provides an interface for CloudWatch ListTagsForResource requests.
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
 * \sa CloudWatchClient::listTagsForResource
 */

/*!
 * Constructs a copy of \a other.
 */
ListTagsForResourceRequest::ListTagsForResourceRequest(const ListTagsForResourceRequest &other)
    : CloudWatchRequest(new ListTagsForResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTagsForResourceRequest object.
 */
ListTagsForResourceRequest::ListTagsForResourceRequest()
    : CloudWatchRequest(new ListTagsForResourceRequestPrivate(CloudWatchRequest::ListTagsForResourceAction, this))
{

}

/*!
 * \reimp
 */
bool ListTagsForResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTagsForResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsForResourceRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsForResourceResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::ListTagsForResourceRequestPrivate
 * \brief The ListTagsForResourceRequestPrivate class provides private implementation for ListTagsForResourceRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a ListTagsForResourceRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
ListTagsForResourceRequestPrivate::ListTagsForResourceRequestPrivate(
    const CloudWatchRequest::Action action, ListTagsForResourceRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTagsForResourceRequest
 * class' copy constructor.
 */
ListTagsForResourceRequestPrivate::ListTagsForResourceRequestPrivate(
    const ListTagsForResourceRequestPrivate &other, ListTagsForResourceRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

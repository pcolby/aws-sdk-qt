// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmanagedinsightrulesrequest.h"
#include "listmanagedinsightrulesrequest_p.h"
#include "listmanagedinsightrulesresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::ListManagedInsightRulesRequest
 * \brief The ListManagedInsightRulesRequest class provides an interface for CloudWatch ListManagedInsightRules requests.
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
 * \sa CloudWatchClient::listManagedInsightRules
 */

/*!
 * Constructs a copy of \a other.
 */
ListManagedInsightRulesRequest::ListManagedInsightRulesRequest(const ListManagedInsightRulesRequest &other)
    : CloudWatchRequest(new ListManagedInsightRulesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListManagedInsightRulesRequest object.
 */
ListManagedInsightRulesRequest::ListManagedInsightRulesRequest()
    : CloudWatchRequest(new ListManagedInsightRulesRequestPrivate(CloudWatchRequest::ListManagedInsightRulesAction, this))
{

}

/*!
 * \reimp
 */
bool ListManagedInsightRulesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListManagedInsightRulesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListManagedInsightRulesRequest::response(QNetworkReply * const reply) const
{
    return new ListManagedInsightRulesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::ListManagedInsightRulesRequestPrivate
 * \brief The ListManagedInsightRulesRequestPrivate class provides private implementation for ListManagedInsightRulesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a ListManagedInsightRulesRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
ListManagedInsightRulesRequestPrivate::ListManagedInsightRulesRequestPrivate(
    const CloudWatchRequest::Action action, ListManagedInsightRulesRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListManagedInsightRulesRequest
 * class' copy constructor.
 */
ListManagedInsightRulesRequestPrivate::ListManagedInsightRulesRequestPrivate(
    const ListManagedInsightRulesRequestPrivate &other, ListManagedInsightRulesRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

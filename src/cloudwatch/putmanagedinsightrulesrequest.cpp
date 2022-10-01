// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putmanagedinsightrulesrequest.h"
#include "putmanagedinsightrulesrequest_p.h"
#include "putmanagedinsightrulesresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::PutManagedInsightRulesRequest
 * \brief The PutManagedInsightRulesRequest class provides an interface for CloudWatch PutManagedInsightRules requests.
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
 * \sa CloudWatchClient::putManagedInsightRules
 */

/*!
 * Constructs a copy of \a other.
 */
PutManagedInsightRulesRequest::PutManagedInsightRulesRequest(const PutManagedInsightRulesRequest &other)
    : CloudWatchRequest(new PutManagedInsightRulesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutManagedInsightRulesRequest object.
 */
PutManagedInsightRulesRequest::PutManagedInsightRulesRequest()
    : CloudWatchRequest(new PutManagedInsightRulesRequestPrivate(CloudWatchRequest::PutManagedInsightRulesAction, this))
{

}

/*!
 * \reimp
 */
bool PutManagedInsightRulesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutManagedInsightRulesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutManagedInsightRulesRequest::response(QNetworkReply * const reply) const
{
    return new PutManagedInsightRulesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::PutManagedInsightRulesRequestPrivate
 * \brief The PutManagedInsightRulesRequestPrivate class provides private implementation for PutManagedInsightRulesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a PutManagedInsightRulesRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
PutManagedInsightRulesRequestPrivate::PutManagedInsightRulesRequestPrivate(
    const CloudWatchRequest::Action action, PutManagedInsightRulesRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutManagedInsightRulesRequest
 * class' copy constructor.
 */
PutManagedInsightRulesRequestPrivate::PutManagedInsightRulesRequestPrivate(
    const PutManagedInsightRulesRequestPrivate &other, PutManagedInsightRulesRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

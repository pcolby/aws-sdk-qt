// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinsightrulesrequest.h"
#include "describeinsightrulesrequest_p.h"
#include "describeinsightrulesresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::DescribeInsightRulesRequest
 * \brief The DescribeInsightRulesRequest class provides an interface for CloudWatch DescribeInsightRules requests.
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
 * \sa CloudWatchClient::describeInsightRules
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeInsightRulesRequest::DescribeInsightRulesRequest(const DescribeInsightRulesRequest &other)
    : CloudWatchRequest(new DescribeInsightRulesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeInsightRulesRequest object.
 */
DescribeInsightRulesRequest::DescribeInsightRulesRequest()
    : CloudWatchRequest(new DescribeInsightRulesRequestPrivate(CloudWatchRequest::DescribeInsightRulesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInsightRulesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeInsightRulesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInsightRulesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInsightRulesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::DescribeInsightRulesRequestPrivate
 * \brief The DescribeInsightRulesRequestPrivate class provides private implementation for DescribeInsightRulesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a DescribeInsightRulesRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
DescribeInsightRulesRequestPrivate::DescribeInsightRulesRequestPrivate(
    const CloudWatchRequest::Action action, DescribeInsightRulesRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeInsightRulesRequest
 * class' copy constructor.
 */
DescribeInsightRulesRequestPrivate::DescribeInsightRulesRequestPrivate(
    const DescribeInsightRulesRequestPrivate &other, DescribeInsightRulesRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

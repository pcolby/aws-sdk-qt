// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putinsightrulerequest.h"
#include "putinsightrulerequest_p.h"
#include "putinsightruleresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::PutInsightRuleRequest
 * \brief The PutInsightRuleRequest class provides an interface for CloudWatch PutInsightRule requests.
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
 * \sa CloudWatchClient::putInsightRule
 */

/*!
 * Constructs a copy of \a other.
 */
PutInsightRuleRequest::PutInsightRuleRequest(const PutInsightRuleRequest &other)
    : CloudWatchRequest(new PutInsightRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutInsightRuleRequest object.
 */
PutInsightRuleRequest::PutInsightRuleRequest()
    : CloudWatchRequest(new PutInsightRuleRequestPrivate(CloudWatchRequest::PutInsightRuleAction, this))
{

}

/*!
 * \reimp
 */
bool PutInsightRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutInsightRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutInsightRuleRequest::response(QNetworkReply * const reply) const
{
    return new PutInsightRuleResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::PutInsightRuleRequestPrivate
 * \brief The PutInsightRuleRequestPrivate class provides private implementation for PutInsightRuleRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a PutInsightRuleRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
PutInsightRuleRequestPrivate::PutInsightRuleRequestPrivate(
    const CloudWatchRequest::Action action, PutInsightRuleRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutInsightRuleRequest
 * class' copy constructor.
 */
PutInsightRuleRequestPrivate::PutInsightRuleRequestPrivate(
    const PutInsightRuleRequestPrivate &other, PutInsightRuleRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

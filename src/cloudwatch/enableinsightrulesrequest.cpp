/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "enableinsightrulesrequest.h"
#include "enableinsightrulesrequest_p.h"
#include "enableinsightrulesresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::EnableInsightRulesRequest
 * \brief The EnableInsightRulesRequest class provides an interface for CloudWatch EnableInsightRules requests.
 *
 * \inmodule QtAwsCloudWatch
 *
 *  Amazon CloudWatch monitors your Amazon Web Services (AWS) resources and the applications you run on AWS in real time.
 *  You can use CloudWatch to collect and track metrics, which are the variables you want to measure for your resources and
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
 *  In addition to monitoring the built-in metrics that come with AWS, you can monitor your own custom metrics. With
 *  CloudWatch, you gain system-wide visibility into resource utilization, application performance, and operational
 *
 * \sa CloudWatchClient::enableInsightRules
 */

/*!
 * Constructs a copy of \a other.
 */
EnableInsightRulesRequest::EnableInsightRulesRequest(const EnableInsightRulesRequest &other)
    : CloudWatchRequest(new EnableInsightRulesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableInsightRulesRequest object.
 */
EnableInsightRulesRequest::EnableInsightRulesRequest()
    : CloudWatchRequest(new EnableInsightRulesRequestPrivate(CloudWatchRequest::EnableInsightRulesAction, this))
{

}

/*!
 * \reimp
 */
bool EnableInsightRulesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableInsightRulesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableInsightRulesRequest::response(QNetworkReply * const reply) const
{
    return new EnableInsightRulesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::EnableInsightRulesRequestPrivate
 * \brief The EnableInsightRulesRequestPrivate class provides private implementation for EnableInsightRulesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a EnableInsightRulesRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
EnableInsightRulesRequestPrivate::EnableInsightRulesRequestPrivate(
    const CloudWatchRequest::Action action, EnableInsightRulesRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableInsightRulesRequest
 * class' copy constructor.
 */
EnableInsightRulesRequestPrivate::EnableInsightRulesRequestPrivate(
    const EnableInsightRulesRequestPrivate &other, EnableInsightRulesRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws

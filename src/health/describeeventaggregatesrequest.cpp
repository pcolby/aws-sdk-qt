/*
    Copyright 2013-2019 Paul Colby

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

#include "describeeventaggregatesrequest.h"
#include "describeeventaggregatesrequest_p.h"
#include "describeeventaggregatesresponse.h"
#include "healthrequest_p.h"

namespace QtAws {
namespace Health {

/*!
 * \class QtAws::Health::DescribeEventAggregatesRequest
 * \brief The DescribeEventAggregatesRequest class provides an interface for Health DescribeEventAggregates requests.
 *
 * \inmodule QtAwsHealth
 *
 *  <fullname>AWS Health</fullname>
 * 
 *  The AWS Health API provides programmatic access to the AWS Health information that is presented in the <a
 *  href="https://phd.aws.amazon.com/phd/home#/">AWS Personal Health Dashboard</a>. You can get information about events
 *  that affect your AWS
 * 
 *  resources> <ul> <li>
 * 
 *  <a>DescribeEvents</a>: Summary information about
 * 
 *  events> </li> <li>
 * 
 *  <a>DescribeEventDetails</a>: Detailed information about one or more
 * 
 *  events> </li> <li>
 * 
 *  <a>DescribeAffectedEntities</a>: Information about AWS resources that are affected by one or more
 * 
 *  events> </li> </ul>
 * 
 *  In addition, these operations provide information about event types and summary counts of events or affected
 * 
 *  entities> <ul> <li>
 * 
 *  <a>DescribeEventTypes</a>: Information about the kinds of events that AWS Health
 * 
 *  tracks> </li> <li>
 * 
 *  <a>DescribeEventAggregates</a>: A count of the number of events that meet specified
 * 
 *  criteria> </li> <li>
 * 
 *  <a>DescribeEntityAggregates</a>: A count of the number of affected entities that meet specified
 * 
 *  criteria> </li> </ul>
 * 
 *  The Health API requires a Business or Enterprise support plan from <a href="http://aws.amazon.com/premiumsupport/">AWS
 *  Support</a>. Calling the Health API from an account that does not have a Business or Enterprise support plan causes a
 *  <code>SubscriptionRequiredException</code>.
 * 
 *  </p
 * 
 *  For authentication of requests, AWS Health uses the <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing
 * 
 *  Process</a>>
 * 
 *  See the <a href="https://docs.aws.amazon.com/health/latest/ug/what-is-aws-health.html">AWS Health User Guide</a> for
 *  information about how to use the
 * 
 *  API>
 * 
 *  <b>Service Endpoint</b>
 * 
 *  </p
 * 
 *  The HTTP endpoint for the AWS Health API
 * 
 *  is> <ul> <li>
 * 
 *  https://health.us-east-1.amazonaws.com
 *
 * \sa HealthClient::describeEventAggregates
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEventAggregatesRequest::DescribeEventAggregatesRequest(const DescribeEventAggregatesRequest &other)
    : HealthRequest(new DescribeEventAggregatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEventAggregatesRequest object.
 */
DescribeEventAggregatesRequest::DescribeEventAggregatesRequest()
    : HealthRequest(new DescribeEventAggregatesRequestPrivate(HealthRequest::DescribeEventAggregatesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEventAggregatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEventAggregatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEventAggregatesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventAggregatesResponse(*this, reply);
}

/*!
 * \class QtAws::Health::DescribeEventAggregatesRequestPrivate
 * \brief The DescribeEventAggregatesRequestPrivate class provides private implementation for DescribeEventAggregatesRequest.
 * \internal
 *
 * \inmodule QtAwsHealth
 */

/*!
 * Constructs a DescribeEventAggregatesRequestPrivate object for Health \a action,
 * with public implementation \a q.
 */
DescribeEventAggregatesRequestPrivate::DescribeEventAggregatesRequestPrivate(
    const HealthRequest::Action action, DescribeEventAggregatesRequest * const q)
    : HealthRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventAggregatesRequest
 * class' copy constructor.
 */
DescribeEventAggregatesRequestPrivate::DescribeEventAggregatesRequestPrivate(
    const DescribeEventAggregatesRequestPrivate &other, DescribeEventAggregatesRequest * const q)
    : HealthRequestPrivate(other, q)
{

}

} // namespace Health
} // namespace QtAws

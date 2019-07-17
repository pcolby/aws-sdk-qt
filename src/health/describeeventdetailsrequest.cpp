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

#include "describeeventdetailsrequest.h"
#include "describeeventdetailsrequest_p.h"
#include "describeeventdetailsresponse.h"
#include "healthrequest_p.h"

namespace QtAws {
namespace Health {

/*!
 * \class QtAws::Health::DescribeEventDetailsRequest
 * \brief The DescribeEventDetailsRequest class provides an interface for Health DescribeEventDetails requests.
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
 *  href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing
 * 
 *  Process</a>>
 * 
 *  See the <a href="http://docs.aws.amazon.com/health/latest/ug/what-is-aws-health.html">AWS Health User Guide</a> for
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
 * \sa HealthClient::describeEventDetails
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEventDetailsRequest::DescribeEventDetailsRequest(const DescribeEventDetailsRequest &other)
    : HealthRequest(new DescribeEventDetailsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEventDetailsRequest object.
 */
DescribeEventDetailsRequest::DescribeEventDetailsRequest()
    : HealthRequest(new DescribeEventDetailsRequestPrivate(HealthRequest::DescribeEventDetailsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEventDetailsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEventDetailsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEventDetailsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventDetailsResponse(*this, reply);
}

/*!
 * \class QtAws::Health::DescribeEventDetailsRequestPrivate
 * \brief The DescribeEventDetailsRequestPrivate class provides private implementation for DescribeEventDetailsRequest.
 * \internal
 *
 * \inmodule QtAwsHealth
 */

/*!
 * Constructs a DescribeEventDetailsRequestPrivate object for Health \a action,
 * with public implementation \a q.
 */
DescribeEventDetailsRequestPrivate::DescribeEventDetailsRequestPrivate(
    const HealthRequest::Action action, DescribeEventDetailsRequest * const q)
    : HealthRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventDetailsRequest
 * class' copy constructor.
 */
DescribeEventDetailsRequestPrivate::DescribeEventDetailsRequestPrivate(
    const DescribeEventDetailsRequestPrivate &other, DescribeEventDetailsRequest * const q)
    : HealthRequestPrivate(other, q)
{

}

} // namespace Health
} // namespace QtAws

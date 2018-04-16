/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeeventdetailsrequest.h"
#include "describeeventdetailsrequest_p.h"
#include "describeeventdetailsresponse.h"
#include "healthrequest_p.h"

namespace QtAws {
namespace Health {

/*!
 * \class QtAws::Health::DescribeEventDetailsRequest
 *
 * \brief The DescribeEventDetailsRequest class provides an interface for Health DescribeEventDetails requests.
 *
 * \ingroup Health
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
 * @brief  Constructs a new DescribeEventDetailsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeEventDetailsRequest::DescribeEventDetailsRequest(const DescribeEventDetailsRequest &other)
    : HealthRequest(new DescribeEventDetailsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeEventDetailsRequest object.
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
 * @brief  Construct an DescribeEventDetailsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeEventDetailsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  HealthClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEventDetailsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEventDetailsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeEventDetailsRequestPrivate
 *
 * @brief  Private implementation for DescribeEventDetailsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeEventDetailsRequestPrivate object.
 *
 * @param  action  Health action being performed.
 * @param  q       Pointer to this object's public DescribeEventDetailsRequest instance.
 */
DescribeEventDetailsRequestPrivate::DescribeEventDetailsRequestPrivate(
    const HealthRequest::Action action, DescribeEventDetailsRequest * const q)
    : HealthRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeEventDetailsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeEventDetailsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeEventDetailsRequest instance.
 */
DescribeEventDetailsRequestPrivate::DescribeEventDetailsRequestPrivate(
    const DescribeEventDetailsRequestPrivate &other, DescribeEventDetailsRequest * const q)
    : HealthRequestPrivate(other, q)
{

}

} // namespace Health
} // namespace QtAws

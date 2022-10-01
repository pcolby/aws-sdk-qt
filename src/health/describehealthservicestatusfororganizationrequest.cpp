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

#include "describehealthservicestatusfororganizationrequest.h"
#include "describehealthservicestatusfororganizationrequest_p.h"
#include "describehealthservicestatusfororganizationresponse.h"
#include "healthrequest_p.h"

namespace QtAws {
namespace Health {

/*!
 * \class QtAws::Health::DescribeHealthServiceStatusForOrganizationRequest
 * \brief The DescribeHealthServiceStatusForOrganizationRequest class provides an interface for Health DescribeHealthServiceStatusForOrganization requests.
 *
 * \inmodule QtAwsHealth
 *
 *  <fullname>Health</fullname>
 * 
 *  The Health API provides programmatic access to the Health information that appears in the <a
 *  href="https://phd.aws.amazon.com/phd/home#/">Personal Health Dashboard</a>. You can use the API operations to get
 *  information about events that might affect your Amazon Web Services services and
 * 
 *  resources> <note> <ul> <li>
 * 
 *  You must have a Business, Enterprise On-Ramp, or Enterprise Support plan from <a
 *  href="http://aws.amazon.com/premiumsupport/">Amazon Web Services Support</a> to use the Health API. If you call the
 *  Health API from an Amazon Web Services account that doesn't have a Business, Enterprise On-Ramp, or Enterprise Support
 *  plan, you receive a <code>SubscriptionRequiredException</code>
 * 
 *  error> </li> <li>
 * 
 *  You can use the Health endpoint health.us-east-1.amazonaws.com (HTTPS) to call the Health API operations. Health
 *  supports a multi-Region application architecture and has two regional endpoints in an active-passive configuration. You
 *  can use the high availability endpoint example to determine which Amazon Web Services Region is active, so that you can
 *  get the latest information from the API. For more information, see <a
 *  href="https://docs.aws.amazon.com/health/latest/ug/health-api.html">Accessing the Health API</a> in the <i>Health User
 * 
 *  Guide</i>> </li> </ul> </note>
 * 
 *  For authentication of requests, Health uses the <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature Version 4 Signing
 * 
 *  Process</a>>
 * 
 *  If your Amazon Web Services account is part of Organizations, you can use the Health organizational view feature. This
 *  feature provides a centralized view of Health events across all accounts in your organization. You can aggregate Health
 *  events in real time to identify accounts in your organization that are affected by an operational event or get notified
 *  of security vulnerabilities. Use the organizational view API operations to enable this feature and return event
 *  information. For more information, see <a
 *  href="https://docs.aws.amazon.com/health/latest/ug/aggregate-events.html">Aggregating Health events</a> in the <i>Health
 *  User
 * 
 *  Guide</i>> <note>
 * 
 *  When you use the Health API operations to return Health events, see the following
 * 
 *  recommendations> <ul> <li>
 * 
 *  Use the <a
 *  href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html#AWSHealth-Type-Event-eventScopeCode">eventScopeCode</a>
 *  parameter to specify whether to return Health events that are public or
 * 
 *  account-specific> </li> <li>
 * 
 *  Use pagination to view all events from the response. For example, if you call the
 *  <code>DescribeEventsForOrganization</code> operation to get all events in your organization, you might receive several
 *  page results. Specify the <code>nextToken</code> in the next request to return more
 *
 * \sa HealthClient::describeHealthServiceStatusForOrganization
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeHealthServiceStatusForOrganizationRequest::DescribeHealthServiceStatusForOrganizationRequest(const DescribeHealthServiceStatusForOrganizationRequest &other)
    : HealthRequest(new DescribeHealthServiceStatusForOrganizationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeHealthServiceStatusForOrganizationRequest object.
 */
DescribeHealthServiceStatusForOrganizationRequest::DescribeHealthServiceStatusForOrganizationRequest()
    : HealthRequest(new DescribeHealthServiceStatusForOrganizationRequestPrivate(HealthRequest::DescribeHealthServiceStatusForOrganizationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeHealthServiceStatusForOrganizationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeHealthServiceStatusForOrganizationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeHealthServiceStatusForOrganizationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHealthServiceStatusForOrganizationResponse(*this, reply);
}

/*!
 * \class QtAws::Health::DescribeHealthServiceStatusForOrganizationRequestPrivate
 * \brief The DescribeHealthServiceStatusForOrganizationRequestPrivate class provides private implementation for DescribeHealthServiceStatusForOrganizationRequest.
 * \internal
 *
 * \inmodule QtAwsHealth
 */

/*!
 * Constructs a DescribeHealthServiceStatusForOrganizationRequestPrivate object for Health \a action,
 * with public implementation \a q.
 */
DescribeHealthServiceStatusForOrganizationRequestPrivate::DescribeHealthServiceStatusForOrganizationRequestPrivate(
    const HealthRequest::Action action, DescribeHealthServiceStatusForOrganizationRequest * const q)
    : HealthRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeHealthServiceStatusForOrganizationRequest
 * class' copy constructor.
 */
DescribeHealthServiceStatusForOrganizationRequestPrivate::DescribeHealthServiceStatusForOrganizationRequestPrivate(
    const DescribeHealthServiceStatusForOrganizationRequestPrivate &other, DescribeHealthServiceStatusForOrganizationRequest * const q)
    : HealthRequestPrivate(other, q)
{

}

} // namespace Health
} // namespace QtAws

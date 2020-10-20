/*
    Copyright 2013-2020 Paul Colby

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

#include "checkdomainavailabilityrequest.h"
#include "checkdomainavailabilityrequest_p.h"
#include "checkdomainavailabilityresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::CheckDomainAvailabilityRequest
 * \brief The CheckDomainAvailabilityRequest class provides an interface for Route53Domains CheckDomainAvailability requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::checkDomainAvailability
 */

/*!
 * Constructs a copy of \a other.
 */
CheckDomainAvailabilityRequest::CheckDomainAvailabilityRequest(const CheckDomainAvailabilityRequest &other)
    : Route53DomainsRequest(new CheckDomainAvailabilityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CheckDomainAvailabilityRequest object.
 */
CheckDomainAvailabilityRequest::CheckDomainAvailabilityRequest()
    : Route53DomainsRequest(new CheckDomainAvailabilityRequestPrivate(Route53DomainsRequest::CheckDomainAvailabilityAction, this))
{

}

/*!
 * \reimp
 */
bool CheckDomainAvailabilityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CheckDomainAvailabilityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CheckDomainAvailabilityRequest::response(QNetworkReply * const reply) const
{
    return new CheckDomainAvailabilityResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::CheckDomainAvailabilityRequestPrivate
 * \brief The CheckDomainAvailabilityRequestPrivate class provides private implementation for CheckDomainAvailabilityRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a CheckDomainAvailabilityRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
CheckDomainAvailabilityRequestPrivate::CheckDomainAvailabilityRequestPrivate(
    const Route53DomainsRequest::Action action, CheckDomainAvailabilityRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CheckDomainAvailabilityRequest
 * class' copy constructor.
 */
CheckDomainAvailabilityRequestPrivate::CheckDomainAvailabilityRequestPrivate(
    const CheckDomainAvailabilityRequestPrivate &other, CheckDomainAvailabilityRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws

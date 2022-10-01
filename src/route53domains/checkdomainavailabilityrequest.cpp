// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "checkdomaintransferabilityrequest.h"
#include "checkdomaintransferabilityrequest_p.h"
#include "checkdomaintransferabilityresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::CheckDomainTransferabilityRequest
 * \brief The CheckDomainTransferabilityRequest class provides an interface for Route53Domains CheckDomainTransferability requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::checkDomainTransferability
 */

/*!
 * Constructs a copy of \a other.
 */
CheckDomainTransferabilityRequest::CheckDomainTransferabilityRequest(const CheckDomainTransferabilityRequest &other)
    : Route53DomainsRequest(new CheckDomainTransferabilityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CheckDomainTransferabilityRequest object.
 */
CheckDomainTransferabilityRequest::CheckDomainTransferabilityRequest()
    : Route53DomainsRequest(new CheckDomainTransferabilityRequestPrivate(Route53DomainsRequest::CheckDomainTransferabilityAction, this))
{

}

/*!
 * \reimp
 */
bool CheckDomainTransferabilityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CheckDomainTransferabilityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CheckDomainTransferabilityRequest::response(QNetworkReply * const reply) const
{
    return new CheckDomainTransferabilityResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::CheckDomainTransferabilityRequestPrivate
 * \brief The CheckDomainTransferabilityRequestPrivate class provides private implementation for CheckDomainTransferabilityRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a CheckDomainTransferabilityRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
CheckDomainTransferabilityRequestPrivate::CheckDomainTransferabilityRequestPrivate(
    const Route53DomainsRequest::Action action, CheckDomainTransferabilityRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CheckDomainTransferabilityRequest
 * class' copy constructor.
 */
CheckDomainTransferabilityRequestPrivate::CheckDomainTransferabilityRequestPrivate(
    const CheckDomainTransferabilityRequestPrivate &other, CheckDomainTransferabilityRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws

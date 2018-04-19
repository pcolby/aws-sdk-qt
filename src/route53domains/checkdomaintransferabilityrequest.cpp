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
 *
 * Constructs a CheckDomainTransferabilityRequestPrivate object for Route53Domains \a action with,
 * public implementation \a q.
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

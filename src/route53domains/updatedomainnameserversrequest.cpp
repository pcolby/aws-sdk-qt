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

#include "updatedomainnameserversrequest.h"
#include "updatedomainnameserversrequest_p.h"
#include "updatedomainnameserversresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::UpdateDomainNameserversRequest
 * \brief The UpdateDomainNameserversRequest class provides an interface for Route53Domains UpdateDomainNameservers requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::updateDomainNameservers
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDomainNameserversRequest::UpdateDomainNameserversRequest(const UpdateDomainNameserversRequest &other)
    : Route53DomainsRequest(new UpdateDomainNameserversRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDomainNameserversRequest object.
 */
UpdateDomainNameserversRequest::UpdateDomainNameserversRequest()
    : Route53DomainsRequest(new UpdateDomainNameserversRequestPrivate(Route53DomainsRequest::UpdateDomainNameserversAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDomainNameserversRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDomainNameserversResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDomainNameserversRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainNameserversResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::UpdateDomainNameserversRequestPrivate
 * \brief The UpdateDomainNameserversRequestPrivate class provides private implementation for UpdateDomainNameserversRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 *
 * Constructs a UpdateDomainNameserversRequestPrivate object for Route53Domains \a action with,
 * public implementation \a q.
 */
UpdateDomainNameserversRequestPrivate::UpdateDomainNameserversRequestPrivate(
    const Route53DomainsRequest::Action action, UpdateDomainNameserversRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainNameserversRequest
 * class' copy constructor.
 */
UpdateDomainNameserversRequestPrivate::UpdateDomainNameserversRequestPrivate(
    const UpdateDomainNameserversRequestPrivate &other, UpdateDomainNameserversRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws

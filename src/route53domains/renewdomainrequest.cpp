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

#include "renewdomainrequest.h"
#include "renewdomainrequest_p.h"
#include "renewdomainresponse.h"
#include "route53domainsrequest_p.h"

namespace AWS {
namespace Route53Domains {

/**
 * @class  RenewDomainRequest
 *
 * @brief  Implements Route53Domains RenewDomain requests.
 *
 * @see    Route53DomainsClient::renewDomain
 */

/**
 * @brief  Constructs a new RenewDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RenewDomainRequest::RenewDomainRequest(const RenewDomainRequest &other)
    : Route53DomainsRequest(new RenewDomainRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RenewDomainRequest object.
 */
RenewDomainRequest::RenewDomainRequest()
    : Route53DomainsRequest(new RenewDomainRequestPrivate(Route53DomainsRequest::RenewDomainAction, this))
{

}

bool RenewDomainRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RenewDomainResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RenewDomainResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
AwsAbstractResponse * RenewDomainRequest::response(QNetworkReply * const reply) const
{
    return new RenewDomainResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RenewDomainRequestPrivate
 *
 * @brief  Private implementation for RenewDomainRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RenewDomainRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public RenewDomainRequest instance.
 */
RenewDomainRequestPrivate::RenewDomainRequestPrivate(
    const Route53DomainsRequest::Action action, RenewDomainRequest * const q)
    : RenewDomainPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RenewDomainRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RenewDomainRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RenewDomainRequest instance.
 */
RenewDomainRequestPrivate::RenewDomainRequestPrivate(
    const RenewDomainRequestPrivate &other, RenewDomainRequest * const q)
    : RenewDomainPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace AWS

/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "enabledomainautorenewrequest.h"
#include "enabledomainautorenewrequest_p.h"
#include "enabledomainautorenewresponse.h"
#include "route53domainsrequest_p.h"

namespace AWS {
namespace Route53Domains {

/**
 * @class  EnableDomainAutoRenewRequest
 *
 * @brief  Implements Route53Domains EnableDomainAutoRenew requests.
 *
 * @see    Route53DomainsClient::enableDomainAutoRenew
 */

/**
 * @brief  Constructs a new EnableDomainAutoRenewRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
EnableDomainAutoRenewRequest::EnableDomainAutoRenewRequest(const EnableDomainAutoRenewRequest &other)
    : Route53DomainsRequest(new EnableDomainAutoRenewRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new EnableDomainAutoRenewRequest object.
 */
EnableDomainAutoRenewRequest::EnableDomainAutoRenewRequest()
    : Route53DomainsRequest(new EnableDomainAutoRenewRequestPrivate(Route53DomainsRequest::EnableDomainAutoRenewAction, this))
{

}

bool EnableDomainAutoRenewRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an EnableDomainAutoRenewResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An EnableDomainAutoRenewResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
AwsAbstractResponse * EnableDomainAutoRenewRequest::response(QNetworkReply * const reply) const
{
    return new EnableDomainAutoRenewResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  EnableDomainAutoRenewRequestPrivate
 *
 * @brief  Private implementation for EnableDomainAutoRenewRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableDomainAutoRenewRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public EnableDomainAutoRenewRequest instance.
 */
EnableDomainAutoRenewRequestPrivate::EnableDomainAutoRenewRequestPrivate(
    const Route53DomainsRequest::Action action, EnableDomainAutoRenewRequest * const q)
    : EnableDomainAutoRenewPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new EnableDomainAutoRenewRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the EnableDomainAutoRenewRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public EnableDomainAutoRenewRequest instance.
 */
EnableDomainAutoRenewRequestPrivate::EnableDomainAutoRenewRequestPrivate(
    const EnableDomainAutoRenewRequestPrivate &other, EnableDomainAutoRenewRequest * const q)
    : EnableDomainAutoRenewPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace AWS

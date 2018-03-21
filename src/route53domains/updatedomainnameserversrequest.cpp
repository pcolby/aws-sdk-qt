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

#include "updatedomainnameserversrequest.h"
#include "updatedomainnameserversrequest_p.h"
#include "updatedomainnameserversresponse.h"
#include "route53domainsrequest_p.h"

namespace AWS {
namespace Route53Domains {

/**
 * @class  UpdateDomainNameserversRequest
 *
 * @brief  Implements Route53Domains UpdateDomainNameservers requests.
 *
 * @see    Route53DomainsClient::updateDomainNameservers
 */

/**
 * @brief  Constructs a new UpdateDomainNameserversRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDomainNameserversRequest::UpdateDomainNameserversRequest(const UpdateDomainNameserversRequest &other)
    : Route53DomainsRequest(new UpdateDomainNameserversRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDomainNameserversRequest object.
 */
UpdateDomainNameserversRequest::UpdateDomainNameserversRequest()
    : Route53DomainsRequest(new UpdateDomainNameserversRequestPrivate(Route53DomainsRequest::UpdateDomainNameserversAction, this))
{

}

bool UpdateDomainNameserversRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDomainNameserversResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDomainNameserversResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
AwsAbstractResponse * UpdateDomainNameserversRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainNameserversResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDomainNameserversRequestPrivate
 *
 * @brief  Private implementation for UpdateDomainNameserversRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDomainNameserversRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public UpdateDomainNameserversRequest instance.
 */
UpdateDomainNameserversRequestPrivate::UpdateDomainNameserversRequestPrivate(
    const Route53DomainsRequest::Action action, UpdateDomainNameserversRequest * const q)
    : UpdateDomainNameserversPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDomainNameserversRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainNameserversRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDomainNameserversRequest instance.
 */
UpdateDomainNameserversRequestPrivate::UpdateDomainNameserversRequestPrivate(
    const UpdateDomainNameserversRequestPrivate &other, UpdateDomainNameserversRequest * const q)
    : UpdateDomainNameserversPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace AWS

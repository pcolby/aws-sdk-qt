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

#include "disabledomaintransferlockrequest.h"
#include "disabledomaintransferlockrequest_p.h"
#include "disabledomaintransferlockresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/**
 * @class  DisableDomainTransferLockRequest
 *
 * @brief  Implements Route53Domains DisableDomainTransferLock requests.
 *
 * @see    Route53DomainsClient::disableDomainTransferLock
 */

/**
 * @brief  Constructs a new DisableDomainTransferLockRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisableDomainTransferLockRequest::DisableDomainTransferLockRequest(const DisableDomainTransferLockRequest &other)
    : Route53DomainsRequest(new DisableDomainTransferLockRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisableDomainTransferLockRequest object.
 */
DisableDomainTransferLockRequest::DisableDomainTransferLockRequest()
    : Route53DomainsRequest(new DisableDomainTransferLockRequestPrivate(Route53DomainsRequest::DisableDomainTransferLockAction, this))
{

}

bool DisableDomainTransferLockRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisableDomainTransferLockResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisableDomainTransferLockResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableDomainTransferLockRequest::response(QNetworkReply * const reply) const
{
    return new DisableDomainTransferLockResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisableDomainTransferLockRequestPrivate
 *
 * @brief  Private implementation for DisableDomainTransferLockRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableDomainTransferLockRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public DisableDomainTransferLockRequest instance.
 */
DisableDomainTransferLockRequestPrivate::DisableDomainTransferLockRequestPrivate(
    const Route53DomainsRequest::Action action, DisableDomainTransferLockRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisableDomainTransferLockRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisableDomainTransferLockRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisableDomainTransferLockRequest instance.
 */
DisableDomainTransferLockRequestPrivate::DisableDomainTransferLockRequestPrivate(
    const DisableDomainTransferLockRequestPrivate &other, DisableDomainTransferLockRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws

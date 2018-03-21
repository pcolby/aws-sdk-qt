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

#include "transferdomainrequest.h"
#include "transferdomainrequest_p.h"
#include "transferdomainresponse.h"
#include "route53domainsrequest_p.h"

namespace AWS {
namespace Route53Domains {

/**
 * @class  TransferDomainRequest
 *
 * @brief  Implements Route53Domains TransferDomain requests.
 *
 * @see    Route53DomainsClient::transferDomain
 */

/**
 * @brief  Constructs a new TransferDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TransferDomainResponse::TransferDomainResponse(

/**
 * @brief  Constructs a new TransferDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TransferDomainRequest::TransferDomainRequest(const TransferDomainRequest &other)
    : Route53DomainsRequest(new TransferDomainRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TransferDomainRequest object.
 */
TransferDomainRequest::TransferDomainRequest()
    : Route53DomainsRequest(new TransferDomainRequestPrivate(Route53DomainsRequest::TransferDomainAction, this))
{

}

bool TransferDomainRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TransferDomainResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TransferDomainResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
AwsAbstractResponse * TransferDomainRequest::response(QNetworkReply * const reply) const
{
    return new TransferDomainResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TransferDomainRequestPrivate
 *
 * @brief  Private implementation for TransferDomainRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TransferDomainRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public TransferDomainRequest instance.
 */
TransferDomainRequestPrivate::TransferDomainRequestPrivate(
    const Route53DomainsRequest::Action action, TransferDomainRequest * const q)
    : TransferDomainPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TransferDomainRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TransferDomainRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TransferDomainRequest instance.
 */
TransferDomainRequestPrivate::TransferDomainRequestPrivate(
    const TransferDomainRequestPrivate &other, TransferDomainRequest * const q)
    : TransferDomainPrivate(other, q)
{

}

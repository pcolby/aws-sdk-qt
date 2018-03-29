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

#include "listtagsfordomainrequest.h"
#include "listtagsfordomainrequest_p.h"
#include "listtagsfordomainresponse.h"
#include "route53domainsrequest_p.h"

namespace AWS {
namespace Route53Domains {

/**
 * @class  ListTagsForDomainRequest
 *
 * @brief  Implements Route53Domains ListTagsForDomain requests.
 *
 * @see    Route53DomainsClient::listTagsForDomain
 */

/**
 * @brief  Constructs a new ListTagsForDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTagsForDomainRequest::ListTagsForDomainRequest(const ListTagsForDomainRequest &other)
    : Route53DomainsRequest(new ListTagsForDomainRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTagsForDomainRequest object.
 */
ListTagsForDomainRequest::ListTagsForDomainRequest()
    : Route53DomainsRequest(new ListTagsForDomainRequestPrivate(Route53DomainsRequest::ListTagsForDomainAction, this))
{

}

bool ListTagsForDomainRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTagsForDomainResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTagsForDomainResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
AwsAbstractResponse * ListTagsForDomainRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsForDomainResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTagsForDomainRequestPrivate
 *
 * @brief  Private implementation for ListTagsForDomainRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsForDomainRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public ListTagsForDomainRequest instance.
 */
ListTagsForDomainRequestPrivate::ListTagsForDomainRequestPrivate(
    const Route53DomainsRequest::Action action, ListTagsForDomainRequest * const q)
    : ListTagsForDomainPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsForDomainRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTagsForDomainRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTagsForDomainRequest instance.
 */
ListTagsForDomainRequestPrivate::ListTagsForDomainRequestPrivate(
    const ListTagsForDomainRequestPrivate &other, ListTagsForDomainRequest * const q)
    : ListTagsForDomainPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace AWS

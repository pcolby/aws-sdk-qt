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

#include "listdomainsrequest.h"
#include "listdomainsrequest_p.h"
#include "listdomainsresponse.h"
#include "swfrequest_p.h"

namespace AWS {
namespace SWF {

/**
 * @class  ListDomainsRequest
 *
 * @brief  Implements SWF ListDomains requests.
 *
 * @see    SWFClient::listDomains
 */

/**
 * @brief  Constructs a new ListDomainsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDomainsRequest::ListDomainsRequest(const ListDomainsRequest &other)
    : SWFRequest(new ListDomainsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDomainsRequest object.
 */
ListDomainsRequest::ListDomainsRequest()
    : SWFRequest(new ListDomainsRequestPrivate(SWFRequest::ListDomainsAction, this))
{

}

bool ListDomainsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListDomainsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDomainsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * ListDomainsRequest::response(QNetworkReply * const reply) const
{
    return new ListDomainsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListDomainsRequestPrivate
 *
 * @brief  Private implementation for ListDomainsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDomainsRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public ListDomainsRequest instance.
 */
ListDomainsRequestPrivate::ListDomainsRequestPrivate(
    const SWFRequest::Action action, ListDomainsRequest * const q)
    : ListDomainsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListDomainsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDomainsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDomainsRequest instance.
 */
ListDomainsRequestPrivate::ListDomainsRequestPrivate(
    const ListDomainsRequestPrivate &other, ListDomainsRequest * const q)
    : ListDomainsPrivate(other, q)
{

}

} // namespace SWF
} // namespace AWS

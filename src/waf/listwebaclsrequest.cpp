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

#include "listwebaclsrequest.h"
#include "listwebaclsrequest_p.h"
#include "listwebaclsresponse.h"
#include "wafrequest_p.h"

namespace AWS {
namespace WAF {

/**
 * @class  ListWebACLsRequest
 *
 * @brief  Implements WAF ListWebACLs requests.
 *
 * @see    WAFClient::listWebACLs
 */

/**
 * @brief  Constructs a new ListWebACLsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListWebACLsRequest::ListWebACLsRequest(const ListWebACLsRequest &other)
    : WAFRequest(new ListWebACLsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListWebACLsRequest object.
 */
ListWebACLsRequest::ListWebACLsRequest()
    : WAFRequest(new ListWebACLsRequestPrivate(WAFRequest::ListWebACLsAction, this))
{

}

bool ListWebACLsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListWebACLsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListWebACLsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WAFClient::send
 */
AwsAbstractResponse * ListWebACLsRequest::response(QNetworkReply * const reply) const
{
    return new ListWebACLsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListWebACLsRequestPrivate
 *
 * @brief  Private implementation for ListWebACLsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListWebACLsRequestPrivate object.
 *
 * @param  action  WAF action being performed.
 * @param  q       Pointer to this object's public ListWebACLsRequest instance.
 */
ListWebACLsRequestPrivate::ListWebACLsRequestPrivate(
    const WAFRequest::Action action, ListWebACLsRequest * const q)
    : ListWebACLsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListWebACLsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListWebACLsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListWebACLsRequest instance.
 */
ListWebACLsRequestPrivate::ListWebACLsRequestPrivate(
    const ListWebACLsRequestPrivate &other, ListWebACLsRequest * const q)
    : ListWebACLsPrivate(other, q)
{

}

} // namespace WAF
} // namespace AWS

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

#include "listworkerblocksrequest.h"
#include "listworkerblocksrequest_p.h"
#include "listworkerblocksresponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  ListWorkerBlocksRequest
 *
 * @brief  Implements MTurk ListWorkerBlocks requests.
 *
 * @see    MTurkClient::listWorkerBlocks
 */

/**
 * @brief  Constructs a new ListWorkerBlocksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListWorkerBlocksRequest::ListWorkerBlocksRequest(const ListWorkerBlocksRequest &other)
    : MTurkRequest(new ListWorkerBlocksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListWorkerBlocksRequest object.
 */
ListWorkerBlocksRequest::ListWorkerBlocksRequest()
    : MTurkRequest(new ListWorkerBlocksRequestPrivate(MTurkRequest::ListWorkerBlocksAction, this))
{

}

bool ListWorkerBlocksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListWorkerBlocksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListWorkerBlocksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * ListWorkerBlocksRequest::response(QNetworkReply * const reply) const
{
    return new ListWorkerBlocksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListWorkerBlocksRequestPrivate
 *
 * @brief  Private implementation for ListWorkerBlocksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListWorkerBlocksRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public ListWorkerBlocksRequest instance.
 */
ListWorkerBlocksRequestPrivate::ListWorkerBlocksRequestPrivate(
    const MTurkRequest::Action action, ListWorkerBlocksRequest * const q)
    : ListWorkerBlocksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListWorkerBlocksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListWorkerBlocksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListWorkerBlocksRequest instance.
 */
ListWorkerBlocksRequestPrivate::ListWorkerBlocksRequestPrivate(
    const ListWorkerBlocksRequestPrivate &other, ListWorkerBlocksRequest * const q)
    : ListWorkerBlocksPrivate(other, q)
{

}

} // namespace MTurk
} // namespace AWS

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

#include "listindexrequest.h"
#include "listindexrequest_p.h"
#include "listindexresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ListIndexRequest
 *
 * @brief  Implements CloudDirectory ListIndex requests.
 *
 * @see    CloudDirectoryClient::listIndex
 */

/**
 * @brief  Constructs a new ListIndexResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListIndexResponse::ListIndexResponse(

/**
 * @brief  Constructs a new ListIndexRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListIndexRequest::ListIndexRequest(const ListIndexRequest &other)
    : CloudDirectoryRequest(new ListIndexRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListIndexRequest object.
 */
ListIndexRequest::ListIndexRequest()
    : CloudDirectoryRequest(new ListIndexRequestPrivate(CloudDirectoryRequest::ListIndexAction, this))
{

}

bool ListIndexRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListIndexResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListIndexResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * ListIndexRequest::response(QNetworkReply * const reply) const
{
    return new ListIndexResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListIndexRequestPrivate
 *
 * @brief  Private implementation for ListIndexRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListIndexRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public ListIndexRequest instance.
 */
ListIndexRequestPrivate::ListIndexRequestPrivate(
    const CloudDirectoryRequest::Action action, ListIndexRequest * const q)
    : ListIndexPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListIndexRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListIndexRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListIndexRequest instance.
 */
ListIndexRequestPrivate::ListIndexRequestPrivate(
    const ListIndexRequestPrivate &other, ListIndexRequest * const q)
    : ListIndexPrivate(other, q)
{

}

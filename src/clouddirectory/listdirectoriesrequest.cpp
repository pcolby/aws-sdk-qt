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

#include "listdirectoriesrequest.h"
#include "listdirectoriesrequest_p.h"
#include "listdirectoriesresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ListDirectoriesRequest
 *
 * @brief  Implements CloudDirectory ListDirectories requests.
 *
 * @see    CloudDirectoryClient::listDirectories
 */

/**
 * @brief  Constructs a new ListDirectoriesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDirectoriesResponse::ListDirectoriesResponse(

/**
 * @brief  Constructs a new ListDirectoriesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDirectoriesRequest::ListDirectoriesRequest(const ListDirectoriesRequest &other)
    : CloudDirectoryRequest(new ListDirectoriesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDirectoriesRequest object.
 */
ListDirectoriesRequest::ListDirectoriesRequest()
    : CloudDirectoryRequest(new ListDirectoriesRequestPrivate(CloudDirectoryRequest::ListDirectoriesAction, this))
{

}

bool ListDirectoriesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListDirectoriesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDirectoriesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * ListDirectoriesRequest::response(QNetworkReply * const reply) const
{
    return new ListDirectoriesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListDirectoriesRequestPrivate
 *
 * @brief  Private implementation for ListDirectoriesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDirectoriesRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public ListDirectoriesRequest instance.
 */
ListDirectoriesRequestPrivate::ListDirectoriesRequestPrivate(
    const CloudDirectoryRequest::Action action, ListDirectoriesRequest * const q)
    : ListDirectoriesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListDirectoriesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDirectoriesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDirectoriesRequest instance.
 */
ListDirectoriesRequestPrivate::ListDirectoriesRequestPrivate(
    const ListDirectoriesRequestPrivate &other, ListDirectoriesRequest * const q)
    : ListDirectoriesPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS

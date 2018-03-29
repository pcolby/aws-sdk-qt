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

#include "listactivitiesrequest.h"
#include "listactivitiesrequest_p.h"
#include "listactivitiesresponse.h"
#include "sfnrequest_p.h"

namespace AWS {
namespace SFN {

/**
 * @class  ListActivitiesRequest
 *
 * @brief  Implements SFN ListActivities requests.
 *
 * @see    SFNClient::listActivities
 */

/**
 * @brief  Constructs a new ListActivitiesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListActivitiesRequest::ListActivitiesRequest(const ListActivitiesRequest &other)
    : SFNRequest(new ListActivitiesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListActivitiesRequest object.
 */
ListActivitiesRequest::ListActivitiesRequest()
    : SFNRequest(new ListActivitiesRequestPrivate(SFNRequest::ListActivitiesAction, this))
{

}

bool ListActivitiesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListActivitiesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListActivitiesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SFNClient::send
 */
AwsAbstractResponse * ListActivitiesRequest::response(QNetworkReply * const reply) const
{
    return new ListActivitiesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListActivitiesRequestPrivate
 *
 * @brief  Private implementation for ListActivitiesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListActivitiesRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public ListActivitiesRequest instance.
 */
ListActivitiesRequestPrivate::ListActivitiesRequestPrivate(
    const SFNRequest::Action action, ListActivitiesRequest * const q)
    : ListActivitiesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListActivitiesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListActivitiesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListActivitiesRequest instance.
 */
ListActivitiesRequestPrivate::ListActivitiesRequestPrivate(
    const ListActivitiesRequestPrivate &other, ListActivitiesRequest * const q)
    : ListActivitiesPrivate(other, q)
{

}

} // namespace SFN
} // namespace AWS

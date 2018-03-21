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

#include "listresourcesrequest.h"
#include "listresourcesrequest_p.h"
#include "listresourcesresponse.h"
#include "workmailrequest_p.h"

namespace AWS {
namespace WorkMail {

/**
 * @class  ListResourcesRequest
 *
 * @brief  Implements WorkMail ListResources requests.
 *
 * @see    WorkMailClient::listResources
 */

/**
 * @brief  Constructs a new ListResourcesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListResourcesRequest::ListResourcesRequest(const ListResourcesRequest &other)
    : WorkMailRequest(new ListResourcesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListResourcesRequest object.
 */
ListResourcesRequest::ListResourcesRequest()
    : WorkMailRequest(new ListResourcesRequestPrivate(WorkMailRequest::ListResourcesAction, this))
{

}

bool ListResourcesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListResourcesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListResourcesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
AwsAbstractResponse * ListResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListResourcesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListResourcesRequestPrivate
 *
 * @brief  Private implementation for ListResourcesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResourcesRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public ListResourcesRequest instance.
 */
ListResourcesRequestPrivate::ListResourcesRequestPrivate(
    const WorkMailRequest::Action action, ListResourcesRequest * const q)
    : ListResourcesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListResourcesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListResourcesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListResourcesRequest instance.
 */
ListResourcesRequestPrivate::ListResourcesRequestPrivate(
    const ListResourcesRequestPrivate &other, ListResourcesRequest * const q)
    : ListResourcesPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace AWS

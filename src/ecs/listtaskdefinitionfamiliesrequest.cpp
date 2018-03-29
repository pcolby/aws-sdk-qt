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

#include "listtaskdefinitionfamiliesrequest.h"
#include "listtaskdefinitionfamiliesrequest_p.h"
#include "listtaskdefinitionfamiliesresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace ECS {

/**
 * @class  ListTaskDefinitionFamiliesRequest
 *
 * @brief  Implements ECS ListTaskDefinitionFamilies requests.
 *
 * @see    ECSClient::listTaskDefinitionFamilies
 */

/**
 * @brief  Constructs a new ListTaskDefinitionFamiliesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTaskDefinitionFamiliesRequest::ListTaskDefinitionFamiliesRequest(const ListTaskDefinitionFamiliesRequest &other)
    : ECSRequest(new ListTaskDefinitionFamiliesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTaskDefinitionFamiliesRequest object.
 */
ListTaskDefinitionFamiliesRequest::ListTaskDefinitionFamiliesRequest()
    : ECSRequest(new ListTaskDefinitionFamiliesRequestPrivate(ECSRequest::ListTaskDefinitionFamiliesAction, this))
{

}

bool ListTaskDefinitionFamiliesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTaskDefinitionFamiliesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTaskDefinitionFamiliesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ECSClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTaskDefinitionFamiliesRequest::response(QNetworkReply * const reply) const
{
    return new ListTaskDefinitionFamiliesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTaskDefinitionFamiliesRequestPrivate
 *
 * @brief  Private implementation for ListTaskDefinitionFamiliesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTaskDefinitionFamiliesRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public ListTaskDefinitionFamiliesRequest instance.
 */
ListTaskDefinitionFamiliesRequestPrivate::ListTaskDefinitionFamiliesRequestPrivate(
    const ECSRequest::Action action, ListTaskDefinitionFamiliesRequest * const q)
    : ListTaskDefinitionFamiliesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTaskDefinitionFamiliesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTaskDefinitionFamiliesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTaskDefinitionFamiliesRequest instance.
 */
ListTaskDefinitionFamiliesRequestPrivate::ListTaskDefinitionFamiliesRequestPrivate(
    const ListTaskDefinitionFamiliesRequestPrivate &other, ListTaskDefinitionFamiliesRequest * const q)
    : ListTaskDefinitionFamiliesPrivate(other, q)
{

}

} // namespace ECS
} // namespace QtAws

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

#include "listtaskdefinitionsrequest.h"
#include "listtaskdefinitionsrequest_p.h"
#include "listtaskdefinitionsresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace ECS {

/**
 * @class  ListTaskDefinitionsRequest
 *
 * @brief  Implements ECS ListTaskDefinitions requests.
 *
 * @see    ECSClient::listTaskDefinitions
 */

/**
 * @brief  Constructs a new ListTaskDefinitionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTaskDefinitionsRequest::ListTaskDefinitionsRequest(const ListTaskDefinitionsRequest &other)
    : ECSRequest(new ListTaskDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTaskDefinitionsRequest object.
 */
ListTaskDefinitionsRequest::ListTaskDefinitionsRequest()
    : ECSRequest(new ListTaskDefinitionsRequestPrivate(ECSRequest::ListTaskDefinitionsAction, this))
{

}

bool ListTaskDefinitionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTaskDefinitionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTaskDefinitionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECSClient::send
 */
AwsAbstractResponse * ListTaskDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListTaskDefinitionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTaskDefinitionsRequestPrivate
 *
 * @brief  Private implementation for ListTaskDefinitionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTaskDefinitionsRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public ListTaskDefinitionsRequest instance.
 */
ListTaskDefinitionsRequestPrivate::ListTaskDefinitionsRequestPrivate(
    const ECSRequest::Action action, ListTaskDefinitionsRequest * const q)
    : ListTaskDefinitionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTaskDefinitionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTaskDefinitionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTaskDefinitionsRequest instance.
 */
ListTaskDefinitionsRequestPrivate::ListTaskDefinitionsRequestPrivate(
    const ListTaskDefinitionsRequestPrivate &other, ListTaskDefinitionsRequest * const q)
    : ListTaskDefinitionsPrivate(other, q)
{

}

} // namespace ECS
} // namespace QtAws

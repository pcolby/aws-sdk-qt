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

#include "deleteparametergrouprequest.h"
#include "deleteparametergrouprequest_p.h"
#include "deleteparametergroupresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace DAX {

/**
 * @class  DeleteParameterGroupRequest
 *
 * @brief  Implements DAX DeleteParameterGroup requests.
 *
 * @see    DAXClient::deleteParameterGroup
 */

/**
 * @brief  Constructs a new DeleteParameterGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteParameterGroupRequest::DeleteParameterGroupRequest(const DeleteParameterGroupRequest &other)
    : DAXRequest(new DeleteParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteParameterGroupRequest object.
 */
DeleteParameterGroupRequest::DeleteParameterGroupRequest()
    : DAXRequest(new DeleteParameterGroupRequestPrivate(DAXRequest::DeleteParameterGroupAction, this))
{

}

bool DeleteParameterGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteParameterGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteParameterGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DAXClient::send
 */
AwsAbstractResponse * DeleteParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteParameterGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteParameterGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteParameterGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteParameterGroupRequestPrivate object.
 *
 * @param  action  DAX action being performed.
 * @param  q       Pointer to this object's public DeleteParameterGroupRequest instance.
 */
DeleteParameterGroupRequestPrivate::DeleteParameterGroupRequestPrivate(
    const DAXRequest::Action action, DeleteParameterGroupRequest * const q)
    : DeleteParameterGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteParameterGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteParameterGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteParameterGroupRequest instance.
 */
DeleteParameterGroupRequestPrivate::DeleteParameterGroupRequestPrivate(
    const DeleteParameterGroupRequestPrivate &other, DeleteParameterGroupRequest * const q)
    : DeleteParameterGroupPrivate(other, q)
{

}

} // namespace DAX
} // namespace QtAws

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

#include "deletegrouprequest.h"
#include "deletegrouprequest_p.h"
#include "deletegroupresponse.h"
#include "workmailrequest_p.h"

namespace AWS {
namespace WorkMail {

/**
 * @class  DeleteGroupRequest
 *
 * @brief  Implements WorkMail DeleteGroup requests.
 *
 * @see    WorkMailClient::deleteGroup
 */

/**
 * @brief  Constructs a new DeleteGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteGroupResponse::DeleteGroupResponse(

/**
 * @brief  Constructs a new DeleteGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteGroupRequest::DeleteGroupRequest(const DeleteGroupRequest &other)
    : WorkMailRequest(new DeleteGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteGroupRequest object.
 */
DeleteGroupRequest::DeleteGroupRequest()
    : WorkMailRequest(new DeleteGroupRequestPrivate(WorkMailRequest::DeleteGroupAction, this))
{

}

bool DeleteGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
AwsAbstractResponse * DeleteGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGroupRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public DeleteGroupRequest instance.
 */
DeleteGroupRequestPrivate::DeleteGroupRequestPrivate(
    const WorkMailRequest::Action action, DeleteGroupRequest * const q)
    : DeleteGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteGroupRequest instance.
 */
DeleteGroupRequestPrivate::DeleteGroupRequestPrivate(
    const DeleteGroupRequestPrivate &other, DeleteGroupRequest * const q)
    : DeleteGroupPrivate(other, q)
{

}

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

#include "updatecontainerinstancesstaterequest.h"
#include "updatecontainerinstancesstaterequest_p.h"
#include "updatecontainerinstancesstateresponse.h"
#include "ecsrequest_p.h"

namespace AWS {
namespace ECS {

/**
 * @class  UpdateContainerInstancesStateRequest
 *
 * @brief  Implements ECS UpdateContainerInstancesState requests.
 *
 * @see    ECSClient::updateContainerInstancesState
 */

/**
 * @brief  Constructs a new UpdateContainerInstancesStateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateContainerInstancesStateResponse::UpdateContainerInstancesStateResponse(

/**
 * @brief  Constructs a new UpdateContainerInstancesStateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateContainerInstancesStateRequest::UpdateContainerInstancesStateRequest(const UpdateContainerInstancesStateRequest &other)
    : ECSRequest(new UpdateContainerInstancesStateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateContainerInstancesStateRequest object.
 */
UpdateContainerInstancesStateRequest::UpdateContainerInstancesStateRequest()
    : ECSRequest(new UpdateContainerInstancesStateRequestPrivate(ECSRequest::UpdateContainerInstancesStateAction, this))
{

}

bool UpdateContainerInstancesStateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateContainerInstancesStateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateContainerInstancesStateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECSClient::send
 */
AwsAbstractResponse * UpdateContainerInstancesStateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateContainerInstancesStateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateContainerInstancesStateRequestPrivate
 *
 * @brief  Private implementation for UpdateContainerInstancesStateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateContainerInstancesStateRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public UpdateContainerInstancesStateRequest instance.
 */
UpdateContainerInstancesStateRequestPrivate::UpdateContainerInstancesStateRequestPrivate(
    const ECSRequest::Action action, UpdateContainerInstancesStateRequest * const q)
    : UpdateContainerInstancesStatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateContainerInstancesStateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateContainerInstancesStateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateContainerInstancesStateRequest instance.
 */
UpdateContainerInstancesStateRequestPrivate::UpdateContainerInstancesStateRequestPrivate(
    const UpdateContainerInstancesStateRequestPrivate &other, UpdateContainerInstancesStateRequest * const q)
    : UpdateContainerInstancesStatePrivate(other, q)
{

}

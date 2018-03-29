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

#include "updatecontaineragentrequest.h"
#include "updatecontaineragentrequest_p.h"
#include "updatecontaineragentresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace ECS {

/**
 * @class  UpdateContainerAgentRequest
 *
 * @brief  Implements ECS UpdateContainerAgent requests.
 *
 * @see    ECSClient::updateContainerAgent
 */

/**
 * @brief  Constructs a new UpdateContainerAgentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateContainerAgentRequest::UpdateContainerAgentRequest(const UpdateContainerAgentRequest &other)
    : ECSRequest(new UpdateContainerAgentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateContainerAgentRequest object.
 */
UpdateContainerAgentRequest::UpdateContainerAgentRequest()
    : ECSRequest(new UpdateContainerAgentRequestPrivate(ECSRequest::UpdateContainerAgentAction, this))
{

}

bool UpdateContainerAgentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateContainerAgentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateContainerAgentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECSClient::send
 */
AwsAbstractResponse * UpdateContainerAgentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateContainerAgentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateContainerAgentRequestPrivate
 *
 * @brief  Private implementation for UpdateContainerAgentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateContainerAgentRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public UpdateContainerAgentRequest instance.
 */
UpdateContainerAgentRequestPrivate::UpdateContainerAgentRequestPrivate(
    const ECSRequest::Action action, UpdateContainerAgentRequest * const q)
    : UpdateContainerAgentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateContainerAgentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateContainerAgentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateContainerAgentRequest instance.
 */
UpdateContainerAgentRequestPrivate::UpdateContainerAgentRequestPrivate(
    const UpdateContainerAgentRequestPrivate &other, UpdateContainerAgentRequest * const q)
    : UpdateContainerAgentPrivate(other, q)
{

}

} // namespace ECS
} // namespace QtAws

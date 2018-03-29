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

#include "updatestatemachinerequest.h"
#include "updatestatemachinerequest_p.h"
#include "updatestatemachineresponse.h"
#include "sfnrequest_p.h"

namespace AWS {
namespace SFN {

/**
 * @class  UpdateStateMachineRequest
 *
 * @brief  Implements SFN UpdateStateMachine requests.
 *
 * @see    SFNClient::updateStateMachine
 */

/**
 * @brief  Constructs a new UpdateStateMachineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateStateMachineRequest::UpdateStateMachineRequest(const UpdateStateMachineRequest &other)
    : SFNRequest(new UpdateStateMachineRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateStateMachineRequest object.
 */
UpdateStateMachineRequest::UpdateStateMachineRequest()
    : SFNRequest(new UpdateStateMachineRequestPrivate(SFNRequest::UpdateStateMachineAction, this))
{

}

bool UpdateStateMachineRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateStateMachineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateStateMachineResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SFNClient::send
 */
AwsAbstractResponse * UpdateStateMachineRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStateMachineResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateStateMachineRequestPrivate
 *
 * @brief  Private implementation for UpdateStateMachineRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateStateMachineRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public UpdateStateMachineRequest instance.
 */
UpdateStateMachineRequestPrivate::UpdateStateMachineRequestPrivate(
    const SFNRequest::Action action, UpdateStateMachineRequest * const q)
    : UpdateStateMachinePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateStateMachineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateStateMachineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateStateMachineRequest instance.
 */
UpdateStateMachineRequestPrivate::UpdateStateMachineRequestPrivate(
    const UpdateStateMachineRequestPrivate &other, UpdateStateMachineRequest * const q)
    : UpdateStateMachinePrivate(other, q)
{

}

} // namespace SFN
} // namespace AWS

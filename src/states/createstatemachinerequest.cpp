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

#include "createstatemachinerequest.h"
#include "createstatemachinerequest_p.h"
#include "createstatemachineresponse.h"
#include "sfnrequest_p.h"

namespace AWS {
namespace SFN {

/**
 * @class  CreateStateMachineRequest
 *
 * @brief  Implements SFN CreateStateMachine requests.
 *
 * @see    SFNClient::createStateMachine
 */

/**
 * @brief  Constructs a new CreateStateMachineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateStateMachineRequest::CreateStateMachineRequest(const CreateStateMachineRequest &other)
    : SFNRequest(new CreateStateMachineRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateStateMachineRequest object.
 */
CreateStateMachineRequest::CreateStateMachineRequest()
    : SFNRequest(new CreateStateMachineRequestPrivate(SFNRequest::CreateStateMachineAction, this))
{

}

bool CreateStateMachineRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateStateMachineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateStateMachineResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SFNClient::send
 */
AwsAbstractResponse * CreateStateMachineRequest::response(QNetworkReply * const reply) const
{
    return new CreateStateMachineResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateStateMachineRequestPrivate
 *
 * @brief  Private implementation for CreateStateMachineRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStateMachineRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public CreateStateMachineRequest instance.
 */
CreateStateMachineRequestPrivate::CreateStateMachineRequestPrivate(
    const SFNRequest::Action action, CreateStateMachineRequest * const q)
    : CreateStateMachinePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateStateMachineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateStateMachineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateStateMachineRequest instance.
 */
CreateStateMachineRequestPrivate::CreateStateMachineRequestPrivate(
    const CreateStateMachineRequestPrivate &other, CreateStateMachineRequest * const q)
    : CreateStateMachinePrivate(other, q)
{

}

} // namespace SFN
} // namespace AWS

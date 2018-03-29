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

#include "deletestatemachinerequest.h"
#include "deletestatemachinerequest_p.h"
#include "deletestatemachineresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace SFN {

/**
 * @class  DeleteStateMachineRequest
 *
 * @brief  Implements SFN DeleteStateMachine requests.
 *
 * @see    SFNClient::deleteStateMachine
 */

/**
 * @brief  Constructs a new DeleteStateMachineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteStateMachineRequest::DeleteStateMachineRequest(const DeleteStateMachineRequest &other)
    : SFNRequest(new DeleteStateMachineRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteStateMachineRequest object.
 */
DeleteStateMachineRequest::DeleteStateMachineRequest()
    : SFNRequest(new DeleteStateMachineRequestPrivate(SFNRequest::DeleteStateMachineAction, this))
{

}

bool DeleteStateMachineRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteStateMachineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteStateMachineResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SFNClient::send
 */
AwsAbstractResponse * DeleteStateMachineRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStateMachineResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteStateMachineRequestPrivate
 *
 * @brief  Private implementation for DeleteStateMachineRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStateMachineRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public DeleteStateMachineRequest instance.
 */
DeleteStateMachineRequestPrivate::DeleteStateMachineRequestPrivate(
    const SFNRequest::Action action, DeleteStateMachineRequest * const q)
    : DeleteStateMachinePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStateMachineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteStateMachineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteStateMachineRequest instance.
 */
DeleteStateMachineRequestPrivate::DeleteStateMachineRequestPrivate(
    const DeleteStateMachineRequestPrivate &other, DeleteStateMachineRequest * const q)
    : DeleteStateMachinePrivate(other, q)
{

}

} // namespace SFN
} // namespace QtAws

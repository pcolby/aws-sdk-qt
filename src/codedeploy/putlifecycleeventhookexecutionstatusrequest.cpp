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

#include "putlifecycleeventhookexecutionstatusrequest.h"
#include "putlifecycleeventhookexecutionstatusrequest_p.h"
#include "putlifecycleeventhookexecutionstatusresponse.h"
#include "codedeployrequest_p.h"

namespace AWS {
namespace CodeDeploy {

/**
 * @class  PutLifecycleEventHookExecutionStatusRequest
 *
 * @brief  Implements CodeDeploy PutLifecycleEventHookExecutionStatus requests.
 *
 * @see    CodeDeployClient::putLifecycleEventHookExecutionStatus
 */

/**
 * @brief  Constructs a new PutLifecycleEventHookExecutionStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutLifecycleEventHookExecutionStatusResponse::PutLifecycleEventHookExecutionStatusResponse(

/**
 * @brief  Constructs a new PutLifecycleEventHookExecutionStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutLifecycleEventHookExecutionStatusRequest::PutLifecycleEventHookExecutionStatusRequest(const PutLifecycleEventHookExecutionStatusRequest &other)
    : CodeDeployRequest(new PutLifecycleEventHookExecutionStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutLifecycleEventHookExecutionStatusRequest object.
 */
PutLifecycleEventHookExecutionStatusRequest::PutLifecycleEventHookExecutionStatusRequest()
    : CodeDeployRequest(new PutLifecycleEventHookExecutionStatusRequestPrivate(CodeDeployRequest::PutLifecycleEventHookExecutionStatusAction, this))
{

}

bool PutLifecycleEventHookExecutionStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutLifecycleEventHookExecutionStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutLifecycleEventHookExecutionStatusResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * PutLifecycleEventHookExecutionStatusRequest::response(QNetworkReply * const reply) const
{
    return new PutLifecycleEventHookExecutionStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutLifecycleEventHookExecutionStatusRequestPrivate
 *
 * @brief  Private implementation for PutLifecycleEventHookExecutionStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutLifecycleEventHookExecutionStatusRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public PutLifecycleEventHookExecutionStatusRequest instance.
 */
PutLifecycleEventHookExecutionStatusRequestPrivate::PutLifecycleEventHookExecutionStatusRequestPrivate(
    const CodeDeployRequest::Action action, PutLifecycleEventHookExecutionStatusRequest * const q)
    : PutLifecycleEventHookExecutionStatusPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutLifecycleEventHookExecutionStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutLifecycleEventHookExecutionStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutLifecycleEventHookExecutionStatusRequest instance.
 */
PutLifecycleEventHookExecutionStatusRequestPrivate::PutLifecycleEventHookExecutionStatusRequestPrivate(
    const PutLifecycleEventHookExecutionStatusRequestPrivate &other, PutLifecycleEventHookExecutionStatusRequest * const q)
    : PutLifecycleEventHookExecutionStatusPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace AWS

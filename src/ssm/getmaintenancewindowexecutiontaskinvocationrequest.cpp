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

#include "getmaintenancewindowexecutiontaskinvocationrequest.h"
#include "getmaintenancewindowexecutiontaskinvocationrequest_p.h"
#include "getmaintenancewindowexecutiontaskinvocationresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  GetMaintenanceWindowExecutionTaskInvocationRequest
 *
 * @brief  Implements SSM GetMaintenanceWindowExecutionTaskInvocation requests.
 *
 * @see    SSMClient::getMaintenanceWindowExecutionTaskInvocation
 */

/**
 * @brief  Constructs a new GetMaintenanceWindowExecutionTaskInvocationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetMaintenanceWindowExecutionTaskInvocationRequest::GetMaintenanceWindowExecutionTaskInvocationRequest(const GetMaintenanceWindowExecutionTaskInvocationRequest &other)
    : SSMRequest(new GetMaintenanceWindowExecutionTaskInvocationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetMaintenanceWindowExecutionTaskInvocationRequest object.
 */
GetMaintenanceWindowExecutionTaskInvocationRequest::GetMaintenanceWindowExecutionTaskInvocationRequest()
    : SSMRequest(new GetMaintenanceWindowExecutionTaskInvocationRequestPrivate(SSMRequest::GetMaintenanceWindowExecutionTaskInvocationAction, this))
{

}

bool GetMaintenanceWindowExecutionTaskInvocationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetMaintenanceWindowExecutionTaskInvocationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetMaintenanceWindowExecutionTaskInvocationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * GetMaintenanceWindowExecutionTaskInvocationRequest::response(QNetworkReply * const reply) const
{
    return new GetMaintenanceWindowExecutionTaskInvocationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetMaintenanceWindowExecutionTaskInvocationRequestPrivate
 *
 * @brief  Private implementation for GetMaintenanceWindowExecutionTaskInvocationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMaintenanceWindowExecutionTaskInvocationRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public GetMaintenanceWindowExecutionTaskInvocationRequest instance.
 */
GetMaintenanceWindowExecutionTaskInvocationRequestPrivate::GetMaintenanceWindowExecutionTaskInvocationRequestPrivate(
    const SSMRequest::Action action, GetMaintenanceWindowExecutionTaskInvocationRequest * const q)
    : GetMaintenanceWindowExecutionTaskInvocationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetMaintenanceWindowExecutionTaskInvocationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetMaintenanceWindowExecutionTaskInvocationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetMaintenanceWindowExecutionTaskInvocationRequest instance.
 */
GetMaintenanceWindowExecutionTaskInvocationRequestPrivate::GetMaintenanceWindowExecutionTaskInvocationRequestPrivate(
    const GetMaintenanceWindowExecutionTaskInvocationRequestPrivate &other, GetMaintenanceWindowExecutionTaskInvocationRequest * const q)
    : GetMaintenanceWindowExecutionTaskInvocationPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS

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

#include "getmaintenancewindowexecutiontaskrequest.h"
#include "getmaintenancewindowexecutiontaskrequest_p.h"
#include "getmaintenancewindowexecutiontaskresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  GetMaintenanceWindowExecutionTaskRequest
 *
 * @brief  Implements SSM GetMaintenanceWindowExecutionTask requests.
 *
 * @see    SSMClient::getMaintenanceWindowExecutionTask
 */

/**
 * @brief  Constructs a new GetMaintenanceWindowExecutionTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMaintenanceWindowExecutionTaskResponse::GetMaintenanceWindowExecutionTaskResponse(

/**
 * @brief  Constructs a new GetMaintenanceWindowExecutionTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetMaintenanceWindowExecutionTaskRequest::GetMaintenanceWindowExecutionTaskRequest(const GetMaintenanceWindowExecutionTaskRequest &other)
    : SSMRequest(new GetMaintenanceWindowExecutionTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetMaintenanceWindowExecutionTaskRequest object.
 */
GetMaintenanceWindowExecutionTaskRequest::GetMaintenanceWindowExecutionTaskRequest()
    : SSMRequest(new GetMaintenanceWindowExecutionTaskRequestPrivate(SSMRequest::GetMaintenanceWindowExecutionTaskAction, this))
{

}

bool GetMaintenanceWindowExecutionTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetMaintenanceWindowExecutionTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetMaintenanceWindowExecutionTaskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * GetMaintenanceWindowExecutionTaskRequest::response(QNetworkReply * const reply) const
{
    return new GetMaintenanceWindowExecutionTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetMaintenanceWindowExecutionTaskRequestPrivate
 *
 * @brief  Private implementation for GetMaintenanceWindowExecutionTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMaintenanceWindowExecutionTaskRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public GetMaintenanceWindowExecutionTaskRequest instance.
 */
GetMaintenanceWindowExecutionTaskRequestPrivate::GetMaintenanceWindowExecutionTaskRequestPrivate(
    const SSMRequest::Action action, GetMaintenanceWindowExecutionTaskRequest * const q)
    : GetMaintenanceWindowExecutionTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetMaintenanceWindowExecutionTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetMaintenanceWindowExecutionTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetMaintenanceWindowExecutionTaskRequest instance.
 */
GetMaintenanceWindowExecutionTaskRequestPrivate::GetMaintenanceWindowExecutionTaskRequestPrivate(
    const GetMaintenanceWindowExecutionTaskRequestPrivate &other, GetMaintenanceWindowExecutionTaskRequest * const q)
    : GetMaintenanceWindowExecutionTaskPrivate(other, q)
{

}

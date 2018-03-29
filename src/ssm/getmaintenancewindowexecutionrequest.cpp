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

#include "getmaintenancewindowexecutionrequest.h"
#include "getmaintenancewindowexecutionrequest_p.h"
#include "getmaintenancewindowexecutionresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  GetMaintenanceWindowExecutionRequest
 *
 * @brief  Implements SSM GetMaintenanceWindowExecution requests.
 *
 * @see    SSMClient::getMaintenanceWindowExecution
 */

/**
 * @brief  Constructs a new GetMaintenanceWindowExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetMaintenanceWindowExecutionRequest::GetMaintenanceWindowExecutionRequest(const GetMaintenanceWindowExecutionRequest &other)
    : SSMRequest(new GetMaintenanceWindowExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetMaintenanceWindowExecutionRequest object.
 */
GetMaintenanceWindowExecutionRequest::GetMaintenanceWindowExecutionRequest()
    : SSMRequest(new GetMaintenanceWindowExecutionRequestPrivate(SSMRequest::GetMaintenanceWindowExecutionAction, this))
{

}

bool GetMaintenanceWindowExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetMaintenanceWindowExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetMaintenanceWindowExecutionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * GetMaintenanceWindowExecutionRequest::response(QNetworkReply * const reply) const
{
    return new GetMaintenanceWindowExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetMaintenanceWindowExecutionRequestPrivate
 *
 * @brief  Private implementation for GetMaintenanceWindowExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMaintenanceWindowExecutionRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public GetMaintenanceWindowExecutionRequest instance.
 */
GetMaintenanceWindowExecutionRequestPrivate::GetMaintenanceWindowExecutionRequestPrivate(
    const SSMRequest::Action action, GetMaintenanceWindowExecutionRequest * const q)
    : GetMaintenanceWindowExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetMaintenanceWindowExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetMaintenanceWindowExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetMaintenanceWindowExecutionRequest instance.
 */
GetMaintenanceWindowExecutionRequestPrivate::GetMaintenanceWindowExecutionRequestPrivate(
    const GetMaintenanceWindowExecutionRequestPrivate &other, GetMaintenanceWindowExecutionRequest * const q)
    : GetMaintenanceWindowExecutionPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws

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

#include "getmaintenancewindowtaskrequest.h"
#include "getmaintenancewindowtaskrequest_p.h"
#include "getmaintenancewindowtaskresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  GetMaintenanceWindowTaskRequest
 *
 * @brief  Implements SSM GetMaintenanceWindowTask requests.
 *
 * @see    SSMClient::getMaintenanceWindowTask
 */

/**
 * @brief  Constructs a new GetMaintenanceWindowTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetMaintenanceWindowTaskRequest::GetMaintenanceWindowTaskRequest(const GetMaintenanceWindowTaskRequest &other)
    : SSMRequest(new GetMaintenanceWindowTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetMaintenanceWindowTaskRequest object.
 */
GetMaintenanceWindowTaskRequest::GetMaintenanceWindowTaskRequest()
    : SSMRequest(new GetMaintenanceWindowTaskRequestPrivate(SSMRequest::GetMaintenanceWindowTaskAction, this))
{

}

bool GetMaintenanceWindowTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetMaintenanceWindowTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetMaintenanceWindowTaskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * GetMaintenanceWindowTaskRequest::response(QNetworkReply * const reply) const
{
    return new GetMaintenanceWindowTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetMaintenanceWindowTaskRequestPrivate
 *
 * @brief  Private implementation for GetMaintenanceWindowTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMaintenanceWindowTaskRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public GetMaintenanceWindowTaskRequest instance.
 */
GetMaintenanceWindowTaskRequestPrivate::GetMaintenanceWindowTaskRequestPrivate(
    const SSMRequest::Action action, GetMaintenanceWindowTaskRequest * const q)
    : GetMaintenanceWindowTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetMaintenanceWindowTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetMaintenanceWindowTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetMaintenanceWindowTaskRequest instance.
 */
GetMaintenanceWindowTaskRequestPrivate::GetMaintenanceWindowTaskRequestPrivate(
    const GetMaintenanceWindowTaskRequestPrivate &other, GetMaintenanceWindowTaskRequest * const q)
    : GetMaintenanceWindowTaskPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws

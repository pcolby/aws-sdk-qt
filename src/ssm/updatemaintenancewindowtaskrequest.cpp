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

#include "updatemaintenancewindowtaskrequest.h"
#include "updatemaintenancewindowtaskrequest_p.h"
#include "updatemaintenancewindowtaskresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  UpdateMaintenanceWindowTaskRequest
 *
 * @brief  Implements SSM UpdateMaintenanceWindowTask requests.
 *
 * @see    SSMClient::updateMaintenanceWindowTask
 */

/**
 * @brief  Constructs a new UpdateMaintenanceWindowTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateMaintenanceWindowTaskRequest::UpdateMaintenanceWindowTaskRequest(const UpdateMaintenanceWindowTaskRequest &other)
    : SSMRequest(new UpdateMaintenanceWindowTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateMaintenanceWindowTaskRequest object.
 */
UpdateMaintenanceWindowTaskRequest::UpdateMaintenanceWindowTaskRequest()
    : SSMRequest(new UpdateMaintenanceWindowTaskRequestPrivate(SSMRequest::UpdateMaintenanceWindowTaskAction, this))
{

}

bool UpdateMaintenanceWindowTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateMaintenanceWindowTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateMaintenanceWindowTaskResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMaintenanceWindowTaskRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMaintenanceWindowTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateMaintenanceWindowTaskRequestPrivate
 *
 * @brief  Private implementation for UpdateMaintenanceWindowTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMaintenanceWindowTaskRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public UpdateMaintenanceWindowTaskRequest instance.
 */
UpdateMaintenanceWindowTaskRequestPrivate::UpdateMaintenanceWindowTaskRequestPrivate(
    const SSMRequest::Action action, UpdateMaintenanceWindowTaskRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMaintenanceWindowTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateMaintenanceWindowTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateMaintenanceWindowTaskRequest instance.
 */
UpdateMaintenanceWindowTaskRequestPrivate::UpdateMaintenanceWindowTaskRequestPrivate(
    const UpdateMaintenanceWindowTaskRequestPrivate &other, UpdateMaintenanceWindowTaskRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws

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

#include "updatemaintenancewindowtargetrequest.h"
#include "updatemaintenancewindowtargetrequest_p.h"
#include "updatemaintenancewindowtargetresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  UpdateMaintenanceWindowTargetRequest
 *
 * @brief  Implements SSM UpdateMaintenanceWindowTarget requests.
 *
 * @see    SSMClient::updateMaintenanceWindowTarget
 */

/**
 * @brief  Constructs a new UpdateMaintenanceWindowTargetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateMaintenanceWindowTargetRequest::UpdateMaintenanceWindowTargetRequest(const UpdateMaintenanceWindowTargetRequest &other)
    : SSMRequest(new UpdateMaintenanceWindowTargetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateMaintenanceWindowTargetRequest object.
 */
UpdateMaintenanceWindowTargetRequest::UpdateMaintenanceWindowTargetRequest()
    : SSMRequest(new UpdateMaintenanceWindowTargetRequestPrivate(SSMRequest::UpdateMaintenanceWindowTargetAction, this))
{

}

bool UpdateMaintenanceWindowTargetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateMaintenanceWindowTargetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateMaintenanceWindowTargetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * UpdateMaintenanceWindowTargetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMaintenanceWindowTargetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateMaintenanceWindowTargetRequestPrivate
 *
 * @brief  Private implementation for UpdateMaintenanceWindowTargetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMaintenanceWindowTargetRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public UpdateMaintenanceWindowTargetRequest instance.
 */
UpdateMaintenanceWindowTargetRequestPrivate::UpdateMaintenanceWindowTargetRequestPrivate(
    const SSMRequest::Action action, UpdateMaintenanceWindowTargetRequest * const q)
    : UpdateMaintenanceWindowTargetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMaintenanceWindowTargetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateMaintenanceWindowTargetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateMaintenanceWindowTargetRequest instance.
 */
UpdateMaintenanceWindowTargetRequestPrivate::UpdateMaintenanceWindowTargetRequestPrivate(
    const UpdateMaintenanceWindowTargetRequestPrivate &other, UpdateMaintenanceWindowTargetRequest * const q)
    : UpdateMaintenanceWindowTargetPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS

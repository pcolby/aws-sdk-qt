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

#include "updatemaintenancewindowrequest.h"
#include "updatemaintenancewindowrequest_p.h"
#include "updatemaintenancewindowresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  UpdateMaintenanceWindowRequest
 *
 * @brief  Implements SSM UpdateMaintenanceWindow requests.
 *
 * @see    SSMClient::updateMaintenanceWindow
 */

/**
 * @brief  Constructs a new UpdateMaintenanceWindowResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateMaintenanceWindowResponse::UpdateMaintenanceWindowResponse(

/**
 * @brief  Constructs a new UpdateMaintenanceWindowRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateMaintenanceWindowRequest::UpdateMaintenanceWindowRequest(const UpdateMaintenanceWindowRequest &other)
    : SSMRequest(new UpdateMaintenanceWindowRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateMaintenanceWindowRequest object.
 */
UpdateMaintenanceWindowRequest::UpdateMaintenanceWindowRequest()
    : SSMRequest(new UpdateMaintenanceWindowRequestPrivate(SSMRequest::UpdateMaintenanceWindowAction, this))
{

}

bool UpdateMaintenanceWindowRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateMaintenanceWindowResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateMaintenanceWindowResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * UpdateMaintenanceWindowRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMaintenanceWindowResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateMaintenanceWindowRequestPrivate
 *
 * @brief  Private implementation for UpdateMaintenanceWindowRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMaintenanceWindowRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public UpdateMaintenanceWindowRequest instance.
 */
UpdateMaintenanceWindowRequestPrivate::UpdateMaintenanceWindowRequestPrivate(
    const SSMRequest::Action action, UpdateMaintenanceWindowRequest * const q)
    : UpdateMaintenanceWindowPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMaintenanceWindowRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateMaintenanceWindowRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateMaintenanceWindowRequest instance.
 */
UpdateMaintenanceWindowRequestPrivate::UpdateMaintenanceWindowRequestPrivate(
    const UpdateMaintenanceWindowRequestPrivate &other, UpdateMaintenanceWindowRequest * const q)
    : UpdateMaintenanceWindowPrivate(other, q)
{

}

} // namespace SSM
} // namespace AWS

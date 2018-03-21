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

#include "deregistertargetfrommaintenancewindowrequest.h"
#include "deregistertargetfrommaintenancewindowrequest_p.h"
#include "deregistertargetfrommaintenancewindowresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  DeregisterTargetFromMaintenanceWindowRequest
 *
 * @brief  Implements SSM DeregisterTargetFromMaintenanceWindow requests.
 *
 * @see    SSMClient::deregisterTargetFromMaintenanceWindow
 */

/**
 * @brief  Constructs a new DeregisterTargetFromMaintenanceWindowResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterTargetFromMaintenanceWindowResponse::DeregisterTargetFromMaintenanceWindowResponse(

/**
 * @brief  Constructs a new DeregisterTargetFromMaintenanceWindowRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterTargetFromMaintenanceWindowRequest::DeregisterTargetFromMaintenanceWindowRequest(const DeregisterTargetFromMaintenanceWindowRequest &other)
    : SSMRequest(new DeregisterTargetFromMaintenanceWindowRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterTargetFromMaintenanceWindowRequest object.
 */
DeregisterTargetFromMaintenanceWindowRequest::DeregisterTargetFromMaintenanceWindowRequest()
    : SSMRequest(new DeregisterTargetFromMaintenanceWindowRequestPrivate(SSMRequest::DeregisterTargetFromMaintenanceWindowAction, this))
{

}

bool DeregisterTargetFromMaintenanceWindowRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterTargetFromMaintenanceWindowResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterTargetFromMaintenanceWindowResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * DeregisterTargetFromMaintenanceWindowRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterTargetFromMaintenanceWindowResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterTargetFromMaintenanceWindowRequestPrivate
 *
 * @brief  Private implementation for DeregisterTargetFromMaintenanceWindowRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterTargetFromMaintenanceWindowRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DeregisterTargetFromMaintenanceWindowRequest instance.
 */
DeregisterTargetFromMaintenanceWindowRequestPrivate::DeregisterTargetFromMaintenanceWindowRequestPrivate(
    const SSMRequest::Action action, DeregisterTargetFromMaintenanceWindowRequest * const q)
    : DeregisterTargetFromMaintenanceWindowPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterTargetFromMaintenanceWindowRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterTargetFromMaintenanceWindowRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterTargetFromMaintenanceWindowRequest instance.
 */
DeregisterTargetFromMaintenanceWindowRequestPrivate::DeregisterTargetFromMaintenanceWindowRequestPrivate(
    const DeregisterTargetFromMaintenanceWindowRequestPrivate &other, DeregisterTargetFromMaintenanceWindowRequest * const q)
    : DeregisterTargetFromMaintenanceWindowPrivate(other, q)
{

}

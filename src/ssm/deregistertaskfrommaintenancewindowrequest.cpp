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

#include "deregistertaskfrommaintenancewindowrequest.h"
#include "deregistertaskfrommaintenancewindowrequest_p.h"
#include "deregistertaskfrommaintenancewindowresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  DeregisterTaskFromMaintenanceWindowRequest
 *
 * @brief  Implements SSM DeregisterTaskFromMaintenanceWindow requests.
 *
 * @see    SSMClient::deregisterTaskFromMaintenanceWindow
 */

/**
 * @brief  Constructs a new DeregisterTaskFromMaintenanceWindowRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterTaskFromMaintenanceWindowRequest::DeregisterTaskFromMaintenanceWindowRequest(const DeregisterTaskFromMaintenanceWindowRequest &other)
    : SSMRequest(new DeregisterTaskFromMaintenanceWindowRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterTaskFromMaintenanceWindowRequest object.
 */
DeregisterTaskFromMaintenanceWindowRequest::DeregisterTaskFromMaintenanceWindowRequest()
    : SSMRequest(new DeregisterTaskFromMaintenanceWindowRequestPrivate(SSMRequest::DeregisterTaskFromMaintenanceWindowAction, this))
{

}

bool DeregisterTaskFromMaintenanceWindowRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterTaskFromMaintenanceWindowResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterTaskFromMaintenanceWindowResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterTaskFromMaintenanceWindowRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterTaskFromMaintenanceWindowResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterTaskFromMaintenanceWindowRequestPrivate
 *
 * @brief  Private implementation for DeregisterTaskFromMaintenanceWindowRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterTaskFromMaintenanceWindowRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public DeregisterTaskFromMaintenanceWindowRequest instance.
 */
DeregisterTaskFromMaintenanceWindowRequestPrivate::DeregisterTaskFromMaintenanceWindowRequestPrivate(
    const SSMRequest::Action action, DeregisterTaskFromMaintenanceWindowRequest * const q)
    : DeregisterTaskFromMaintenanceWindowPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterTaskFromMaintenanceWindowRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterTaskFromMaintenanceWindowRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterTaskFromMaintenanceWindowRequest instance.
 */
DeregisterTaskFromMaintenanceWindowRequestPrivate::DeregisterTaskFromMaintenanceWindowRequestPrivate(
    const DeregisterTaskFromMaintenanceWindowRequestPrivate &other, DeregisterTaskFromMaintenanceWindowRequest * const q)
    : DeregisterTaskFromMaintenanceWindowPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws

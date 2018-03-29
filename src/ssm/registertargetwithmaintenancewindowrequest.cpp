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

#include "registertargetwithmaintenancewindowrequest.h"
#include "registertargetwithmaintenancewindowrequest_p.h"
#include "registertargetwithmaintenancewindowresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  RegisterTargetWithMaintenanceWindowRequest
 *
 * @brief  Implements SSM RegisterTargetWithMaintenanceWindow requests.
 *
 * @see    SSMClient::registerTargetWithMaintenanceWindow
 */

/**
 * @brief  Constructs a new RegisterTargetWithMaintenanceWindowRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterTargetWithMaintenanceWindowRequest::RegisterTargetWithMaintenanceWindowRequest(const RegisterTargetWithMaintenanceWindowRequest &other)
    : SSMRequest(new RegisterTargetWithMaintenanceWindowRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterTargetWithMaintenanceWindowRequest object.
 */
RegisterTargetWithMaintenanceWindowRequest::RegisterTargetWithMaintenanceWindowRequest()
    : SSMRequest(new RegisterTargetWithMaintenanceWindowRequestPrivate(SSMRequest::RegisterTargetWithMaintenanceWindowAction, this))
{

}

bool RegisterTargetWithMaintenanceWindowRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterTargetWithMaintenanceWindowResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterTargetWithMaintenanceWindowResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterTargetWithMaintenanceWindowRequest::response(QNetworkReply * const reply) const
{
    return new RegisterTargetWithMaintenanceWindowResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterTargetWithMaintenanceWindowRequestPrivate
 *
 * @brief  Private implementation for RegisterTargetWithMaintenanceWindowRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterTargetWithMaintenanceWindowRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public RegisterTargetWithMaintenanceWindowRequest instance.
 */
RegisterTargetWithMaintenanceWindowRequestPrivate::RegisterTargetWithMaintenanceWindowRequestPrivate(
    const SSMRequest::Action action, RegisterTargetWithMaintenanceWindowRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterTargetWithMaintenanceWindowRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterTargetWithMaintenanceWindowRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterTargetWithMaintenanceWindowRequest instance.
 */
RegisterTargetWithMaintenanceWindowRequestPrivate::RegisterTargetWithMaintenanceWindowRequestPrivate(
    const RegisterTargetWithMaintenanceWindowRequestPrivate &other, RegisterTargetWithMaintenanceWindowRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws

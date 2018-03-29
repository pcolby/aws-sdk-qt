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

#include "registertaskwithmaintenancewindowrequest.h"
#include "registertaskwithmaintenancewindowrequest_p.h"
#include "registertaskwithmaintenancewindowresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  RegisterTaskWithMaintenanceWindowRequest
 *
 * @brief  Implements SSM RegisterTaskWithMaintenanceWindow requests.
 *
 * @see    SSMClient::registerTaskWithMaintenanceWindow
 */

/**
 * @brief  Constructs a new RegisterTaskWithMaintenanceWindowRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterTaskWithMaintenanceWindowRequest::RegisterTaskWithMaintenanceWindowRequest(const RegisterTaskWithMaintenanceWindowRequest &other)
    : SSMRequest(new RegisterTaskWithMaintenanceWindowRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterTaskWithMaintenanceWindowRequest object.
 */
RegisterTaskWithMaintenanceWindowRequest::RegisterTaskWithMaintenanceWindowRequest()
    : SSMRequest(new RegisterTaskWithMaintenanceWindowRequestPrivate(SSMRequest::RegisterTaskWithMaintenanceWindowAction, this))
{

}

bool RegisterTaskWithMaintenanceWindowRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterTaskWithMaintenanceWindowResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterTaskWithMaintenanceWindowResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterTaskWithMaintenanceWindowRequest::response(QNetworkReply * const reply) const
{
    return new RegisterTaskWithMaintenanceWindowResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterTaskWithMaintenanceWindowRequestPrivate
 *
 * @brief  Private implementation for RegisterTaskWithMaintenanceWindowRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterTaskWithMaintenanceWindowRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public RegisterTaskWithMaintenanceWindowRequest instance.
 */
RegisterTaskWithMaintenanceWindowRequestPrivate::RegisterTaskWithMaintenanceWindowRequestPrivate(
    const SSMRequest::Action action, RegisterTaskWithMaintenanceWindowRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterTaskWithMaintenanceWindowRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterTaskWithMaintenanceWindowRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterTaskWithMaintenanceWindowRequest instance.
 */
RegisterTaskWithMaintenanceWindowRequestPrivate::RegisterTaskWithMaintenanceWindowRequestPrivate(
    const RegisterTaskWithMaintenanceWindowRequestPrivate &other, RegisterTaskWithMaintenanceWindowRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws

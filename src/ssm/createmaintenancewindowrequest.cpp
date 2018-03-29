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

#include "createmaintenancewindowrequest.h"
#include "createmaintenancewindowrequest_p.h"
#include "createmaintenancewindowresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  CreateMaintenanceWindowRequest
 *
 * @brief  Implements SSM CreateMaintenanceWindow requests.
 *
 * @see    SSMClient::createMaintenanceWindow
 */

/**
 * @brief  Constructs a new CreateMaintenanceWindowRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateMaintenanceWindowRequest::CreateMaintenanceWindowRequest(const CreateMaintenanceWindowRequest &other)
    : SSMRequest(new CreateMaintenanceWindowRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateMaintenanceWindowRequest object.
 */
CreateMaintenanceWindowRequest::CreateMaintenanceWindowRequest()
    : SSMRequest(new CreateMaintenanceWindowRequestPrivate(SSMRequest::CreateMaintenanceWindowAction, this))
{

}

bool CreateMaintenanceWindowRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateMaintenanceWindowResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateMaintenanceWindowResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMaintenanceWindowRequest::response(QNetworkReply * const reply) const
{
    return new CreateMaintenanceWindowResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateMaintenanceWindowRequestPrivate
 *
 * @brief  Private implementation for CreateMaintenanceWindowRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateMaintenanceWindowRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public CreateMaintenanceWindowRequest instance.
 */
CreateMaintenanceWindowRequestPrivate::CreateMaintenanceWindowRequestPrivate(
    const SSMRequest::Action action, CreateMaintenanceWindowRequest * const q)
    : CreateMaintenanceWindowPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateMaintenanceWindowRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateMaintenanceWindowRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateMaintenanceWindowRequest instance.
 */
CreateMaintenanceWindowRequestPrivate::CreateMaintenanceWindowRequestPrivate(
    const CreateMaintenanceWindowRequestPrivate &other, CreateMaintenanceWindowRequest * const q)
    : CreateMaintenanceWindowPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws

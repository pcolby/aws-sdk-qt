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

#include "startmaintenancerequest.h"
#include "startmaintenancerequest_p.h"
#include "startmaintenanceresponse.h"
#include "opsworkscmrequest_p.h"

namespace AWS {
namespace OpsWorksCM {

/**
 * @class  StartMaintenanceRequest
 *
 * @brief  Implements OpsWorksCM StartMaintenance requests.
 *
 * @see    OpsWorksCMClient::startMaintenance
 */

/**
 * @brief  Constructs a new StartMaintenanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartMaintenanceRequest::StartMaintenanceRequest(const StartMaintenanceRequest &other)
    : OpsWorksCMRequest(new StartMaintenanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartMaintenanceRequest object.
 */
StartMaintenanceRequest::StartMaintenanceRequest()
    : OpsWorksCMRequest(new StartMaintenanceRequestPrivate(OpsWorksCMRequest::StartMaintenanceAction, this))
{

}

bool StartMaintenanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartMaintenanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartMaintenanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksCMClient::send
 */
AwsAbstractResponse * StartMaintenanceRequest::response(QNetworkReply * const reply) const
{
    return new StartMaintenanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartMaintenanceRequestPrivate
 *
 * @brief  Private implementation for StartMaintenanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartMaintenanceRequestPrivate object.
 *
 * @param  action  OpsWorksCM action being performed.
 * @param  q       Pointer to this object's public StartMaintenanceRequest instance.
 */
StartMaintenanceRequestPrivate::StartMaintenanceRequestPrivate(
    const OpsWorksCMRequest::Action action, StartMaintenanceRequest * const q)
    : StartMaintenancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartMaintenanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartMaintenanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartMaintenanceRequest instance.
 */
StartMaintenanceRequestPrivate::StartMaintenanceRequestPrivate(
    const StartMaintenanceRequestPrivate &other, StartMaintenanceRequest * const q)
    : StartMaintenancePrivate(other, q)
{

}

} // namespace OpsWorksCM
} // namespace AWS

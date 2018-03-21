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

#include "getmaintenancewindowrequest.h"
#include "getmaintenancewindowrequest_p.h"
#include "getmaintenancewindowresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  GetMaintenanceWindowRequest
 *
 * @brief  Implements SSM GetMaintenanceWindow requests.
 *
 * @see    SSMClient::getMaintenanceWindow
 */

/**
 * @brief  Constructs a new GetMaintenanceWindowResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMaintenanceWindowResponse::GetMaintenanceWindowResponse(

/**
 * @brief  Constructs a new GetMaintenanceWindowRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetMaintenanceWindowRequest::GetMaintenanceWindowRequest(const GetMaintenanceWindowRequest &other)
    : SSMRequest(new GetMaintenanceWindowRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetMaintenanceWindowRequest object.
 */
GetMaintenanceWindowRequest::GetMaintenanceWindowRequest()
    : SSMRequest(new GetMaintenanceWindowRequestPrivate(SSMRequest::GetMaintenanceWindowAction, this))
{

}

bool GetMaintenanceWindowRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetMaintenanceWindowResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetMaintenanceWindowResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * GetMaintenanceWindowRequest::response(QNetworkReply * const reply) const
{
    return new GetMaintenanceWindowResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetMaintenanceWindowRequestPrivate
 *
 * @brief  Private implementation for GetMaintenanceWindowRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMaintenanceWindowRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public GetMaintenanceWindowRequest instance.
 */
GetMaintenanceWindowRequestPrivate::GetMaintenanceWindowRequestPrivate(
    const SSMRequest::Action action, GetMaintenanceWindowRequest * const q)
    : GetMaintenanceWindowPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetMaintenanceWindowRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetMaintenanceWindowRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetMaintenanceWindowRequest instance.
 */
GetMaintenanceWindowRequestPrivate::GetMaintenanceWindowRequestPrivate(
    const GetMaintenanceWindowRequestPrivate &other, GetMaintenanceWindowRequest * const q)
    : GetMaintenanceWindowPrivate(other, q)
{

}

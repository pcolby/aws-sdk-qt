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

#include "applypendingmaintenanceactionrequest.h"
#include "applypendingmaintenanceactionrequest_p.h"
#include "applypendingmaintenanceactionresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  ApplyPendingMaintenanceActionRequest
 *
 * @brief  Implements RDS ApplyPendingMaintenanceAction requests.
 *
 * @see    RDSClient::applyPendingMaintenanceAction
 */

/**
 * @brief  Constructs a new ApplyPendingMaintenanceActionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ApplyPendingMaintenanceActionResponse::ApplyPendingMaintenanceActionResponse(

/**
 * @brief  Constructs a new ApplyPendingMaintenanceActionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ApplyPendingMaintenanceActionRequest::ApplyPendingMaintenanceActionRequest(const ApplyPendingMaintenanceActionRequest &other)
    : RDSRequest(new ApplyPendingMaintenanceActionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ApplyPendingMaintenanceActionRequest object.
 */
ApplyPendingMaintenanceActionRequest::ApplyPendingMaintenanceActionRequest()
    : RDSRequest(new ApplyPendingMaintenanceActionRequestPrivate(RDSRequest::ApplyPendingMaintenanceActionAction, this))
{

}

bool ApplyPendingMaintenanceActionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ApplyPendingMaintenanceActionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ApplyPendingMaintenanceActionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * ApplyPendingMaintenanceActionRequest::response(QNetworkReply * const reply) const
{
    return new ApplyPendingMaintenanceActionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ApplyPendingMaintenanceActionRequestPrivate
 *
 * @brief  Private implementation for ApplyPendingMaintenanceActionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ApplyPendingMaintenanceActionRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public ApplyPendingMaintenanceActionRequest instance.
 */
ApplyPendingMaintenanceActionRequestPrivate::ApplyPendingMaintenanceActionRequestPrivate(
    const RDSRequest::Action action, ApplyPendingMaintenanceActionRequest * const q)
    : ApplyPendingMaintenanceActionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ApplyPendingMaintenanceActionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ApplyPendingMaintenanceActionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ApplyPendingMaintenanceActionRequest instance.
 */
ApplyPendingMaintenanceActionRequestPrivate::ApplyPendingMaintenanceActionRequestPrivate(
    const ApplyPendingMaintenanceActionRequestPrivate &other, ApplyPendingMaintenanceActionRequest * const q)
    : ApplyPendingMaintenanceActionPrivate(other, q)
{

}

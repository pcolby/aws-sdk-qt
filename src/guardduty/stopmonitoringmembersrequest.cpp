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

#include "stopmonitoringmembersrequest.h"
#include "stopmonitoringmembersrequest_p.h"
#include "stopmonitoringmembersresponse.h"
#include "guarddutyrequest_p.h"

namespace AWS {
namespace GuardDuty {

/**
 * @class  StopMonitoringMembersRequest
 *
 * @brief  Implements GuardDuty StopMonitoringMembers requests.
 *
 * @see    GuardDutyClient::stopMonitoringMembers
 */

/**
 * @brief  Constructs a new StopMonitoringMembersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopMonitoringMembersResponse::StopMonitoringMembersResponse(

/**
 * @brief  Constructs a new StopMonitoringMembersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopMonitoringMembersRequest::StopMonitoringMembersRequest(const StopMonitoringMembersRequest &other)
    : GuardDutyRequest(new StopMonitoringMembersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopMonitoringMembersRequest object.
 */
StopMonitoringMembersRequest::StopMonitoringMembersRequest()
    : GuardDutyRequest(new StopMonitoringMembersRequestPrivate(GuardDutyRequest::StopMonitoringMembersAction, this))
{

}

bool StopMonitoringMembersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopMonitoringMembersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopMonitoringMembersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
AwsAbstractResponse * StopMonitoringMembersRequest::response(QNetworkReply * const reply) const
{
    return new StopMonitoringMembersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopMonitoringMembersRequestPrivate
 *
 * @brief  Private implementation for StopMonitoringMembersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopMonitoringMembersRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public StopMonitoringMembersRequest instance.
 */
StopMonitoringMembersRequestPrivate::StopMonitoringMembersRequestPrivate(
    const GuardDutyRequest::Action action, StopMonitoringMembersRequest * const q)
    : StopMonitoringMembersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopMonitoringMembersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopMonitoringMembersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopMonitoringMembersRequest instance.
 */
StopMonitoringMembersRequestPrivate::StopMonitoringMembersRequestPrivate(
    const StopMonitoringMembersRequestPrivate &other, StopMonitoringMembersRequest * const q)
    : StopMonitoringMembersPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace AWS

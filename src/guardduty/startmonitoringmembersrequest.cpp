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

#include "startmonitoringmembersrequest.h"
#include "startmonitoringmembersrequest_p.h"
#include "startmonitoringmembersresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/**
 * @class  StartMonitoringMembersRequest
 *
 * @brief  Implements GuardDuty StartMonitoringMembers requests.
 *
 * @see    GuardDutyClient::startMonitoringMembers
 */

/**
 * @brief  Constructs a new StartMonitoringMembersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartMonitoringMembersRequest::StartMonitoringMembersRequest(const StartMonitoringMembersRequest &other)
    : GuardDutyRequest(new StartMonitoringMembersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartMonitoringMembersRequest object.
 */
StartMonitoringMembersRequest::StartMonitoringMembersRequest()
    : GuardDutyRequest(new StartMonitoringMembersRequestPrivate(GuardDutyRequest::StartMonitoringMembersAction, this))
{

}

bool StartMonitoringMembersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartMonitoringMembersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartMonitoringMembersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
QtAws::Core::AwsAbstractResponse * StartMonitoringMembersRequest::response(QNetworkReply * const reply) const
{
    return new StartMonitoringMembersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartMonitoringMembersRequestPrivate
 *
 * @brief  Private implementation for StartMonitoringMembersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartMonitoringMembersRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public StartMonitoringMembersRequest instance.
 */
StartMonitoringMembersRequestPrivate::StartMonitoringMembersRequestPrivate(
    const GuardDutyRequest::Action action, StartMonitoringMembersRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartMonitoringMembersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartMonitoringMembersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartMonitoringMembersRequest instance.
 */
StartMonitoringMembersRequestPrivate::StartMonitoringMembersRequestPrivate(
    const StartMonitoringMembersRequestPrivate &other, StartMonitoringMembersRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws

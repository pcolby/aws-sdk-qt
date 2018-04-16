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

#include "stopmonitoringmembersrequest.h"
#include "stopmonitoringmembersrequest_p.h"
#include "stopmonitoringmembersresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::StopMonitoringMembersRequest
 *
 * \brief The StopMonitoringMembersRequest class provides an interface for GuardDuty StopMonitoringMembers requests.
 *
 * \ingroup GuardDuty
 *
 *
 * \sa GuardDutyClient::stopMonitoringMembers
 */

/*!
 * @brief  Constructs a new StopMonitoringMembersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopMonitoringMembersRequest::StopMonitoringMembersRequest(const StopMonitoringMembersRequest &other)
    : GuardDutyRequest(new StopMonitoringMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new StopMonitoringMembersRequest object.
 */
StopMonitoringMembersRequest::StopMonitoringMembersRequest()
    : GuardDutyRequest(new StopMonitoringMembersRequestPrivate(GuardDutyRequest::StopMonitoringMembersAction, this))
{

}

/*!
 * \reimp
 */
bool StopMonitoringMembersRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an StopMonitoringMembersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopMonitoringMembersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
QtAws::Core::AwsAbstractResponse * StopMonitoringMembersRequest::response(QNetworkReply * const reply) const
{
    return new StopMonitoringMembersResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  StopMonitoringMembersRequestPrivate
 *
 * @brief  Private implementation for StopMonitoringMembersRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StopMonitoringMembersRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public StopMonitoringMembersRequest instance.
 */
StopMonitoringMembersRequestPrivate::StopMonitoringMembersRequestPrivate(
    const GuardDutyRequest::Action action, StopMonitoringMembersRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
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
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws

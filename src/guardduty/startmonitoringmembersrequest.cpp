/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "startmonitoringmembersrequest.h"
#include "startmonitoringmembersrequest_p.h"
#include "startmonitoringmembersresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::StartMonitoringMembersRequest
 * \brief The StartMonitoringMembersRequest class provides an interface for GuardDuty StartMonitoringMembers requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::startMonitoringMembers
 */

/*!
 * Constructs a copy of \a other.
 */
StartMonitoringMembersRequest::StartMonitoringMembersRequest(const StartMonitoringMembersRequest &other)
    : GuardDutyRequest(new StartMonitoringMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartMonitoringMembersRequest object.
 */
StartMonitoringMembersRequest::StartMonitoringMembersRequest()
    : GuardDutyRequest(new StartMonitoringMembersRequestPrivate(GuardDutyRequest::StartMonitoringMembersAction, this))
{

}

/*!
 * \reimp
 */
bool StartMonitoringMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartMonitoringMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartMonitoringMembersRequest::response(QNetworkReply * const reply) const
{
    return new StartMonitoringMembersResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::StartMonitoringMembersRequestPrivate
 * \brief The StartMonitoringMembersRequestPrivate class provides private implementation for StartMonitoringMembersRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a StartMonitoringMembersRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
StartMonitoringMembersRequestPrivate::StartMonitoringMembersRequestPrivate(
    const GuardDutyRequest::Action action, StartMonitoringMembersRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartMonitoringMembersRequest
 * class' copy constructor.
 */
StartMonitoringMembersRequestPrivate::StartMonitoringMembersRequestPrivate(
    const StartMonitoringMembersRequestPrivate &other, StartMonitoringMembersRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws

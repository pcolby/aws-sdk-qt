/*
    Copyright 2013-2018 Paul Colby

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

#include "invitemembersrequest.h"
#include "invitemembersrequest_p.h"
#include "invitemembersresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::InviteMembersRequest
 * \brief The InviteMembersRequest class provides an interface for GuardDuty InviteMembers requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::inviteMembers
 */

/*!
 * Constructs a copy of \a other.
 */
InviteMembersRequest::InviteMembersRequest(const InviteMembersRequest &other)
    : GuardDutyRequest(new InviteMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InviteMembersRequest object.
 */
InviteMembersRequest::InviteMembersRequest()
    : GuardDutyRequest(new InviteMembersRequestPrivate(GuardDutyRequest::InviteMembersAction, this))
{

}

/*!
 * \reimp
 */
bool InviteMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InviteMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InviteMembersRequest::response(QNetworkReply * const reply) const
{
    return new InviteMembersResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::InviteMembersRequestPrivate
 * \brief The InviteMembersRequestPrivate class provides private implementation for InviteMembersRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a InviteMembersRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
InviteMembersRequestPrivate::InviteMembersRequestPrivate(
    const GuardDutyRequest::Action action, InviteMembersRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InviteMembersRequest
 * class' copy constructor.
 */
InviteMembersRequestPrivate::InviteMembersRequestPrivate(
    const InviteMembersRequestPrivate &other, InviteMembersRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws

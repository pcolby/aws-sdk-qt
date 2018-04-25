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

#include "getmembersrequest.h"
#include "getmembersrequest_p.h"
#include "getmembersresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GetMembersRequest
 * \brief The GetMembersRequest class provides an interface for GuardDuty GetMembers requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::getMembers
 */

/*!
 * Constructs a copy of \a other.
 */
GetMembersRequest::GetMembersRequest(const GetMembersRequest &other)
    : GuardDutyRequest(new GetMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMembersRequest object.
 */
GetMembersRequest::GetMembersRequest()
    : GuardDutyRequest(new GetMembersRequestPrivate(GuardDutyRequest::GetMembersAction, this))
{

}

/*!
 * \reimp
 */
bool GetMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMembersRequest::response(QNetworkReply * const reply) const
{
    return new GetMembersResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::GetMembersRequestPrivate
 * \brief The GetMembersRequestPrivate class provides private implementation for GetMembersRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a GetMembersRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
GetMembersRequestPrivate::GetMembersRequestPrivate(
    const GuardDutyRequest::Action action, GetMembersRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMembersRequest
 * class' copy constructor.
 */
GetMembersRequestPrivate::GetMembersRequestPrivate(
    const GetMembersRequestPrivate &other, GetMembersRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws

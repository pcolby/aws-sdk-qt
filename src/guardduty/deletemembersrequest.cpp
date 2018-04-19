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

#include "deletemembersrequest.h"
#include "deletemembersrequest_p.h"
#include "deletemembersresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::DeleteMembersRequest
 * \brief The DeleteMembersRequest class provides an interface for GuardDuty DeleteMembers requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::deleteMembers
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMembersRequest::DeleteMembersRequest(const DeleteMembersRequest &other)
    : GuardDutyRequest(new DeleteMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMembersRequest object.
 */
DeleteMembersRequest::DeleteMembersRequest()
    : GuardDutyRequest(new DeleteMembersRequestPrivate(GuardDutyRequest::DeleteMembersAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMembersRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMembersResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::DeleteMembersRequestPrivate
 * \brief The DeleteMembersRequestPrivate class provides private implementation for DeleteMembersRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 *
 * Constructs a DeleteMembersRequestPrivate object for GuardDuty \a action with,
 * public implementation \a q.
 */
DeleteMembersRequestPrivate::DeleteMembersRequestPrivate(
    const GuardDutyRequest::Action action, DeleteMembersRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMembersRequest
 * class' copy constructor.
 */
DeleteMembersRequestPrivate::DeleteMembersRequestPrivate(
    const DeleteMembersRequestPrivate &other, DeleteMembersRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws

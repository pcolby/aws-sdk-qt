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

#include "deleteinvitationsrequest.h"
#include "deleteinvitationsrequest_p.h"
#include "deleteinvitationsresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::DeleteInvitationsRequest
 * \brief The DeleteInvitationsRequest class provides an interface for GuardDuty DeleteInvitations requests.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::deleteInvitations
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInvitationsRequest::DeleteInvitationsRequest(const DeleteInvitationsRequest &other)
    : GuardDutyRequest(new DeleteInvitationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInvitationsRequest object.
 */
DeleteInvitationsRequest::DeleteInvitationsRequest()
    : GuardDutyRequest(new DeleteInvitationsRequestPrivate(GuardDutyRequest::DeleteInvitationsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInvitationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInvitationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInvitationsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInvitationsResponse(*this, reply);
}

/*!
 * \class QtAws::GuardDuty::DeleteInvitationsRequestPrivate
 * \brief The DeleteInvitationsRequestPrivate class provides private implementation for DeleteInvitationsRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 *
 * Constructs a DeleteInvitationsRequestPrivate object for GuardDuty \a action with,
 * public implementation \a q.
 */
DeleteInvitationsRequestPrivate::DeleteInvitationsRequestPrivate(
    const GuardDutyRequest::Action action, DeleteInvitationsRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInvitationsRequest
 * class' copy constructor.
 */
DeleteInvitationsRequestPrivate::DeleteInvitationsRequestPrivate(
    const DeleteInvitationsRequestPrivate &other, DeleteInvitationsRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws

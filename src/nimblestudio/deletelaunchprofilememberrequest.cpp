/*
    Copyright 2013-2021 Paul Colby

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

#include "deletelaunchprofilememberrequest.h"
#include "deletelaunchprofilememberrequest_p.h"
#include "deletelaunchprofilememberresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::DeleteLaunchProfileMemberRequest
 * \brief The DeleteLaunchProfileMemberRequest class provides an interface for NimbleStudio DeleteLaunchProfileMember requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::deleteLaunchProfileMember
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLaunchProfileMemberRequest::DeleteLaunchProfileMemberRequest(const DeleteLaunchProfileMemberRequest &other)
    : NimbleStudioRequest(new DeleteLaunchProfileMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLaunchProfileMemberRequest object.
 */
DeleteLaunchProfileMemberRequest::DeleteLaunchProfileMemberRequest()
    : NimbleStudioRequest(new DeleteLaunchProfileMemberRequestPrivate(NimbleStudioRequest::DeleteLaunchProfileMemberAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLaunchProfileMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLaunchProfileMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLaunchProfileMemberRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLaunchProfileMemberResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::DeleteLaunchProfileMemberRequestPrivate
 * \brief The DeleteLaunchProfileMemberRequestPrivate class provides private implementation for DeleteLaunchProfileMemberRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a DeleteLaunchProfileMemberRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
DeleteLaunchProfileMemberRequestPrivate::DeleteLaunchProfileMemberRequestPrivate(
    const NimbleStudioRequest::Action action, DeleteLaunchProfileMemberRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLaunchProfileMemberRequest
 * class' copy constructor.
 */
DeleteLaunchProfileMemberRequestPrivate::DeleteLaunchProfileMemberRequestPrivate(
    const DeleteLaunchProfileMemberRequestPrivate &other, DeleteLaunchProfileMemberRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws

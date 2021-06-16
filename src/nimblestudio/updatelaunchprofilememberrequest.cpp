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

#include "updatelaunchprofilememberrequest.h"
#include "updatelaunchprofilememberrequest_p.h"
#include "updatelaunchprofilememberresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::UpdateLaunchProfileMemberRequest
 * \brief The UpdateLaunchProfileMemberRequest class provides an interface for NimbleStudio UpdateLaunchProfileMember requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::updateLaunchProfileMember
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLaunchProfileMemberRequest::UpdateLaunchProfileMemberRequest(const UpdateLaunchProfileMemberRequest &other)
    : NimbleStudioRequest(new UpdateLaunchProfileMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLaunchProfileMemberRequest object.
 */
UpdateLaunchProfileMemberRequest::UpdateLaunchProfileMemberRequest()
    : NimbleStudioRequest(new UpdateLaunchProfileMemberRequestPrivate(NimbleStudioRequest::UpdateLaunchProfileMemberAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLaunchProfileMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLaunchProfileMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLaunchProfileMemberRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLaunchProfileMemberResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::UpdateLaunchProfileMemberRequestPrivate
 * \brief The UpdateLaunchProfileMemberRequestPrivate class provides private implementation for UpdateLaunchProfileMemberRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a UpdateLaunchProfileMemberRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
UpdateLaunchProfileMemberRequestPrivate::UpdateLaunchProfileMemberRequestPrivate(
    const NimbleStudioRequest::Action action, UpdateLaunchProfileMemberRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLaunchProfileMemberRequest
 * class' copy constructor.
 */
UpdateLaunchProfileMemberRequestPrivate::UpdateLaunchProfileMemberRequestPrivate(
    const UpdateLaunchProfileMemberRequestPrivate &other, UpdateLaunchProfileMemberRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws

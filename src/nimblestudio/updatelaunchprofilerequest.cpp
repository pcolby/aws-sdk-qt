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

#include "updatelaunchprofilerequest.h"
#include "updatelaunchprofilerequest_p.h"
#include "updatelaunchprofileresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::UpdateLaunchProfileRequest
 * \brief The UpdateLaunchProfileRequest class provides an interface for NimbleStudio UpdateLaunchProfile requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::updateLaunchProfile
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLaunchProfileRequest::UpdateLaunchProfileRequest(const UpdateLaunchProfileRequest &other)
    : NimbleStudioRequest(new UpdateLaunchProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLaunchProfileRequest object.
 */
UpdateLaunchProfileRequest::UpdateLaunchProfileRequest()
    : NimbleStudioRequest(new UpdateLaunchProfileRequestPrivate(NimbleStudioRequest::UpdateLaunchProfileAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLaunchProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLaunchProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLaunchProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLaunchProfileResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::UpdateLaunchProfileRequestPrivate
 * \brief The UpdateLaunchProfileRequestPrivate class provides private implementation for UpdateLaunchProfileRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a UpdateLaunchProfileRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
UpdateLaunchProfileRequestPrivate::UpdateLaunchProfileRequestPrivate(
    const NimbleStudioRequest::Action action, UpdateLaunchProfileRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLaunchProfileRequest
 * class' copy constructor.
 */
UpdateLaunchProfileRequestPrivate::UpdateLaunchProfileRequestPrivate(
    const UpdateLaunchProfileRequestPrivate &other, UpdateLaunchProfileRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws

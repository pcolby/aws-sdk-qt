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

#include "deletelaunchprofilerequest.h"
#include "deletelaunchprofilerequest_p.h"
#include "deletelaunchprofileresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::DeleteLaunchProfileRequest
 * \brief The DeleteLaunchProfileRequest class provides an interface for NimbleStudio DeleteLaunchProfile requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::deleteLaunchProfile
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLaunchProfileRequest::DeleteLaunchProfileRequest(const DeleteLaunchProfileRequest &other)
    : NimbleStudioRequest(new DeleteLaunchProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLaunchProfileRequest object.
 */
DeleteLaunchProfileRequest::DeleteLaunchProfileRequest()
    : NimbleStudioRequest(new DeleteLaunchProfileRequestPrivate(NimbleStudioRequest::DeleteLaunchProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLaunchProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLaunchProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLaunchProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLaunchProfileResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::DeleteLaunchProfileRequestPrivate
 * \brief The DeleteLaunchProfileRequestPrivate class provides private implementation for DeleteLaunchProfileRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a DeleteLaunchProfileRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
DeleteLaunchProfileRequestPrivate::DeleteLaunchProfileRequestPrivate(
    const NimbleStudioRequest::Action action, DeleteLaunchProfileRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLaunchProfileRequest
 * class' copy constructor.
 */
DeleteLaunchProfileRequestPrivate::DeleteLaunchProfileRequestPrivate(
    const DeleteLaunchProfileRequestPrivate &other, DeleteLaunchProfileRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws

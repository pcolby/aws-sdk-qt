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

#include "getlaunchprofilerequest.h"
#include "getlaunchprofilerequest_p.h"
#include "getlaunchprofileresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetLaunchProfileRequest
 * \brief The GetLaunchProfileRequest class provides an interface for NimbleStudio GetLaunchProfile requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getLaunchProfile
 */

/*!
 * Constructs a copy of \a other.
 */
GetLaunchProfileRequest::GetLaunchProfileRequest(const GetLaunchProfileRequest &other)
    : NimbleStudioRequest(new GetLaunchProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLaunchProfileRequest object.
 */
GetLaunchProfileRequest::GetLaunchProfileRequest()
    : NimbleStudioRequest(new GetLaunchProfileRequestPrivate(NimbleStudioRequest::GetLaunchProfileAction, this))
{

}

/*!
 * \reimp
 */
bool GetLaunchProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLaunchProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLaunchProfileRequest::response(QNetworkReply * const reply) const
{
    return new GetLaunchProfileResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::GetLaunchProfileRequestPrivate
 * \brief The GetLaunchProfileRequestPrivate class provides private implementation for GetLaunchProfileRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetLaunchProfileRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
GetLaunchProfileRequestPrivate::GetLaunchProfileRequestPrivate(
    const NimbleStudioRequest::Action action, GetLaunchProfileRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLaunchProfileRequest
 * class' copy constructor.
 */
GetLaunchProfileRequestPrivate::GetLaunchProfileRequestPrivate(
    const GetLaunchProfileRequestPrivate &other, GetLaunchProfileRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws

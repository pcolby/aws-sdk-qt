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

#include "getlaunchprofiledetailsrequest.h"
#include "getlaunchprofiledetailsrequest_p.h"
#include "getlaunchprofiledetailsresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetLaunchProfileDetailsRequest
 * \brief The GetLaunchProfileDetailsRequest class provides an interface for NimbleStudio GetLaunchProfileDetails requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getLaunchProfileDetails
 */

/*!
 * Constructs a copy of \a other.
 */
GetLaunchProfileDetailsRequest::GetLaunchProfileDetailsRequest(const GetLaunchProfileDetailsRequest &other)
    : NimbleStudioRequest(new GetLaunchProfileDetailsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLaunchProfileDetailsRequest object.
 */
GetLaunchProfileDetailsRequest::GetLaunchProfileDetailsRequest()
    : NimbleStudioRequest(new GetLaunchProfileDetailsRequestPrivate(NimbleStudioRequest::GetLaunchProfileDetailsAction, this))
{

}

/*!
 * \reimp
 */
bool GetLaunchProfileDetailsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLaunchProfileDetailsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLaunchProfileDetailsRequest::response(QNetworkReply * const reply) const
{
    return new GetLaunchProfileDetailsResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::GetLaunchProfileDetailsRequestPrivate
 * \brief The GetLaunchProfileDetailsRequestPrivate class provides private implementation for GetLaunchProfileDetailsRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetLaunchProfileDetailsRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
GetLaunchProfileDetailsRequestPrivate::GetLaunchProfileDetailsRequestPrivate(
    const NimbleStudioRequest::Action action, GetLaunchProfileDetailsRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLaunchProfileDetailsRequest
 * class' copy constructor.
 */
GetLaunchProfileDetailsRequestPrivate::GetLaunchProfileDetailsRequestPrivate(
    const GetLaunchProfileDetailsRequestPrivate &other, GetLaunchProfileDetailsRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws

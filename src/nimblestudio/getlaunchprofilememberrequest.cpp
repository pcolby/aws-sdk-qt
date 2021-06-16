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

#include "getlaunchprofilememberrequest.h"
#include "getlaunchprofilememberrequest_p.h"
#include "getlaunchprofilememberresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetLaunchProfileMemberRequest
 * \brief The GetLaunchProfileMemberRequest class provides an interface for NimbleStudio GetLaunchProfileMember requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getLaunchProfileMember
 */

/*!
 * Constructs a copy of \a other.
 */
GetLaunchProfileMemberRequest::GetLaunchProfileMemberRequest(const GetLaunchProfileMemberRequest &other)
    : NimbleStudioRequest(new GetLaunchProfileMemberRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLaunchProfileMemberRequest object.
 */
GetLaunchProfileMemberRequest::GetLaunchProfileMemberRequest()
    : NimbleStudioRequest(new GetLaunchProfileMemberRequestPrivate(NimbleStudioRequest::GetLaunchProfileMemberAction, this))
{

}

/*!
 * \reimp
 */
bool GetLaunchProfileMemberRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLaunchProfileMemberResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLaunchProfileMemberRequest::response(QNetworkReply * const reply) const
{
    return new GetLaunchProfileMemberResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::GetLaunchProfileMemberRequestPrivate
 * \brief The GetLaunchProfileMemberRequestPrivate class provides private implementation for GetLaunchProfileMemberRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetLaunchProfileMemberRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
GetLaunchProfileMemberRequestPrivate::GetLaunchProfileMemberRequestPrivate(
    const NimbleStudioRequest::Action action, GetLaunchProfileMemberRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLaunchProfileMemberRequest
 * class' copy constructor.
 */
GetLaunchProfileMemberRequestPrivate::GetLaunchProfileMemberRequestPrivate(
    const GetLaunchProfileMemberRequestPrivate &other, GetLaunchProfileMemberRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws

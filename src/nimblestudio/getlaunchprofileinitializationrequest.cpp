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

#include "getlaunchprofileinitializationrequest.h"
#include "getlaunchprofileinitializationrequest_p.h"
#include "getlaunchprofileinitializationresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetLaunchProfileInitializationRequest
 * \brief The GetLaunchProfileInitializationRequest class provides an interface for NimbleStudio GetLaunchProfileInitialization requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getLaunchProfileInitialization
 */

/*!
 * Constructs a copy of \a other.
 */
GetLaunchProfileInitializationRequest::GetLaunchProfileInitializationRequest(const GetLaunchProfileInitializationRequest &other)
    : NimbleStudioRequest(new GetLaunchProfileInitializationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLaunchProfileInitializationRequest object.
 */
GetLaunchProfileInitializationRequest::GetLaunchProfileInitializationRequest()
    : NimbleStudioRequest(new GetLaunchProfileInitializationRequestPrivate(NimbleStudioRequest::GetLaunchProfileInitializationAction, this))
{

}

/*!
 * \reimp
 */
bool GetLaunchProfileInitializationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLaunchProfileInitializationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLaunchProfileInitializationRequest::response(QNetworkReply * const reply) const
{
    return new GetLaunchProfileInitializationResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::GetLaunchProfileInitializationRequestPrivate
 * \brief The GetLaunchProfileInitializationRequestPrivate class provides private implementation for GetLaunchProfileInitializationRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetLaunchProfileInitializationRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
GetLaunchProfileInitializationRequestPrivate::GetLaunchProfileInitializationRequestPrivate(
    const NimbleStudioRequest::Action action, GetLaunchProfileInitializationRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLaunchProfileInitializationRequest
 * class' copy constructor.
 */
GetLaunchProfileInitializationRequestPrivate::GetLaunchProfileInitializationRequestPrivate(
    const GetLaunchProfileInitializationRequestPrivate &other, GetLaunchProfileInitializationRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws

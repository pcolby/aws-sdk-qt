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

#include "createlaunchprofilerequest.h"
#include "createlaunchprofilerequest_p.h"
#include "createlaunchprofileresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::CreateLaunchProfileRequest
 * \brief The CreateLaunchProfileRequest class provides an interface for NimbleStudio CreateLaunchProfile requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::createLaunchProfile
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLaunchProfileRequest::CreateLaunchProfileRequest(const CreateLaunchProfileRequest &other)
    : NimbleStudioRequest(new CreateLaunchProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLaunchProfileRequest object.
 */
CreateLaunchProfileRequest::CreateLaunchProfileRequest()
    : NimbleStudioRequest(new CreateLaunchProfileRequestPrivate(NimbleStudioRequest::CreateLaunchProfileAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLaunchProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLaunchProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLaunchProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateLaunchProfileResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::CreateLaunchProfileRequestPrivate
 * \brief The CreateLaunchProfileRequestPrivate class provides private implementation for CreateLaunchProfileRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a CreateLaunchProfileRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
CreateLaunchProfileRequestPrivate::CreateLaunchProfileRequestPrivate(
    const NimbleStudioRequest::Action action, CreateLaunchProfileRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLaunchProfileRequest
 * class' copy constructor.
 */
CreateLaunchProfileRequestPrivate::CreateLaunchProfileRequestPrivate(
    const CreateLaunchProfileRequestPrivate &other, CreateLaunchProfileRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws

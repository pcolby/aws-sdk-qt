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

#include "createstudiocomponentrequest.h"
#include "createstudiocomponentrequest_p.h"
#include "createstudiocomponentresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::CreateStudioComponentRequest
 * \brief The CreateStudioComponentRequest class provides an interface for NimbleStudio CreateStudioComponent requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::createStudioComponent
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStudioComponentRequest::CreateStudioComponentRequest(const CreateStudioComponentRequest &other)
    : NimbleStudioRequest(new CreateStudioComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStudioComponentRequest object.
 */
CreateStudioComponentRequest::CreateStudioComponentRequest()
    : NimbleStudioRequest(new CreateStudioComponentRequestPrivate(NimbleStudioRequest::CreateStudioComponentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStudioComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStudioComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStudioComponentRequest::response(QNetworkReply * const reply) const
{
    return new CreateStudioComponentResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::CreateStudioComponentRequestPrivate
 * \brief The CreateStudioComponentRequestPrivate class provides private implementation for CreateStudioComponentRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a CreateStudioComponentRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
CreateStudioComponentRequestPrivate::CreateStudioComponentRequestPrivate(
    const NimbleStudioRequest::Action action, CreateStudioComponentRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStudioComponentRequest
 * class' copy constructor.
 */
CreateStudioComponentRequestPrivate::CreateStudioComponentRequestPrivate(
    const CreateStudioComponentRequestPrivate &other, CreateStudioComponentRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws

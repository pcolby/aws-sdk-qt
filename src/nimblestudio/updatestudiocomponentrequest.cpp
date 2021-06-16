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

#include "updatestudiocomponentrequest.h"
#include "updatestudiocomponentrequest_p.h"
#include "updatestudiocomponentresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::UpdateStudioComponentRequest
 * \brief The UpdateStudioComponentRequest class provides an interface for NimbleStudio UpdateStudioComponent requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::updateStudioComponent
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateStudioComponentRequest::UpdateStudioComponentRequest(const UpdateStudioComponentRequest &other)
    : NimbleStudioRequest(new UpdateStudioComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateStudioComponentRequest object.
 */
UpdateStudioComponentRequest::UpdateStudioComponentRequest()
    : NimbleStudioRequest(new UpdateStudioComponentRequestPrivate(NimbleStudioRequest::UpdateStudioComponentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateStudioComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateStudioComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStudioComponentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStudioComponentResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::UpdateStudioComponentRequestPrivate
 * \brief The UpdateStudioComponentRequestPrivate class provides private implementation for UpdateStudioComponentRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a UpdateStudioComponentRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
UpdateStudioComponentRequestPrivate::UpdateStudioComponentRequestPrivate(
    const NimbleStudioRequest::Action action, UpdateStudioComponentRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateStudioComponentRequest
 * class' copy constructor.
 */
UpdateStudioComponentRequestPrivate::UpdateStudioComponentRequestPrivate(
    const UpdateStudioComponentRequestPrivate &other, UpdateStudioComponentRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws

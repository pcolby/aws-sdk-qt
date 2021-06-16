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

#include "updatestudiorequest.h"
#include "updatestudiorequest_p.h"
#include "updatestudioresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::UpdateStudioRequest
 * \brief The UpdateStudioRequest class provides an interface for NimbleStudio UpdateStudio requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::updateStudio
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateStudioRequest::UpdateStudioRequest(const UpdateStudioRequest &other)
    : NimbleStudioRequest(new UpdateStudioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateStudioRequest object.
 */
UpdateStudioRequest::UpdateStudioRequest()
    : NimbleStudioRequest(new UpdateStudioRequestPrivate(NimbleStudioRequest::UpdateStudioAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateStudioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateStudioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStudioRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStudioResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::UpdateStudioRequestPrivate
 * \brief The UpdateStudioRequestPrivate class provides private implementation for UpdateStudioRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a UpdateStudioRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
UpdateStudioRequestPrivate::UpdateStudioRequestPrivate(
    const NimbleStudioRequest::Action action, UpdateStudioRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateStudioRequest
 * class' copy constructor.
 */
UpdateStudioRequestPrivate::UpdateStudioRequestPrivate(
    const UpdateStudioRequestPrivate &other, UpdateStudioRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws

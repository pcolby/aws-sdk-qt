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

#include "deletestudiocomponentrequest.h"
#include "deletestudiocomponentrequest_p.h"
#include "deletestudiocomponentresponse.h"
#include "nimblestudiorequest_p.h"

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::DeleteStudioComponentRequest
 * \brief The DeleteStudioComponentRequest class provides an interface for NimbleStudio DeleteStudioComponent requests.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::deleteStudioComponent
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStudioComponentRequest::DeleteStudioComponentRequest(const DeleteStudioComponentRequest &other)
    : NimbleStudioRequest(new DeleteStudioComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStudioComponentRequest object.
 */
DeleteStudioComponentRequest::DeleteStudioComponentRequest()
    : NimbleStudioRequest(new DeleteStudioComponentRequestPrivate(NimbleStudioRequest::DeleteStudioComponentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStudioComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStudioComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStudioComponentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStudioComponentResponse(*this, reply);
}

/*!
 * \class QtAws::NimbleStudio::DeleteStudioComponentRequestPrivate
 * \brief The DeleteStudioComponentRequestPrivate class provides private implementation for DeleteStudioComponentRequest.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a DeleteStudioComponentRequestPrivate object for NimbleStudio \a action,
 * with public implementation \a q.
 */
DeleteStudioComponentRequestPrivate::DeleteStudioComponentRequestPrivate(
    const NimbleStudioRequest::Action action, DeleteStudioComponentRequest * const q)
    : NimbleStudioRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStudioComponentRequest
 * class' copy constructor.
 */
DeleteStudioComponentRequestPrivate::DeleteStudioComponentRequestPrivate(
    const DeleteStudioComponentRequestPrivate &other, DeleteStudioComponentRequest * const q)
    : NimbleStudioRequestPrivate(other, q)
{

}

} // namespace NimbleStudio
} // namespace QtAws

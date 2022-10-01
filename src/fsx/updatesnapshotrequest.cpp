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

#include "updatesnapshotrequest.h"
#include "updatesnapshotrequest_p.h"
#include "updatesnapshotresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::UpdateSnapshotRequest
 * \brief The UpdateSnapshotRequest class provides an interface for FSx UpdateSnapshot requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::updateSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSnapshotRequest::UpdateSnapshotRequest(const UpdateSnapshotRequest &other)
    : FSxRequest(new UpdateSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSnapshotRequest object.
 */
UpdateSnapshotRequest::UpdateSnapshotRequest()
    : FSxRequest(new UpdateSnapshotRequestPrivate(FSxRequest::UpdateSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::UpdateSnapshotRequestPrivate
 * \brief The UpdateSnapshotRequestPrivate class provides private implementation for UpdateSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a UpdateSnapshotRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
UpdateSnapshotRequestPrivate::UpdateSnapshotRequestPrivate(
    const FSxRequest::Action action, UpdateSnapshotRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSnapshotRequest
 * class' copy constructor.
 */
UpdateSnapshotRequestPrivate::UpdateSnapshotRequestPrivate(
    const UpdateSnapshotRequestPrivate &other, UpdateSnapshotRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws

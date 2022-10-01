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

#include "deletesnapshotrequest.h"
#include "deletesnapshotrequest_p.h"
#include "deletesnapshotresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DeleteSnapshotRequest
 * \brief The DeleteSnapshotRequest class provides an interface for FSx DeleteSnapshot requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::deleteSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSnapshotRequest::DeleteSnapshotRequest(const DeleteSnapshotRequest &other)
    : FSxRequest(new DeleteSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSnapshotRequest object.
 */
DeleteSnapshotRequest::DeleteSnapshotRequest()
    : FSxRequest(new DeleteSnapshotRequestPrivate(FSxRequest::DeleteSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::DeleteSnapshotRequestPrivate
 * \brief The DeleteSnapshotRequestPrivate class provides private implementation for DeleteSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DeleteSnapshotRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
DeleteSnapshotRequestPrivate::DeleteSnapshotRequestPrivate(
    const FSxRequest::Action action, DeleteSnapshotRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSnapshotRequest
 * class' copy constructor.
 */
DeleteSnapshotRequestPrivate::DeleteSnapshotRequestPrivate(
    const DeleteSnapshotRequestPrivate &other, DeleteSnapshotRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws

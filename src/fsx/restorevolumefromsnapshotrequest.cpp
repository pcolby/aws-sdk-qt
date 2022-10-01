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

#include "restorevolumefromsnapshotrequest.h"
#include "restorevolumefromsnapshotrequest_p.h"
#include "restorevolumefromsnapshotresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::RestoreVolumeFromSnapshotRequest
 * \brief The RestoreVolumeFromSnapshotRequest class provides an interface for FSx RestoreVolumeFromSnapshot requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::restoreVolumeFromSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
RestoreVolumeFromSnapshotRequest::RestoreVolumeFromSnapshotRequest(const RestoreVolumeFromSnapshotRequest &other)
    : FSxRequest(new RestoreVolumeFromSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RestoreVolumeFromSnapshotRequest object.
 */
RestoreVolumeFromSnapshotRequest::RestoreVolumeFromSnapshotRequest()
    : FSxRequest(new RestoreVolumeFromSnapshotRequestPrivate(FSxRequest::RestoreVolumeFromSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool RestoreVolumeFromSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RestoreVolumeFromSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RestoreVolumeFromSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new RestoreVolumeFromSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::RestoreVolumeFromSnapshotRequestPrivate
 * \brief The RestoreVolumeFromSnapshotRequestPrivate class provides private implementation for RestoreVolumeFromSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a RestoreVolumeFromSnapshotRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
RestoreVolumeFromSnapshotRequestPrivate::RestoreVolumeFromSnapshotRequestPrivate(
    const FSxRequest::Action action, RestoreVolumeFromSnapshotRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RestoreVolumeFromSnapshotRequest
 * class' copy constructor.
 */
RestoreVolumeFromSnapshotRequestPrivate::RestoreVolumeFromSnapshotRequestPrivate(
    const RestoreVolumeFromSnapshotRequestPrivate &other, RestoreVolumeFromSnapshotRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws

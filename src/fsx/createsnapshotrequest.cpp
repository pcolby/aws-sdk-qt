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

#include "createsnapshotrequest.h"
#include "createsnapshotrequest_p.h"
#include "createsnapshotresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CreateSnapshotRequest
 * \brief The CreateSnapshotRequest class provides an interface for FSx CreateSnapshot requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::createSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSnapshotRequest::CreateSnapshotRequest(const CreateSnapshotRequest &other)
    : FSxRequest(new CreateSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSnapshotRequest object.
 */
CreateSnapshotRequest::CreateSnapshotRequest()
    : FSxRequest(new CreateSnapshotRequestPrivate(FSxRequest::CreateSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CreateSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::CreateSnapshotRequestPrivate
 * \brief The CreateSnapshotRequestPrivate class provides private implementation for CreateSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CreateSnapshotRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
CreateSnapshotRequestPrivate::CreateSnapshotRequestPrivate(
    const FSxRequest::Action action, CreateSnapshotRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSnapshotRequest
 * class' copy constructor.
 */
CreateSnapshotRequestPrivate::CreateSnapshotRequestPrivate(
    const CreateSnapshotRequestPrivate &other, CreateSnapshotRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws

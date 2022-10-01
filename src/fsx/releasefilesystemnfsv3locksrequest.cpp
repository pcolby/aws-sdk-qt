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

#include "releasefilesystemnfsv3locksrequest.h"
#include "releasefilesystemnfsv3locksrequest_p.h"
#include "releasefilesystemnfsv3locksresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::ReleaseFileSystemNfsV3LocksRequest
 * \brief The ReleaseFileSystemNfsV3LocksRequest class provides an interface for FSx ReleaseFileSystemNfsV3Locks requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::releaseFileSystemNfsV3Locks
 */

/*!
 * Constructs a copy of \a other.
 */
ReleaseFileSystemNfsV3LocksRequest::ReleaseFileSystemNfsV3LocksRequest(const ReleaseFileSystemNfsV3LocksRequest &other)
    : FSxRequest(new ReleaseFileSystemNfsV3LocksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ReleaseFileSystemNfsV3LocksRequest object.
 */
ReleaseFileSystemNfsV3LocksRequest::ReleaseFileSystemNfsV3LocksRequest()
    : FSxRequest(new ReleaseFileSystemNfsV3LocksRequestPrivate(FSxRequest::ReleaseFileSystemNfsV3LocksAction, this))
{

}

/*!
 * \reimp
 */
bool ReleaseFileSystemNfsV3LocksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ReleaseFileSystemNfsV3LocksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ReleaseFileSystemNfsV3LocksRequest::response(QNetworkReply * const reply) const
{
    return new ReleaseFileSystemNfsV3LocksResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::ReleaseFileSystemNfsV3LocksRequestPrivate
 * \brief The ReleaseFileSystemNfsV3LocksRequestPrivate class provides private implementation for ReleaseFileSystemNfsV3LocksRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a ReleaseFileSystemNfsV3LocksRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
ReleaseFileSystemNfsV3LocksRequestPrivate::ReleaseFileSystemNfsV3LocksRequestPrivate(
    const FSxRequest::Action action, ReleaseFileSystemNfsV3LocksRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ReleaseFileSystemNfsV3LocksRequest
 * class' copy constructor.
 */
ReleaseFileSystemNfsV3LocksRequestPrivate::ReleaseFileSystemNfsV3LocksRequestPrivate(
    const ReleaseFileSystemNfsV3LocksRequestPrivate &other, ReleaseFileSystemNfsV3LocksRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws

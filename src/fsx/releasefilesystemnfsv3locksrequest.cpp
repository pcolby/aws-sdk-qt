// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

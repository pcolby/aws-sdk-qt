// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesnapshotsrequest.h"
#include "describesnapshotsrequest_p.h"
#include "describesnapshotsresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DescribeSnapshotsRequest
 * \brief The DescribeSnapshotsRequest class provides an interface for FSx DescribeSnapshots requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::describeSnapshots
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSnapshotsRequest::DescribeSnapshotsRequest(const DescribeSnapshotsRequest &other)
    : FSxRequest(new DescribeSnapshotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSnapshotsRequest object.
 */
DescribeSnapshotsRequest::DescribeSnapshotsRequest()
    : FSxRequest(new DescribeSnapshotsRequestPrivate(FSxRequest::DescribeSnapshotsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSnapshotsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSnapshotsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSnapshotsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSnapshotsResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::DescribeSnapshotsRequestPrivate
 * \brief The DescribeSnapshotsRequestPrivate class provides private implementation for DescribeSnapshotsRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DescribeSnapshotsRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
DescribeSnapshotsRequestPrivate::DescribeSnapshotsRequestPrivate(
    const FSxRequest::Action action, DescribeSnapshotsRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSnapshotsRequest
 * class' copy constructor.
 */
DescribeSnapshotsRequestPrivate::DescribeSnapshotsRequestPrivate(
    const DescribeSnapshotsRequestPrivate &other, DescribeSnapshotsRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws

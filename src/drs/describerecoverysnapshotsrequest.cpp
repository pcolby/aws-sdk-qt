// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerecoverysnapshotsrequest.h"
#include "describerecoverysnapshotsrequest_p.h"
#include "describerecoverysnapshotsresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::DescribeRecoverySnapshotsRequest
 * \brief The DescribeRecoverySnapshotsRequest class provides an interface for Drs DescribeRecoverySnapshots requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::describeRecoverySnapshots
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRecoverySnapshotsRequest::DescribeRecoverySnapshotsRequest(const DescribeRecoverySnapshotsRequest &other)
    : DrsRequest(new DescribeRecoverySnapshotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRecoverySnapshotsRequest object.
 */
DescribeRecoverySnapshotsRequest::DescribeRecoverySnapshotsRequest()
    : DrsRequest(new DescribeRecoverySnapshotsRequestPrivate(DrsRequest::DescribeRecoverySnapshotsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRecoverySnapshotsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRecoverySnapshotsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRecoverySnapshotsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRecoverySnapshotsResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::DescribeRecoverySnapshotsRequestPrivate
 * \brief The DescribeRecoverySnapshotsRequestPrivate class provides private implementation for DescribeRecoverySnapshotsRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a DescribeRecoverySnapshotsRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
DescribeRecoverySnapshotsRequestPrivate::DescribeRecoverySnapshotsRequestPrivate(
    const DrsRequest::Action action, DescribeRecoverySnapshotsRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRecoverySnapshotsRequest
 * class' copy constructor.
 */
DescribeRecoverySnapshotsRequestPrivate::DescribeRecoverySnapshotsRequestPrivate(
    const DescribeRecoverySnapshotsRequestPrivate &other, DescribeRecoverySnapshotsRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws

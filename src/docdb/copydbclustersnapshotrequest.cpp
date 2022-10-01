// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "copydbclustersnapshotrequest.h"
#include "copydbclustersnapshotrequest_p.h"
#include "copydbclustersnapshotresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CopyDBClusterSnapshotRequest
 * \brief The CopyDBClusterSnapshotRequest class provides an interface for DocDb CopyDBClusterSnapshot requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::copyDBClusterSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
CopyDBClusterSnapshotRequest::CopyDBClusterSnapshotRequest(const CopyDBClusterSnapshotRequest &other)
    : DocDbRequest(new CopyDBClusterSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CopyDBClusterSnapshotRequest object.
 */
CopyDBClusterSnapshotRequest::CopyDBClusterSnapshotRequest()
    : DocDbRequest(new CopyDBClusterSnapshotRequestPrivate(DocDbRequest::CopyDBClusterSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool CopyDBClusterSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CopyDBClusterSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CopyDBClusterSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CopyDBClusterSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::CopyDBClusterSnapshotRequestPrivate
 * \brief The CopyDBClusterSnapshotRequestPrivate class provides private implementation for CopyDBClusterSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CopyDBClusterSnapshotRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
CopyDBClusterSnapshotRequestPrivate::CopyDBClusterSnapshotRequestPrivate(
    const DocDbRequest::Action action, CopyDBClusterSnapshotRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CopyDBClusterSnapshotRequest
 * class' copy constructor.
 */
CopyDBClusterSnapshotRequestPrivate::CopyDBClusterSnapshotRequestPrivate(
    const CopyDBClusterSnapshotRequestPrivate &other, CopyDBClusterSnapshotRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdbclustersnapshotrequest.h"
#include "createdbclustersnapshotrequest_p.h"
#include "createdbclustersnapshotresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CreateDBClusterSnapshotRequest
 * \brief The CreateDBClusterSnapshotRequest class provides an interface for DocDb CreateDBClusterSnapshot requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::createDBClusterSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDBClusterSnapshotRequest::CreateDBClusterSnapshotRequest(const CreateDBClusterSnapshotRequest &other)
    : DocDbRequest(new CreateDBClusterSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDBClusterSnapshotRequest object.
 */
CreateDBClusterSnapshotRequest::CreateDBClusterSnapshotRequest()
    : DocDbRequest(new CreateDBClusterSnapshotRequestPrivate(DocDbRequest::CreateDBClusterSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDBClusterSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDBClusterSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDBClusterSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBClusterSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::CreateDBClusterSnapshotRequestPrivate
 * \brief The CreateDBClusterSnapshotRequestPrivate class provides private implementation for CreateDBClusterSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CreateDBClusterSnapshotRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
CreateDBClusterSnapshotRequestPrivate::CreateDBClusterSnapshotRequestPrivate(
    const DocDbRequest::Action action, CreateDBClusterSnapshotRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDBClusterSnapshotRequest
 * class' copy constructor.
 */
CreateDBClusterSnapshotRequestPrivate::CreateDBClusterSnapshotRequestPrivate(
    const CreateDBClusterSnapshotRequestPrivate &other, CreateDBClusterSnapshotRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws

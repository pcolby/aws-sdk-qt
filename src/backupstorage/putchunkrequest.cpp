// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putchunkrequest.h"
#include "putchunkrequest_p.h"
#include "putchunkresponse.h"
#include "backupstoragerequest_p.h"

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::PutChunkRequest
 * \brief The PutChunkRequest class provides an interface for BackupStorage PutChunk requests.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::putChunk
 */

/*!
 * Constructs a copy of \a other.
 */
PutChunkRequest::PutChunkRequest(const PutChunkRequest &other)
    : BackupStorageRequest(new PutChunkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutChunkRequest object.
 */
PutChunkRequest::PutChunkRequest()
    : BackupStorageRequest(new PutChunkRequestPrivate(BackupStorageRequest::PutChunkAction, this))
{

}

/*!
 * \reimp
 */
bool PutChunkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutChunkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutChunkRequest::response(QNetworkReply * const reply) const
{
    return new PutChunkResponse(*this, reply);
}

/*!
 * \class QtAws::BackupStorage::PutChunkRequestPrivate
 * \brief The PutChunkRequestPrivate class provides private implementation for PutChunkRequest.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a PutChunkRequestPrivate object for BackupStorage \a action,
 * with public implementation \a q.
 */
PutChunkRequestPrivate::PutChunkRequestPrivate(
    const BackupStorageRequest::Action action, PutChunkRequest * const q)
    : BackupStorageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutChunkRequest
 * class' copy constructor.
 */
PutChunkRequestPrivate::PutChunkRequestPrivate(
    const PutChunkRequestPrivate &other, PutChunkRequest * const q)
    : BackupStorageRequestPrivate(other, q)
{

}

} // namespace BackupStorage
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getchunkrequest.h"
#include "getchunkrequest_p.h"
#include "getchunkresponse.h"
#include "backupstoragerequest_p.h"

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::GetChunkRequest
 * \brief The GetChunkRequest class provides an interface for BackupStorage GetChunk requests.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::getChunk
 */

/*!
 * Constructs a copy of \a other.
 */
GetChunkRequest::GetChunkRequest(const GetChunkRequest &other)
    : BackupStorageRequest(new GetChunkRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetChunkRequest object.
 */
GetChunkRequest::GetChunkRequest()
    : BackupStorageRequest(new GetChunkRequestPrivate(BackupStorageRequest::GetChunkAction, this))
{

}

/*!
 * \reimp
 */
bool GetChunkRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetChunkResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetChunkRequest::response(QNetworkReply * const reply) const
{
    return new GetChunkResponse(*this, reply);
}

/*!
 * \class QtAws::BackupStorage::GetChunkRequestPrivate
 * \brief The GetChunkRequestPrivate class provides private implementation for GetChunkRequest.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a GetChunkRequestPrivate object for BackupStorage \a action,
 * with public implementation \a q.
 */
GetChunkRequestPrivate::GetChunkRequestPrivate(
    const BackupStorageRequest::Action action, GetChunkRequest * const q)
    : BackupStorageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetChunkRequest
 * class' copy constructor.
 */
GetChunkRequestPrivate::GetChunkRequestPrivate(
    const GetChunkRequestPrivate &other, GetChunkRequest * const q)
    : BackupStorageRequestPrivate(other, q)
{

}

} // namespace BackupStorage
} // namespace QtAws

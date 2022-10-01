// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listchunksrequest.h"
#include "listchunksrequest_p.h"
#include "listchunksresponse.h"
#include "backupstoragerequest_p.h"

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::ListChunksRequest
 * \brief The ListChunksRequest class provides an interface for BackupStorage ListChunks requests.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::listChunks
 */

/*!
 * Constructs a copy of \a other.
 */
ListChunksRequest::ListChunksRequest(const ListChunksRequest &other)
    : BackupStorageRequest(new ListChunksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListChunksRequest object.
 */
ListChunksRequest::ListChunksRequest()
    : BackupStorageRequest(new ListChunksRequestPrivate(BackupStorageRequest::ListChunksAction, this))
{

}

/*!
 * \reimp
 */
bool ListChunksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListChunksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListChunksRequest::response(QNetworkReply * const reply) const
{
    return new ListChunksResponse(*this, reply);
}

/*!
 * \class QtAws::BackupStorage::ListChunksRequestPrivate
 * \brief The ListChunksRequestPrivate class provides private implementation for ListChunksRequest.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a ListChunksRequestPrivate object for BackupStorage \a action,
 * with public implementation \a q.
 */
ListChunksRequestPrivate::ListChunksRequestPrivate(
    const BackupStorageRequest::Action action, ListChunksRequest * const q)
    : BackupStorageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListChunksRequest
 * class' copy constructor.
 */
ListChunksRequestPrivate::ListChunksRequestPrivate(
    const ListChunksRequestPrivate &other, ListChunksRequest * const q)
    : BackupStorageRequestPrivate(other, q)
{

}

} // namespace BackupStorage
} // namespace QtAws

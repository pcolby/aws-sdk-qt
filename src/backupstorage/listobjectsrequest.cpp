// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listobjectsrequest.h"
#include "listobjectsrequest_p.h"
#include "listobjectsresponse.h"
#include "backupstoragerequest_p.h"

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::ListObjectsRequest
 * \brief The ListObjectsRequest class provides an interface for BackupStorage ListObjects requests.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::listObjects
 */

/*!
 * Constructs a copy of \a other.
 */
ListObjectsRequest::ListObjectsRequest(const ListObjectsRequest &other)
    : BackupStorageRequest(new ListObjectsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListObjectsRequest object.
 */
ListObjectsRequest::ListObjectsRequest()
    : BackupStorageRequest(new ListObjectsRequestPrivate(BackupStorageRequest::ListObjectsAction, this))
{

}

/*!
 * \reimp
 */
bool ListObjectsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListObjectsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListObjectsRequest::response(QNetworkReply * const reply) const
{
    return new ListObjectsResponse(*this, reply);
}

/*!
 * \class QtAws::BackupStorage::ListObjectsRequestPrivate
 * \brief The ListObjectsRequestPrivate class provides private implementation for ListObjectsRequest.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a ListObjectsRequestPrivate object for BackupStorage \a action,
 * with public implementation \a q.
 */
ListObjectsRequestPrivate::ListObjectsRequestPrivate(
    const BackupStorageRequest::Action action, ListObjectsRequest * const q)
    : BackupStorageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListObjectsRequest
 * class' copy constructor.
 */
ListObjectsRequestPrivate::ListObjectsRequestPrivate(
    const ListObjectsRequestPrivate &other, ListObjectsRequest * const q)
    : BackupStorageRequestPrivate(other, q)
{

}

} // namespace BackupStorage
} // namespace QtAws

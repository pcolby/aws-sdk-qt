// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteobjectrequest.h"
#include "deleteobjectrequest_p.h"
#include "deleteobjectresponse.h"
#include "backupstoragerequest_p.h"

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::DeleteObjectRequest
 * \brief The DeleteObjectRequest class provides an interface for BackupStorage DeleteObject requests.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::deleteObject
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteObjectRequest::DeleteObjectRequest(const DeleteObjectRequest &other)
    : BackupStorageRequest(new DeleteObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteObjectRequest object.
 */
DeleteObjectRequest::DeleteObjectRequest()
    : BackupStorageRequest(new DeleteObjectRequestPrivate(BackupStorageRequest::DeleteObjectAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteObjectRequest::response(QNetworkReply * const reply) const
{
    return new DeleteObjectResponse(*this, reply);
}

/*!
 * \class QtAws::BackupStorage::DeleteObjectRequestPrivate
 * \brief The DeleteObjectRequestPrivate class provides private implementation for DeleteObjectRequest.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a DeleteObjectRequestPrivate object for BackupStorage \a action,
 * with public implementation \a q.
 */
DeleteObjectRequestPrivate::DeleteObjectRequestPrivate(
    const BackupStorageRequest::Action action, DeleteObjectRequest * const q)
    : BackupStorageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteObjectRequest
 * class' copy constructor.
 */
DeleteObjectRequestPrivate::DeleteObjectRequestPrivate(
    const DeleteObjectRequestPrivate &other, DeleteObjectRequest * const q)
    : BackupStorageRequestPrivate(other, q)
{

}

} // namespace BackupStorage
} // namespace QtAws

/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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

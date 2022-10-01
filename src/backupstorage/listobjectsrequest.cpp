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

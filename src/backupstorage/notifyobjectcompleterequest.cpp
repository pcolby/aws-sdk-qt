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

#include "notifyobjectcompleterequest.h"
#include "notifyobjectcompleterequest_p.h"
#include "notifyobjectcompleteresponse.h"
#include "backupstoragerequest_p.h"

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::NotifyObjectCompleteRequest
 * \brief The NotifyObjectCompleteRequest class provides an interface for BackupStorage NotifyObjectComplete requests.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::notifyObjectComplete
 */

/*!
 * Constructs a copy of \a other.
 */
NotifyObjectCompleteRequest::NotifyObjectCompleteRequest(const NotifyObjectCompleteRequest &other)
    : BackupStorageRequest(new NotifyObjectCompleteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a NotifyObjectCompleteRequest object.
 */
NotifyObjectCompleteRequest::NotifyObjectCompleteRequest()
    : BackupStorageRequest(new NotifyObjectCompleteRequestPrivate(BackupStorageRequest::NotifyObjectCompleteAction, this))
{

}

/*!
 * \reimp
 */
bool NotifyObjectCompleteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a NotifyObjectCompleteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * NotifyObjectCompleteRequest::response(QNetworkReply * const reply) const
{
    return new NotifyObjectCompleteResponse(*this, reply);
}

/*!
 * \class QtAws::BackupStorage::NotifyObjectCompleteRequestPrivate
 * \brief The NotifyObjectCompleteRequestPrivate class provides private implementation for NotifyObjectCompleteRequest.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a NotifyObjectCompleteRequestPrivate object for BackupStorage \a action,
 * with public implementation \a q.
 */
NotifyObjectCompleteRequestPrivate::NotifyObjectCompleteRequestPrivate(
    const BackupStorageRequest::Action action, NotifyObjectCompleteRequest * const q)
    : BackupStorageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the NotifyObjectCompleteRequest
 * class' copy constructor.
 */
NotifyObjectCompleteRequestPrivate::NotifyObjectCompleteRequestPrivate(
    const NotifyObjectCompleteRequestPrivate &other, NotifyObjectCompleteRequest * const q)
    : BackupStorageRequestPrivate(other, q)
{

}

} // namespace BackupStorage
} // namespace QtAws

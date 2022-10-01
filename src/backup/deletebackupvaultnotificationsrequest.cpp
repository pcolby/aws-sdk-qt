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

#include "deletebackupvaultnotificationsrequest.h"
#include "deletebackupvaultnotificationsrequest_p.h"
#include "deletebackupvaultnotificationsresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteBackupVaultNotificationsRequest
 * \brief The DeleteBackupVaultNotificationsRequest class provides an interface for Backup DeleteBackupVaultNotifications requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteBackupVaultNotifications
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackupVaultNotificationsRequest::DeleteBackupVaultNotificationsRequest(const DeleteBackupVaultNotificationsRequest &other)
    : BackupRequest(new DeleteBackupVaultNotificationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackupVaultNotificationsRequest object.
 */
DeleteBackupVaultNotificationsRequest::DeleteBackupVaultNotificationsRequest()
    : BackupRequest(new DeleteBackupVaultNotificationsRequestPrivate(BackupRequest::DeleteBackupVaultNotificationsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackupVaultNotificationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackupVaultNotificationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackupVaultNotificationsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackupVaultNotificationsResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DeleteBackupVaultNotificationsRequestPrivate
 * \brief The DeleteBackupVaultNotificationsRequestPrivate class provides private implementation for DeleteBackupVaultNotificationsRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteBackupVaultNotificationsRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DeleteBackupVaultNotificationsRequestPrivate::DeleteBackupVaultNotificationsRequestPrivate(
    const BackupRequest::Action action, DeleteBackupVaultNotificationsRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackupVaultNotificationsRequest
 * class' copy constructor.
 */
DeleteBackupVaultNotificationsRequestPrivate::DeleteBackupVaultNotificationsRequestPrivate(
    const DeleteBackupVaultNotificationsRequestPrivate &other, DeleteBackupVaultNotificationsRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

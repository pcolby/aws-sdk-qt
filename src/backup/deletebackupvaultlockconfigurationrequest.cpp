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

#include "deletebackupvaultlockconfigurationrequest.h"
#include "deletebackupvaultlockconfigurationrequest_p.h"
#include "deletebackupvaultlockconfigurationresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteBackupVaultLockConfigurationRequest
 * \brief The DeleteBackupVaultLockConfigurationRequest class provides an interface for Backup DeleteBackupVaultLockConfiguration requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteBackupVaultLockConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackupVaultLockConfigurationRequest::DeleteBackupVaultLockConfigurationRequest(const DeleteBackupVaultLockConfigurationRequest &other)
    : BackupRequest(new DeleteBackupVaultLockConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackupVaultLockConfigurationRequest object.
 */
DeleteBackupVaultLockConfigurationRequest::DeleteBackupVaultLockConfigurationRequest()
    : BackupRequest(new DeleteBackupVaultLockConfigurationRequestPrivate(BackupRequest::DeleteBackupVaultLockConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackupVaultLockConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackupVaultLockConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackupVaultLockConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackupVaultLockConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DeleteBackupVaultLockConfigurationRequestPrivate
 * \brief The DeleteBackupVaultLockConfigurationRequestPrivate class provides private implementation for DeleteBackupVaultLockConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteBackupVaultLockConfigurationRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DeleteBackupVaultLockConfigurationRequestPrivate::DeleteBackupVaultLockConfigurationRequestPrivate(
    const BackupRequest::Action action, DeleteBackupVaultLockConfigurationRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackupVaultLockConfigurationRequest
 * class' copy constructor.
 */
DeleteBackupVaultLockConfigurationRequestPrivate::DeleteBackupVaultLockConfigurationRequestPrivate(
    const DeleteBackupVaultLockConfigurationRequestPrivate &other, DeleteBackupVaultLockConfigurationRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

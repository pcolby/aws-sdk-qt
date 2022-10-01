// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

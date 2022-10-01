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

#include "putbackupvaultlockconfigurationrequest.h"
#include "putbackupvaultlockconfigurationrequest_p.h"
#include "putbackupvaultlockconfigurationresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::PutBackupVaultLockConfigurationRequest
 * \brief The PutBackupVaultLockConfigurationRequest class provides an interface for Backup PutBackupVaultLockConfiguration requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::putBackupVaultLockConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutBackupVaultLockConfigurationRequest::PutBackupVaultLockConfigurationRequest(const PutBackupVaultLockConfigurationRequest &other)
    : BackupRequest(new PutBackupVaultLockConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBackupVaultLockConfigurationRequest object.
 */
PutBackupVaultLockConfigurationRequest::PutBackupVaultLockConfigurationRequest()
    : BackupRequest(new PutBackupVaultLockConfigurationRequestPrivate(BackupRequest::PutBackupVaultLockConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutBackupVaultLockConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBackupVaultLockConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBackupVaultLockConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutBackupVaultLockConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::PutBackupVaultLockConfigurationRequestPrivate
 * \brief The PutBackupVaultLockConfigurationRequestPrivate class provides private implementation for PutBackupVaultLockConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a PutBackupVaultLockConfigurationRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
PutBackupVaultLockConfigurationRequestPrivate::PutBackupVaultLockConfigurationRequestPrivate(
    const BackupRequest::Action action, PutBackupVaultLockConfigurationRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBackupVaultLockConfigurationRequest
 * class' copy constructor.
 */
PutBackupVaultLockConfigurationRequestPrivate::PutBackupVaultLockConfigurationRequestPrivate(
    const PutBackupVaultLockConfigurationRequestPrivate &other, PutBackupVaultLockConfigurationRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

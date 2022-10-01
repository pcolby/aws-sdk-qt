// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebackupvaultrequest.h"
#include "deletebackupvaultrequest_p.h"
#include "deletebackupvaultresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteBackupVaultRequest
 * \brief The DeleteBackupVaultRequest class provides an interface for Backup DeleteBackupVault requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteBackupVault
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackupVaultRequest::DeleteBackupVaultRequest(const DeleteBackupVaultRequest &other)
    : BackupRequest(new DeleteBackupVaultRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackupVaultRequest object.
 */
DeleteBackupVaultRequest::DeleteBackupVaultRequest()
    : BackupRequest(new DeleteBackupVaultRequestPrivate(BackupRequest::DeleteBackupVaultAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackupVaultRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackupVaultResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackupVaultRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackupVaultResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DeleteBackupVaultRequestPrivate
 * \brief The DeleteBackupVaultRequestPrivate class provides private implementation for DeleteBackupVaultRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteBackupVaultRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DeleteBackupVaultRequestPrivate::DeleteBackupVaultRequestPrivate(
    const BackupRequest::Action action, DeleteBackupVaultRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackupVaultRequest
 * class' copy constructor.
 */
DeleteBackupVaultRequestPrivate::DeleteBackupVaultRequestPrivate(
    const DeleteBackupVaultRequestPrivate &other, DeleteBackupVaultRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

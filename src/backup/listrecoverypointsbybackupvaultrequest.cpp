// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrecoverypointsbybackupvaultrequest.h"
#include "listrecoverypointsbybackupvaultrequest_p.h"
#include "listrecoverypointsbybackupvaultresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListRecoveryPointsByBackupVaultRequest
 * \brief The ListRecoveryPointsByBackupVaultRequest class provides an interface for Backup ListRecoveryPointsByBackupVault requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listRecoveryPointsByBackupVault
 */

/*!
 * Constructs a copy of \a other.
 */
ListRecoveryPointsByBackupVaultRequest::ListRecoveryPointsByBackupVaultRequest(const ListRecoveryPointsByBackupVaultRequest &other)
    : BackupRequest(new ListRecoveryPointsByBackupVaultRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRecoveryPointsByBackupVaultRequest object.
 */
ListRecoveryPointsByBackupVaultRequest::ListRecoveryPointsByBackupVaultRequest()
    : BackupRequest(new ListRecoveryPointsByBackupVaultRequestPrivate(BackupRequest::ListRecoveryPointsByBackupVaultAction, this))
{

}

/*!
 * \reimp
 */
bool ListRecoveryPointsByBackupVaultRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRecoveryPointsByBackupVaultResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRecoveryPointsByBackupVaultRequest::response(QNetworkReply * const reply) const
{
    return new ListRecoveryPointsByBackupVaultResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::ListRecoveryPointsByBackupVaultRequestPrivate
 * \brief The ListRecoveryPointsByBackupVaultRequestPrivate class provides private implementation for ListRecoveryPointsByBackupVaultRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListRecoveryPointsByBackupVaultRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
ListRecoveryPointsByBackupVaultRequestPrivate::ListRecoveryPointsByBackupVaultRequestPrivate(
    const BackupRequest::Action action, ListRecoveryPointsByBackupVaultRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRecoveryPointsByBackupVaultRequest
 * class' copy constructor.
 */
ListRecoveryPointsByBackupVaultRequestPrivate::ListRecoveryPointsByBackupVaultRequestPrivate(
    const ListRecoveryPointsByBackupVaultRequestPrivate &other, ListRecoveryPointsByBackupVaultRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

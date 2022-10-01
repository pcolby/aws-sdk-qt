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

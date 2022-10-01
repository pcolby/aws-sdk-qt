// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbackupvaultrequest.h"
#include "createbackupvaultrequest_p.h"
#include "createbackupvaultresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::CreateBackupVaultRequest
 * \brief The CreateBackupVaultRequest class provides an interface for Backup CreateBackupVault requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::createBackupVault
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBackupVaultRequest::CreateBackupVaultRequest(const CreateBackupVaultRequest &other)
    : BackupRequest(new CreateBackupVaultRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBackupVaultRequest object.
 */
CreateBackupVaultRequest::CreateBackupVaultRequest()
    : BackupRequest(new CreateBackupVaultRequestPrivate(BackupRequest::CreateBackupVaultAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBackupVaultRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBackupVaultResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBackupVaultRequest::response(QNetworkReply * const reply) const
{
    return new CreateBackupVaultResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::CreateBackupVaultRequestPrivate
 * \brief The CreateBackupVaultRequestPrivate class provides private implementation for CreateBackupVaultRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a CreateBackupVaultRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
CreateBackupVaultRequestPrivate::CreateBackupVaultRequestPrivate(
    const BackupRequest::Action action, CreateBackupVaultRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBackupVaultRequest
 * class' copy constructor.
 */
CreateBackupVaultRequestPrivate::CreateBackupVaultRequestPrivate(
    const CreateBackupVaultRequestPrivate &other, CreateBackupVaultRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

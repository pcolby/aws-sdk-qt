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
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

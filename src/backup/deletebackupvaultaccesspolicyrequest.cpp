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

#include "deletebackupvaultaccesspolicyrequest.h"
#include "deletebackupvaultaccesspolicyrequest_p.h"
#include "deletebackupvaultaccesspolicyresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteBackupVaultAccessPolicyRequest
 * \brief The DeleteBackupVaultAccessPolicyRequest class provides an interface for Backup DeleteBackupVaultAccessPolicy requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteBackupVaultAccessPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackupVaultAccessPolicyRequest::DeleteBackupVaultAccessPolicyRequest(const DeleteBackupVaultAccessPolicyRequest &other)
    : BackupRequest(new DeleteBackupVaultAccessPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackupVaultAccessPolicyRequest object.
 */
DeleteBackupVaultAccessPolicyRequest::DeleteBackupVaultAccessPolicyRequest()
    : BackupRequest(new DeleteBackupVaultAccessPolicyRequestPrivate(BackupRequest::DeleteBackupVaultAccessPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackupVaultAccessPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackupVaultAccessPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackupVaultAccessPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackupVaultAccessPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DeleteBackupVaultAccessPolicyRequestPrivate
 * \brief The DeleteBackupVaultAccessPolicyRequestPrivate class provides private implementation for DeleteBackupVaultAccessPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteBackupVaultAccessPolicyRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DeleteBackupVaultAccessPolicyRequestPrivate::DeleteBackupVaultAccessPolicyRequestPrivate(
    const BackupRequest::Action action, DeleteBackupVaultAccessPolicyRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackupVaultAccessPolicyRequest
 * class' copy constructor.
 */
DeleteBackupVaultAccessPolicyRequestPrivate::DeleteBackupVaultAccessPolicyRequestPrivate(
    const DeleteBackupVaultAccessPolicyRequestPrivate &other, DeleteBackupVaultAccessPolicyRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

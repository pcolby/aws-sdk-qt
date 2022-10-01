// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

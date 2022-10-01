// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbackupvaultaccesspolicyrequest.h"
#include "putbackupvaultaccesspolicyrequest_p.h"
#include "putbackupvaultaccesspolicyresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::PutBackupVaultAccessPolicyRequest
 * \brief The PutBackupVaultAccessPolicyRequest class provides an interface for Backup PutBackupVaultAccessPolicy requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::putBackupVaultAccessPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutBackupVaultAccessPolicyRequest::PutBackupVaultAccessPolicyRequest(const PutBackupVaultAccessPolicyRequest &other)
    : BackupRequest(new PutBackupVaultAccessPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBackupVaultAccessPolicyRequest object.
 */
PutBackupVaultAccessPolicyRequest::PutBackupVaultAccessPolicyRequest()
    : BackupRequest(new PutBackupVaultAccessPolicyRequestPrivate(BackupRequest::PutBackupVaultAccessPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutBackupVaultAccessPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBackupVaultAccessPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBackupVaultAccessPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutBackupVaultAccessPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::PutBackupVaultAccessPolicyRequestPrivate
 * \brief The PutBackupVaultAccessPolicyRequestPrivate class provides private implementation for PutBackupVaultAccessPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a PutBackupVaultAccessPolicyRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
PutBackupVaultAccessPolicyRequestPrivate::PutBackupVaultAccessPolicyRequestPrivate(
    const BackupRequest::Action action, PutBackupVaultAccessPolicyRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBackupVaultAccessPolicyRequest
 * class' copy constructor.
 */
PutBackupVaultAccessPolicyRequestPrivate::PutBackupVaultAccessPolicyRequestPrivate(
    const PutBackupVaultAccessPolicyRequestPrivate &other, PutBackupVaultAccessPolicyRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

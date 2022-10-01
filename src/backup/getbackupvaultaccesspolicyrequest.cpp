// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbackupvaultaccesspolicyrequest.h"
#include "getbackupvaultaccesspolicyrequest_p.h"
#include "getbackupvaultaccesspolicyresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::GetBackupVaultAccessPolicyRequest
 * \brief The GetBackupVaultAccessPolicyRequest class provides an interface for Backup GetBackupVaultAccessPolicy requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::getBackupVaultAccessPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackupVaultAccessPolicyRequest::GetBackupVaultAccessPolicyRequest(const GetBackupVaultAccessPolicyRequest &other)
    : BackupRequest(new GetBackupVaultAccessPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackupVaultAccessPolicyRequest object.
 */
GetBackupVaultAccessPolicyRequest::GetBackupVaultAccessPolicyRequest()
    : BackupRequest(new GetBackupVaultAccessPolicyRequestPrivate(BackupRequest::GetBackupVaultAccessPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackupVaultAccessPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackupVaultAccessPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackupVaultAccessPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetBackupVaultAccessPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::GetBackupVaultAccessPolicyRequestPrivate
 * \brief The GetBackupVaultAccessPolicyRequestPrivate class provides private implementation for GetBackupVaultAccessPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a GetBackupVaultAccessPolicyRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
GetBackupVaultAccessPolicyRequestPrivate::GetBackupVaultAccessPolicyRequestPrivate(
    const BackupRequest::Action action, GetBackupVaultAccessPolicyRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackupVaultAccessPolicyRequest
 * class' copy constructor.
 */
GetBackupVaultAccessPolicyRequestPrivate::GetBackupVaultAccessPolicyRequestPrivate(
    const GetBackupVaultAccessPolicyRequestPrivate &other, GetBackupVaultAccessPolicyRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

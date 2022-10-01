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

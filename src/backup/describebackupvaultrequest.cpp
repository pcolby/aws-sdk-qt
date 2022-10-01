// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebackupvaultrequest.h"
#include "describebackupvaultrequest_p.h"
#include "describebackupvaultresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeBackupVaultRequest
 * \brief The DescribeBackupVaultRequest class provides an interface for Backup DescribeBackupVault requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeBackupVault
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBackupVaultRequest::DescribeBackupVaultRequest(const DescribeBackupVaultRequest &other)
    : BackupRequest(new DescribeBackupVaultRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBackupVaultRequest object.
 */
DescribeBackupVaultRequest::DescribeBackupVaultRequest()
    : BackupRequest(new DescribeBackupVaultRequestPrivate(BackupRequest::DescribeBackupVaultAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBackupVaultRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBackupVaultResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBackupVaultRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBackupVaultResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DescribeBackupVaultRequestPrivate
 * \brief The DescribeBackupVaultRequestPrivate class provides private implementation for DescribeBackupVaultRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeBackupVaultRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DescribeBackupVaultRequestPrivate::DescribeBackupVaultRequestPrivate(
    const BackupRequest::Action action, DescribeBackupVaultRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBackupVaultRequest
 * class' copy constructor.
 */
DescribeBackupVaultRequestPrivate::DescribeBackupVaultRequestPrivate(
    const DescribeBackupVaultRequestPrivate &other, DescribeBackupVaultRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

/*
    Copyright 2013-2019 Paul Colby

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
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

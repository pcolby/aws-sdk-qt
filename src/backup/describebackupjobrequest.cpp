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

#include "describebackupjobrequest.h"
#include "describebackupjobrequest_p.h"
#include "describebackupjobresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeBackupJobRequest
 * \brief The DescribeBackupJobRequest class provides an interface for Backup DescribeBackupJob requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeBackupJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBackupJobRequest::DescribeBackupJobRequest(const DescribeBackupJobRequest &other)
    : BackupRequest(new DescribeBackupJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBackupJobRequest object.
 */
DescribeBackupJobRequest::DescribeBackupJobRequest()
    : BackupRequest(new DescribeBackupJobRequestPrivate(BackupRequest::DescribeBackupJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBackupJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBackupJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBackupJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBackupJobResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DescribeBackupJobRequestPrivate
 * \brief The DescribeBackupJobRequestPrivate class provides private implementation for DescribeBackupJobRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeBackupJobRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DescribeBackupJobRequestPrivate::DescribeBackupJobRequestPrivate(
    const BackupRequest::Action action, DescribeBackupJobRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBackupJobRequest
 * class' copy constructor.
 */
DescribeBackupJobRequestPrivate::DescribeBackupJobRequestPrivate(
    const DescribeBackupJobRequestPrivate &other, DescribeBackupJobRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

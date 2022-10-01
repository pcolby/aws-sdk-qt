// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

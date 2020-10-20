/*
    Copyright 2013-2020 Paul Colby

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

#include "stopbackupjobrequest.h"
#include "stopbackupjobrequest_p.h"
#include "stopbackupjobresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::StopBackupJobRequest
 * \brief The StopBackupJobRequest class provides an interface for Backup StopBackupJob requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::stopBackupJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopBackupJobRequest::StopBackupJobRequest(const StopBackupJobRequest &other)
    : BackupRequest(new StopBackupJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopBackupJobRequest object.
 */
StopBackupJobRequest::StopBackupJobRequest()
    : BackupRequest(new StopBackupJobRequestPrivate(BackupRequest::StopBackupJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopBackupJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopBackupJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopBackupJobRequest::response(QNetworkReply * const reply) const
{
    return new StopBackupJobResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::StopBackupJobRequestPrivate
 * \brief The StopBackupJobRequestPrivate class provides private implementation for StopBackupJobRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a StopBackupJobRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
StopBackupJobRequestPrivate::StopBackupJobRequestPrivate(
    const BackupRequest::Action action, StopBackupJobRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopBackupJobRequest
 * class' copy constructor.
 */
StopBackupJobRequestPrivate::StopBackupJobRequestPrivate(
    const StopBackupJobRequestPrivate &other, StopBackupJobRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

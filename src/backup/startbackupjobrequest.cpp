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

#include "startbackupjobrequest.h"
#include "startbackupjobrequest_p.h"
#include "startbackupjobresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::StartBackupJobRequest
 * \brief The StartBackupJobRequest class provides an interface for Backup StartBackupJob requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::startBackupJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartBackupJobRequest::StartBackupJobRequest(const StartBackupJobRequest &other)
    : BackupRequest(new StartBackupJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartBackupJobRequest object.
 */
StartBackupJobRequest::StartBackupJobRequest()
    : BackupRequest(new StartBackupJobRequestPrivate(BackupRequest::StartBackupJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartBackupJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartBackupJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartBackupJobRequest::response(QNetworkReply * const reply) const
{
    return new StartBackupJobResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::StartBackupJobRequestPrivate
 * \brief The StartBackupJobRequestPrivate class provides private implementation for StartBackupJobRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a StartBackupJobRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
StartBackupJobRequestPrivate::StartBackupJobRequestPrivate(
    const BackupRequest::Action action, StartBackupJobRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartBackupJobRequest
 * class' copy constructor.
 */
StartBackupJobRequestPrivate::StartBackupJobRequestPrivate(
    const StartBackupJobRequestPrivate &other, StartBackupJobRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

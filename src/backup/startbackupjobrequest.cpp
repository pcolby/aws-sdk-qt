// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

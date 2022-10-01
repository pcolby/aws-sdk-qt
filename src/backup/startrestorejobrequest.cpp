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

#include "startrestorejobrequest.h"
#include "startrestorejobrequest_p.h"
#include "startrestorejobresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::StartRestoreJobRequest
 * \brief The StartRestoreJobRequest class provides an interface for Backup StartRestoreJob requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::startRestoreJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartRestoreJobRequest::StartRestoreJobRequest(const StartRestoreJobRequest &other)
    : BackupRequest(new StartRestoreJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartRestoreJobRequest object.
 */
StartRestoreJobRequest::StartRestoreJobRequest()
    : BackupRequest(new StartRestoreJobRequestPrivate(BackupRequest::StartRestoreJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartRestoreJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartRestoreJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartRestoreJobRequest::response(QNetworkReply * const reply) const
{
    return new StartRestoreJobResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::StartRestoreJobRequestPrivate
 * \brief The StartRestoreJobRequestPrivate class provides private implementation for StartRestoreJobRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a StartRestoreJobRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
StartRestoreJobRequestPrivate::StartRestoreJobRequestPrivate(
    const BackupRequest::Action action, StartRestoreJobRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartRestoreJobRequest
 * class' copy constructor.
 */
StartRestoreJobRequestPrivate::StartRestoreJobRequestPrivate(
    const StartRestoreJobRequestPrivate &other, StartRestoreJobRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

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

#include "startcopyjobrequest.h"
#include "startcopyjobrequest_p.h"
#include "startcopyjobresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::StartCopyJobRequest
 * \brief The StartCopyJobRequest class provides an interface for Backup StartCopyJob requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::startCopyJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartCopyJobRequest::StartCopyJobRequest(const StartCopyJobRequest &other)
    : BackupRequest(new StartCopyJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartCopyJobRequest object.
 */
StartCopyJobRequest::StartCopyJobRequest()
    : BackupRequest(new StartCopyJobRequestPrivate(BackupRequest::StartCopyJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartCopyJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartCopyJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartCopyJobRequest::response(QNetworkReply * const reply) const
{
    return new StartCopyJobResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::StartCopyJobRequestPrivate
 * \brief The StartCopyJobRequestPrivate class provides private implementation for StartCopyJobRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a StartCopyJobRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
StartCopyJobRequestPrivate::StartCopyJobRequestPrivate(
    const BackupRequest::Action action, StartCopyJobRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartCopyJobRequest
 * class' copy constructor.
 */
StartCopyJobRequestPrivate::StartCopyJobRequestPrivate(
    const StartCopyJobRequestPrivate &other, StartCopyJobRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

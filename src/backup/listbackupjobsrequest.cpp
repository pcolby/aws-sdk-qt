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

#include "listbackupjobsrequest.h"
#include "listbackupjobsrequest_p.h"
#include "listbackupjobsresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListBackupJobsRequest
 * \brief The ListBackupJobsRequest class provides an interface for Backup ListBackupJobs requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listBackupJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListBackupJobsRequest::ListBackupJobsRequest(const ListBackupJobsRequest &other)
    : BackupRequest(new ListBackupJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBackupJobsRequest object.
 */
ListBackupJobsRequest::ListBackupJobsRequest()
    : BackupRequest(new ListBackupJobsRequestPrivate(BackupRequest::ListBackupJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBackupJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBackupJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBackupJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListBackupJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::ListBackupJobsRequestPrivate
 * \brief The ListBackupJobsRequestPrivate class provides private implementation for ListBackupJobsRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListBackupJobsRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
ListBackupJobsRequestPrivate::ListBackupJobsRequestPrivate(
    const BackupRequest::Action action, ListBackupJobsRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBackupJobsRequest
 * class' copy constructor.
 */
ListBackupJobsRequestPrivate::ListBackupJobsRequestPrivate(
    const ListBackupJobsRequestPrivate &other, ListBackupJobsRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

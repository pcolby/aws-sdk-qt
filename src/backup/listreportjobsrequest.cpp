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

#include "listreportjobsrequest.h"
#include "listreportjobsrequest_p.h"
#include "listreportjobsresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListReportJobsRequest
 * \brief The ListReportJobsRequest class provides an interface for Backup ListReportJobs requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listReportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListReportJobsRequest::ListReportJobsRequest(const ListReportJobsRequest &other)
    : BackupRequest(new ListReportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReportJobsRequest object.
 */
ListReportJobsRequest::ListReportJobsRequest()
    : BackupRequest(new ListReportJobsRequestPrivate(BackupRequest::ListReportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListReportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReportJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListReportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::ListReportJobsRequestPrivate
 * \brief The ListReportJobsRequestPrivate class provides private implementation for ListReportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListReportJobsRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
ListReportJobsRequestPrivate::ListReportJobsRequestPrivate(
    const BackupRequest::Action action, ListReportJobsRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReportJobsRequest
 * class' copy constructor.
 */
ListReportJobsRequestPrivate::ListReportJobsRequestPrivate(
    const ListReportJobsRequestPrivate &other, ListReportJobsRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

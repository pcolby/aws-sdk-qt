// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrestorejobsrequest.h"
#include "listrestorejobsrequest_p.h"
#include "listrestorejobsresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListRestoreJobsRequest
 * \brief The ListRestoreJobsRequest class provides an interface for Backup ListRestoreJobs requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listRestoreJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListRestoreJobsRequest::ListRestoreJobsRequest(const ListRestoreJobsRequest &other)
    : BackupRequest(new ListRestoreJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRestoreJobsRequest object.
 */
ListRestoreJobsRequest::ListRestoreJobsRequest()
    : BackupRequest(new ListRestoreJobsRequestPrivate(BackupRequest::ListRestoreJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRestoreJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRestoreJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRestoreJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListRestoreJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::ListRestoreJobsRequestPrivate
 * \brief The ListRestoreJobsRequestPrivate class provides private implementation for ListRestoreJobsRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListRestoreJobsRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
ListRestoreJobsRequestPrivate::ListRestoreJobsRequestPrivate(
    const BackupRequest::Action action, ListRestoreJobsRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRestoreJobsRequest
 * class' copy constructor.
 */
ListRestoreJobsRequestPrivate::ListRestoreJobsRequestPrivate(
    const ListRestoreJobsRequestPrivate &other, ListRestoreJobsRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

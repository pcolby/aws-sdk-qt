// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcopyjobsrequest.h"
#include "listcopyjobsrequest_p.h"
#include "listcopyjobsresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListCopyJobsRequest
 * \brief The ListCopyJobsRequest class provides an interface for Backup ListCopyJobs requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listCopyJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListCopyJobsRequest::ListCopyJobsRequest(const ListCopyJobsRequest &other)
    : BackupRequest(new ListCopyJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCopyJobsRequest object.
 */
ListCopyJobsRequest::ListCopyJobsRequest()
    : BackupRequest(new ListCopyJobsRequestPrivate(BackupRequest::ListCopyJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCopyJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCopyJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCopyJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListCopyJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::ListCopyJobsRequestPrivate
 * \brief The ListCopyJobsRequestPrivate class provides private implementation for ListCopyJobsRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListCopyJobsRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
ListCopyJobsRequestPrivate::ListCopyJobsRequestPrivate(
    const BackupRequest::Action action, ListCopyJobsRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCopyJobsRequest
 * class' copy constructor.
 */
ListCopyJobsRequestPrivate::ListCopyJobsRequestPrivate(
    const ListCopyJobsRequestPrivate &other, ListCopyJobsRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

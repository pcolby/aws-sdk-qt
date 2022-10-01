// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbackupplanversionsrequest.h"
#include "listbackupplanversionsrequest_p.h"
#include "listbackupplanversionsresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListBackupPlanVersionsRequest
 * \brief The ListBackupPlanVersionsRequest class provides an interface for Backup ListBackupPlanVersions requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listBackupPlanVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListBackupPlanVersionsRequest::ListBackupPlanVersionsRequest(const ListBackupPlanVersionsRequest &other)
    : BackupRequest(new ListBackupPlanVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBackupPlanVersionsRequest object.
 */
ListBackupPlanVersionsRequest::ListBackupPlanVersionsRequest()
    : BackupRequest(new ListBackupPlanVersionsRequestPrivate(BackupRequest::ListBackupPlanVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBackupPlanVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBackupPlanVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBackupPlanVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListBackupPlanVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::ListBackupPlanVersionsRequestPrivate
 * \brief The ListBackupPlanVersionsRequestPrivate class provides private implementation for ListBackupPlanVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListBackupPlanVersionsRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
ListBackupPlanVersionsRequestPrivate::ListBackupPlanVersionsRequestPrivate(
    const BackupRequest::Action action, ListBackupPlanVersionsRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBackupPlanVersionsRequest
 * class' copy constructor.
 */
ListBackupPlanVersionsRequestPrivate::ListBackupPlanVersionsRequestPrivate(
    const ListBackupPlanVersionsRequestPrivate &other, ListBackupPlanVersionsRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

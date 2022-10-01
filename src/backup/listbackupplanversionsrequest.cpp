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

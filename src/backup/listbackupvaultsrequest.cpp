/*
    Copyright 2013-2020 Paul Colby

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

#include "listbackupvaultsrequest.h"
#include "listbackupvaultsrequest_p.h"
#include "listbackupvaultsresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListBackupVaultsRequest
 * \brief The ListBackupVaultsRequest class provides an interface for Backup ListBackupVaults requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listBackupVaults
 */

/*!
 * Constructs a copy of \a other.
 */
ListBackupVaultsRequest::ListBackupVaultsRequest(const ListBackupVaultsRequest &other)
    : BackupRequest(new ListBackupVaultsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBackupVaultsRequest object.
 */
ListBackupVaultsRequest::ListBackupVaultsRequest()
    : BackupRequest(new ListBackupVaultsRequestPrivate(BackupRequest::ListBackupVaultsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBackupVaultsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBackupVaultsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBackupVaultsRequest::response(QNetworkReply * const reply) const
{
    return new ListBackupVaultsResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::ListBackupVaultsRequestPrivate
 * \brief The ListBackupVaultsRequestPrivate class provides private implementation for ListBackupVaultsRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListBackupVaultsRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
ListBackupVaultsRequestPrivate::ListBackupVaultsRequestPrivate(
    const BackupRequest::Action action, ListBackupVaultsRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBackupVaultsRequest
 * class' copy constructor.
 */
ListBackupVaultsRequestPrivate::ListBackupVaultsRequestPrivate(
    const ListBackupVaultsRequestPrivate &other, ListBackupVaultsRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

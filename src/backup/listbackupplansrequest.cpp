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

#include "listbackupplansrequest.h"
#include "listbackupplansrequest_p.h"
#include "listbackupplansresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListBackupPlansRequest
 * \brief The ListBackupPlansRequest class provides an interface for Backup ListBackupPlans requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listBackupPlans
 */

/*!
 * Constructs a copy of \a other.
 */
ListBackupPlansRequest::ListBackupPlansRequest(const ListBackupPlansRequest &other)
    : BackupRequest(new ListBackupPlansRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBackupPlansRequest object.
 */
ListBackupPlansRequest::ListBackupPlansRequest()
    : BackupRequest(new ListBackupPlansRequestPrivate(BackupRequest::ListBackupPlansAction, this))
{

}

/*!
 * \reimp
 */
bool ListBackupPlansRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBackupPlansResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBackupPlansRequest::response(QNetworkReply * const reply) const
{
    return new ListBackupPlansResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::ListBackupPlansRequestPrivate
 * \brief The ListBackupPlansRequestPrivate class provides private implementation for ListBackupPlansRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListBackupPlansRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
ListBackupPlansRequestPrivate::ListBackupPlansRequestPrivate(
    const BackupRequest::Action action, ListBackupPlansRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBackupPlansRequest
 * class' copy constructor.
 */
ListBackupPlansRequestPrivate::ListBackupPlansRequestPrivate(
    const ListBackupPlansRequestPrivate &other, ListBackupPlansRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

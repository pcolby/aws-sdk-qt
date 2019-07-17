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

#include "deletebackupplanrequest.h"
#include "deletebackupplanrequest_p.h"
#include "deletebackupplanresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteBackupPlanRequest
 * \brief The DeleteBackupPlanRequest class provides an interface for Backup DeleteBackupPlan requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteBackupPlan
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackupPlanRequest::DeleteBackupPlanRequest(const DeleteBackupPlanRequest &other)
    : BackupRequest(new DeleteBackupPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackupPlanRequest object.
 */
DeleteBackupPlanRequest::DeleteBackupPlanRequest()
    : BackupRequest(new DeleteBackupPlanRequestPrivate(BackupRequest::DeleteBackupPlanAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackupPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackupPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackupPlanRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackupPlanResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DeleteBackupPlanRequestPrivate
 * \brief The DeleteBackupPlanRequestPrivate class provides private implementation for DeleteBackupPlanRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteBackupPlanRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DeleteBackupPlanRequestPrivate::DeleteBackupPlanRequestPrivate(
    const BackupRequest::Action action, DeleteBackupPlanRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackupPlanRequest
 * class' copy constructor.
 */
DeleteBackupPlanRequestPrivate::DeleteBackupPlanRequestPrivate(
    const DeleteBackupPlanRequestPrivate &other, DeleteBackupPlanRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

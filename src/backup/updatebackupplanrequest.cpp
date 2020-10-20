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

#include "updatebackupplanrequest.h"
#include "updatebackupplanrequest_p.h"
#include "updatebackupplanresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::UpdateBackupPlanRequest
 * \brief The UpdateBackupPlanRequest class provides an interface for Backup UpdateBackupPlan requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::updateBackupPlan
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBackupPlanRequest::UpdateBackupPlanRequest(const UpdateBackupPlanRequest &other)
    : BackupRequest(new UpdateBackupPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBackupPlanRequest object.
 */
UpdateBackupPlanRequest::UpdateBackupPlanRequest()
    : BackupRequest(new UpdateBackupPlanRequestPrivate(BackupRequest::UpdateBackupPlanAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBackupPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBackupPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBackupPlanRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBackupPlanResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::UpdateBackupPlanRequestPrivate
 * \brief The UpdateBackupPlanRequestPrivate class provides private implementation for UpdateBackupPlanRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a UpdateBackupPlanRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
UpdateBackupPlanRequestPrivate::UpdateBackupPlanRequestPrivate(
    const BackupRequest::Action action, UpdateBackupPlanRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBackupPlanRequest
 * class' copy constructor.
 */
UpdateBackupPlanRequestPrivate::UpdateBackupPlanRequestPrivate(
    const UpdateBackupPlanRequestPrivate &other, UpdateBackupPlanRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

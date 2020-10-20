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

#include "getbackupplanrequest.h"
#include "getbackupplanrequest_p.h"
#include "getbackupplanresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::GetBackupPlanRequest
 * \brief The GetBackupPlanRequest class provides an interface for Backup GetBackupPlan requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::getBackupPlan
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackupPlanRequest::GetBackupPlanRequest(const GetBackupPlanRequest &other)
    : BackupRequest(new GetBackupPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackupPlanRequest object.
 */
GetBackupPlanRequest::GetBackupPlanRequest()
    : BackupRequest(new GetBackupPlanRequestPrivate(BackupRequest::GetBackupPlanAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackupPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackupPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackupPlanRequest::response(QNetworkReply * const reply) const
{
    return new GetBackupPlanResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::GetBackupPlanRequestPrivate
 * \brief The GetBackupPlanRequestPrivate class provides private implementation for GetBackupPlanRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a GetBackupPlanRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
GetBackupPlanRequestPrivate::GetBackupPlanRequestPrivate(
    const BackupRequest::Action action, GetBackupPlanRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackupPlanRequest
 * class' copy constructor.
 */
GetBackupPlanRequestPrivate::GetBackupPlanRequestPrivate(
    const GetBackupPlanRequestPrivate &other, GetBackupPlanRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

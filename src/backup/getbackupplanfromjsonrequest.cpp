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

#include "getbackupplanfromjsonrequest.h"
#include "getbackupplanfromjsonrequest_p.h"
#include "getbackupplanfromjsonresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::GetBackupPlanFromJSONRequest
 * \brief The GetBackupPlanFromJSONRequest class provides an interface for Backup GetBackupPlanFromJSON requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::getBackupPlanFromJSON
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackupPlanFromJSONRequest::GetBackupPlanFromJSONRequest(const GetBackupPlanFromJSONRequest &other)
    : BackupRequest(new GetBackupPlanFromJSONRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackupPlanFromJSONRequest object.
 */
GetBackupPlanFromJSONRequest::GetBackupPlanFromJSONRequest()
    : BackupRequest(new GetBackupPlanFromJSONRequestPrivate(BackupRequest::GetBackupPlanFromJSONAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackupPlanFromJSONRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackupPlanFromJSONResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackupPlanFromJSONRequest::response(QNetworkReply * const reply) const
{
    return new GetBackupPlanFromJSONResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::GetBackupPlanFromJSONRequestPrivate
 * \brief The GetBackupPlanFromJSONRequestPrivate class provides private implementation for GetBackupPlanFromJSONRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a GetBackupPlanFromJSONRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
GetBackupPlanFromJSONRequestPrivate::GetBackupPlanFromJSONRequestPrivate(
    const BackupRequest::Action action, GetBackupPlanFromJSONRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackupPlanFromJSONRequest
 * class' copy constructor.
 */
GetBackupPlanFromJSONRequestPrivate::GetBackupPlanFromJSONRequestPrivate(
    const GetBackupPlanFromJSONRequestPrivate &other, GetBackupPlanFromJSONRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

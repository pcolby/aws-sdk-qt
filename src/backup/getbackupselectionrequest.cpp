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

#include "getbackupselectionrequest.h"
#include "getbackupselectionrequest_p.h"
#include "getbackupselectionresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::GetBackupSelectionRequest
 * \brief The GetBackupSelectionRequest class provides an interface for Backup GetBackupSelection requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::getBackupSelection
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackupSelectionRequest::GetBackupSelectionRequest(const GetBackupSelectionRequest &other)
    : BackupRequest(new GetBackupSelectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackupSelectionRequest object.
 */
GetBackupSelectionRequest::GetBackupSelectionRequest()
    : BackupRequest(new GetBackupSelectionRequestPrivate(BackupRequest::GetBackupSelectionAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackupSelectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackupSelectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackupSelectionRequest::response(QNetworkReply * const reply) const
{
    return new GetBackupSelectionResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::GetBackupSelectionRequestPrivate
 * \brief The GetBackupSelectionRequestPrivate class provides private implementation for GetBackupSelectionRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a GetBackupSelectionRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
GetBackupSelectionRequestPrivate::GetBackupSelectionRequestPrivate(
    const BackupRequest::Action action, GetBackupSelectionRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackupSelectionRequest
 * class' copy constructor.
 */
GetBackupSelectionRequestPrivate::GetBackupSelectionRequestPrivate(
    const GetBackupSelectionRequestPrivate &other, GetBackupSelectionRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

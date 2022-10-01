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

#include "getbackupvaultnotificationsrequest.h"
#include "getbackupvaultnotificationsrequest_p.h"
#include "getbackupvaultnotificationsresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::GetBackupVaultNotificationsRequest
 * \brief The GetBackupVaultNotificationsRequest class provides an interface for Backup GetBackupVaultNotifications requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::getBackupVaultNotifications
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackupVaultNotificationsRequest::GetBackupVaultNotificationsRequest(const GetBackupVaultNotificationsRequest &other)
    : BackupRequest(new GetBackupVaultNotificationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackupVaultNotificationsRequest object.
 */
GetBackupVaultNotificationsRequest::GetBackupVaultNotificationsRequest()
    : BackupRequest(new GetBackupVaultNotificationsRequestPrivate(BackupRequest::GetBackupVaultNotificationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackupVaultNotificationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackupVaultNotificationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackupVaultNotificationsRequest::response(QNetworkReply * const reply) const
{
    return new GetBackupVaultNotificationsResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::GetBackupVaultNotificationsRequestPrivate
 * \brief The GetBackupVaultNotificationsRequestPrivate class provides private implementation for GetBackupVaultNotificationsRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a GetBackupVaultNotificationsRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
GetBackupVaultNotificationsRequestPrivate::GetBackupVaultNotificationsRequestPrivate(
    const BackupRequest::Action action, GetBackupVaultNotificationsRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackupVaultNotificationsRequest
 * class' copy constructor.
 */
GetBackupVaultNotificationsRequestPrivate::GetBackupVaultNotificationsRequestPrivate(
    const GetBackupVaultNotificationsRequestPrivate &other, GetBackupVaultNotificationsRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

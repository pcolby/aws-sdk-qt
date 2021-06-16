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

#include "putbackupvaultnotificationsrequest.h"
#include "putbackupvaultnotificationsrequest_p.h"
#include "putbackupvaultnotificationsresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::PutBackupVaultNotificationsRequest
 * \brief The PutBackupVaultNotificationsRequest class provides an interface for Backup PutBackupVaultNotifications requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::putBackupVaultNotifications
 */

/*!
 * Constructs a copy of \a other.
 */
PutBackupVaultNotificationsRequest::PutBackupVaultNotificationsRequest(const PutBackupVaultNotificationsRequest &other)
    : BackupRequest(new PutBackupVaultNotificationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBackupVaultNotificationsRequest object.
 */
PutBackupVaultNotificationsRequest::PutBackupVaultNotificationsRequest()
    : BackupRequest(new PutBackupVaultNotificationsRequestPrivate(BackupRequest::PutBackupVaultNotificationsAction, this))
{

}

/*!
 * \reimp
 */
bool PutBackupVaultNotificationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBackupVaultNotificationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBackupVaultNotificationsRequest::response(QNetworkReply * const reply) const
{
    return new PutBackupVaultNotificationsResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::PutBackupVaultNotificationsRequestPrivate
 * \brief The PutBackupVaultNotificationsRequestPrivate class provides private implementation for PutBackupVaultNotificationsRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a PutBackupVaultNotificationsRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
PutBackupVaultNotificationsRequestPrivate::PutBackupVaultNotificationsRequestPrivate(
    const BackupRequest::Action action, PutBackupVaultNotificationsRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBackupVaultNotificationsRequest
 * class' copy constructor.
 */
PutBackupVaultNotificationsRequestPrivate::PutBackupVaultNotificationsRequestPrivate(
    const PutBackupVaultNotificationsRequestPrivate &other, PutBackupVaultNotificationsRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

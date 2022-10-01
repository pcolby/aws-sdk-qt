// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

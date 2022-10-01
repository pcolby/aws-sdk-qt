// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

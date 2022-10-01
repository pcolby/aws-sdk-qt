// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

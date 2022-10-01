// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

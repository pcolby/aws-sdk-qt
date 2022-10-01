// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbackupplanrequest.h"
#include "createbackupplanrequest_p.h"
#include "createbackupplanresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::CreateBackupPlanRequest
 * \brief The CreateBackupPlanRequest class provides an interface for Backup CreateBackupPlan requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::createBackupPlan
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBackupPlanRequest::CreateBackupPlanRequest(const CreateBackupPlanRequest &other)
    : BackupRequest(new CreateBackupPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBackupPlanRequest object.
 */
CreateBackupPlanRequest::CreateBackupPlanRequest()
    : BackupRequest(new CreateBackupPlanRequestPrivate(BackupRequest::CreateBackupPlanAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBackupPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBackupPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBackupPlanRequest::response(QNetworkReply * const reply) const
{
    return new CreateBackupPlanResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::CreateBackupPlanRequestPrivate
 * \brief The CreateBackupPlanRequestPrivate class provides private implementation for CreateBackupPlanRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a CreateBackupPlanRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
CreateBackupPlanRequestPrivate::CreateBackupPlanRequestPrivate(
    const BackupRequest::Action action, CreateBackupPlanRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBackupPlanRequest
 * class' copy constructor.
 */
CreateBackupPlanRequestPrivate::CreateBackupPlanRequestPrivate(
    const CreateBackupPlanRequestPrivate &other, CreateBackupPlanRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

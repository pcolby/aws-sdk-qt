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
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

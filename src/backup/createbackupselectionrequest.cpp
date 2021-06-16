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

#include "createbackupselectionrequest.h"
#include "createbackupselectionrequest_p.h"
#include "createbackupselectionresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::CreateBackupSelectionRequest
 * \brief The CreateBackupSelectionRequest class provides an interface for Backup CreateBackupSelection requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::createBackupSelection
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBackupSelectionRequest::CreateBackupSelectionRequest(const CreateBackupSelectionRequest &other)
    : BackupRequest(new CreateBackupSelectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBackupSelectionRequest object.
 */
CreateBackupSelectionRequest::CreateBackupSelectionRequest()
    : BackupRequest(new CreateBackupSelectionRequestPrivate(BackupRequest::CreateBackupSelectionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBackupSelectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBackupSelectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBackupSelectionRequest::response(QNetworkReply * const reply) const
{
    return new CreateBackupSelectionResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::CreateBackupSelectionRequestPrivate
 * \brief The CreateBackupSelectionRequestPrivate class provides private implementation for CreateBackupSelectionRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a CreateBackupSelectionRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
CreateBackupSelectionRequestPrivate::CreateBackupSelectionRequestPrivate(
    const BackupRequest::Action action, CreateBackupSelectionRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBackupSelectionRequest
 * class' copy constructor.
 */
CreateBackupSelectionRequestPrivate::CreateBackupSelectionRequestPrivate(
    const CreateBackupSelectionRequestPrivate &other, CreateBackupSelectionRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

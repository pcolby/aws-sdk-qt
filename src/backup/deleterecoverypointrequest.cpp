/*
    Copyright 2013-2019 Paul Colby

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

#include "deleterecoverypointrequest.h"
#include "deleterecoverypointrequest_p.h"
#include "deleterecoverypointresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteRecoveryPointRequest
 * \brief The DeleteRecoveryPointRequest class provides an interface for Backup DeleteRecoveryPoint requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteRecoveryPoint
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRecoveryPointRequest::DeleteRecoveryPointRequest(const DeleteRecoveryPointRequest &other)
    : BackupRequest(new DeleteRecoveryPointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRecoveryPointRequest object.
 */
DeleteRecoveryPointRequest::DeleteRecoveryPointRequest()
    : BackupRequest(new DeleteRecoveryPointRequestPrivate(BackupRequest::DeleteRecoveryPointAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRecoveryPointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRecoveryPointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRecoveryPointRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRecoveryPointResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DeleteRecoveryPointRequestPrivate
 * \brief The DeleteRecoveryPointRequestPrivate class provides private implementation for DeleteRecoveryPointRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteRecoveryPointRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DeleteRecoveryPointRequestPrivate::DeleteRecoveryPointRequestPrivate(
    const BackupRequest::Action action, DeleteRecoveryPointRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRecoveryPointRequest
 * class' copy constructor.
 */
DeleteRecoveryPointRequestPrivate::DeleteRecoveryPointRequestPrivate(
    const DeleteRecoveryPointRequestPrivate &other, DeleteRecoveryPointRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

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

#include "updaterecoverypointlifecyclerequest.h"
#include "updaterecoverypointlifecyclerequest_p.h"
#include "updaterecoverypointlifecycleresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::UpdateRecoveryPointLifecycleRequest
 * \brief The UpdateRecoveryPointLifecycleRequest class provides an interface for Backup UpdateRecoveryPointLifecycle requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::updateRecoveryPointLifecycle
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRecoveryPointLifecycleRequest::UpdateRecoveryPointLifecycleRequest(const UpdateRecoveryPointLifecycleRequest &other)
    : BackupRequest(new UpdateRecoveryPointLifecycleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRecoveryPointLifecycleRequest object.
 */
UpdateRecoveryPointLifecycleRequest::UpdateRecoveryPointLifecycleRequest()
    : BackupRequest(new UpdateRecoveryPointLifecycleRequestPrivate(BackupRequest::UpdateRecoveryPointLifecycleAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRecoveryPointLifecycleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRecoveryPointLifecycleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRecoveryPointLifecycleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRecoveryPointLifecycleResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::UpdateRecoveryPointLifecycleRequestPrivate
 * \brief The UpdateRecoveryPointLifecycleRequestPrivate class provides private implementation for UpdateRecoveryPointLifecycleRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a UpdateRecoveryPointLifecycleRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
UpdateRecoveryPointLifecycleRequestPrivate::UpdateRecoveryPointLifecycleRequestPrivate(
    const BackupRequest::Action action, UpdateRecoveryPointLifecycleRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRecoveryPointLifecycleRequest
 * class' copy constructor.
 */
UpdateRecoveryPointLifecycleRequestPrivate::UpdateRecoveryPointLifecycleRequestPrivate(
    const UpdateRecoveryPointLifecycleRequestPrivate &other, UpdateRecoveryPointLifecycleRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

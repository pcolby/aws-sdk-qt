// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

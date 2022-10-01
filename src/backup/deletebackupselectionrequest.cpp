// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebackupselectionrequest.h"
#include "deletebackupselectionrequest_p.h"
#include "deletebackupselectionresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DeleteBackupSelectionRequest
 * \brief The DeleteBackupSelectionRequest class provides an interface for Backup DeleteBackupSelection requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::deleteBackupSelection
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBackupSelectionRequest::DeleteBackupSelectionRequest(const DeleteBackupSelectionRequest &other)
    : BackupRequest(new DeleteBackupSelectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBackupSelectionRequest object.
 */
DeleteBackupSelectionRequest::DeleteBackupSelectionRequest()
    : BackupRequest(new DeleteBackupSelectionRequestPrivate(BackupRequest::DeleteBackupSelectionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBackupSelectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBackupSelectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBackupSelectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBackupSelectionResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::DeleteBackupSelectionRequestPrivate
 * \brief The DeleteBackupSelectionRequestPrivate class provides private implementation for DeleteBackupSelectionRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DeleteBackupSelectionRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
DeleteBackupSelectionRequestPrivate::DeleteBackupSelectionRequestPrivate(
    const BackupRequest::Action action, DeleteBackupSelectionRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBackupSelectionRequest
 * class' copy constructor.
 */
DeleteBackupSelectionRequestPrivate::DeleteBackupSelectionRequestPrivate(
    const DeleteBackupSelectionRequestPrivate &other, DeleteBackupSelectionRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

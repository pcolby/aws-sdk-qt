// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

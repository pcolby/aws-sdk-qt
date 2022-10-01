// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbackupselectionrequest.h"
#include "getbackupselectionrequest_p.h"
#include "getbackupselectionresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::GetBackupSelectionRequest
 * \brief The GetBackupSelectionRequest class provides an interface for Backup GetBackupSelection requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::getBackupSelection
 */

/*!
 * Constructs a copy of \a other.
 */
GetBackupSelectionRequest::GetBackupSelectionRequest(const GetBackupSelectionRequest &other)
    : BackupRequest(new GetBackupSelectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBackupSelectionRequest object.
 */
GetBackupSelectionRequest::GetBackupSelectionRequest()
    : BackupRequest(new GetBackupSelectionRequestPrivate(BackupRequest::GetBackupSelectionAction, this))
{

}

/*!
 * \reimp
 */
bool GetBackupSelectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBackupSelectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBackupSelectionRequest::response(QNetworkReply * const reply) const
{
    return new GetBackupSelectionResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::GetBackupSelectionRequestPrivate
 * \brief The GetBackupSelectionRequestPrivate class provides private implementation for GetBackupSelectionRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a GetBackupSelectionRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
GetBackupSelectionRequestPrivate::GetBackupSelectionRequestPrivate(
    const BackupRequest::Action action, GetBackupSelectionRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBackupSelectionRequest
 * class' copy constructor.
 */
GetBackupSelectionRequestPrivate::GetBackupSelectionRequestPrivate(
    const GetBackupSelectionRequestPrivate &other, GetBackupSelectionRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

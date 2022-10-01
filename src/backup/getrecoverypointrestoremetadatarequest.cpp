// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecoverypointrestoremetadatarequest.h"
#include "getrecoverypointrestoremetadatarequest_p.h"
#include "getrecoverypointrestoremetadataresponse.h"
#include "backuprequest_p.h"

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::GetRecoveryPointRestoreMetadataRequest
 * \brief The GetRecoveryPointRestoreMetadataRequest class provides an interface for Backup GetRecoveryPointRestoreMetadata requests.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::getRecoveryPointRestoreMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
GetRecoveryPointRestoreMetadataRequest::GetRecoveryPointRestoreMetadataRequest(const GetRecoveryPointRestoreMetadataRequest &other)
    : BackupRequest(new GetRecoveryPointRestoreMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRecoveryPointRestoreMetadataRequest object.
 */
GetRecoveryPointRestoreMetadataRequest::GetRecoveryPointRestoreMetadataRequest()
    : BackupRequest(new GetRecoveryPointRestoreMetadataRequestPrivate(BackupRequest::GetRecoveryPointRestoreMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool GetRecoveryPointRestoreMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRecoveryPointRestoreMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRecoveryPointRestoreMetadataRequest::response(QNetworkReply * const reply) const
{
    return new GetRecoveryPointRestoreMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::Backup::GetRecoveryPointRestoreMetadataRequestPrivate
 * \brief The GetRecoveryPointRestoreMetadataRequestPrivate class provides private implementation for GetRecoveryPointRestoreMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a GetRecoveryPointRestoreMetadataRequestPrivate object for Backup \a action,
 * with public implementation \a q.
 */
GetRecoveryPointRestoreMetadataRequestPrivate::GetRecoveryPointRestoreMetadataRequestPrivate(
    const BackupRequest::Action action, GetRecoveryPointRestoreMetadataRequest * const q)
    : BackupRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRecoveryPointRestoreMetadataRequest
 * class' copy constructor.
 */
GetRecoveryPointRestoreMetadataRequestPrivate::GetRecoveryPointRestoreMetadataRequestPrivate(
    const GetRecoveryPointRestoreMetadataRequestPrivate &other, GetRecoveryPointRestoreMetadataRequest * const q)
    : BackupRequestPrivate(other, q)
{

}

} // namespace Backup
} // namespace QtAws

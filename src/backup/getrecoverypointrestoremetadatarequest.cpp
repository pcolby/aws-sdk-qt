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
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
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

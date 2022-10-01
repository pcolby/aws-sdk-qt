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

#include "getobjectmetadatarequest.h"
#include "getobjectmetadatarequest_p.h"
#include "getobjectmetadataresponse.h"
#include "backupstoragerequest_p.h"

namespace QtAws {
namespace BackupStorage {

/*!
 * \class QtAws::BackupStorage::GetObjectMetadataRequest
 * \brief The GetObjectMetadataRequest class provides an interface for BackupStorage GetObjectMetadata requests.
 *
 * \inmodule QtAwsBackupStorage
 *
 *
 * \sa BackupStorageClient::getObjectMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
GetObjectMetadataRequest::GetObjectMetadataRequest(const GetObjectMetadataRequest &other)
    : BackupStorageRequest(new GetObjectMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetObjectMetadataRequest object.
 */
GetObjectMetadataRequest::GetObjectMetadataRequest()
    : BackupStorageRequest(new GetObjectMetadataRequestPrivate(BackupStorageRequest::GetObjectMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool GetObjectMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetObjectMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetObjectMetadataRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::BackupStorage::GetObjectMetadataRequestPrivate
 * \brief The GetObjectMetadataRequestPrivate class provides private implementation for GetObjectMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsBackupStorage
 */

/*!
 * Constructs a GetObjectMetadataRequestPrivate object for BackupStorage \a action,
 * with public implementation \a q.
 */
GetObjectMetadataRequestPrivate::GetObjectMetadataRequestPrivate(
    const BackupStorageRequest::Action action, GetObjectMetadataRequest * const q)
    : BackupStorageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetObjectMetadataRequest
 * class' copy constructor.
 */
GetObjectMetadataRequestPrivate::GetObjectMetadataRequestPrivate(
    const GetObjectMetadataRequestPrivate &other, GetObjectMetadataRequest * const q)
    : BackupStorageRequestPrivate(other, q)
{

}

} // namespace BackupStorage
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

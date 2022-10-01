// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelocationobjectstoragerequest.h"
#include "updatelocationobjectstoragerequest_p.h"
#include "updatelocationobjectstorageresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::UpdateLocationObjectStorageRequest
 * \brief The UpdateLocationObjectStorageRequest class provides an interface for DataSync UpdateLocationObjectStorage requests.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>DataSync</fullname>
 * 
 *  DataSync is a managed data transfer service that makes it simpler for you to automate moving data between on-premises
 *  storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for DataSync contains documentation for a programming interface that you can use to manage
 *
 * \sa DataSyncClient::updateLocationObjectStorage
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLocationObjectStorageRequest::UpdateLocationObjectStorageRequest(const UpdateLocationObjectStorageRequest &other)
    : DataSyncRequest(new UpdateLocationObjectStorageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLocationObjectStorageRequest object.
 */
UpdateLocationObjectStorageRequest::UpdateLocationObjectStorageRequest()
    : DataSyncRequest(new UpdateLocationObjectStorageRequestPrivate(DataSyncRequest::UpdateLocationObjectStorageAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLocationObjectStorageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLocationObjectStorageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLocationObjectStorageRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLocationObjectStorageResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::UpdateLocationObjectStorageRequestPrivate
 * \brief The UpdateLocationObjectStorageRequestPrivate class provides private implementation for UpdateLocationObjectStorageRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a UpdateLocationObjectStorageRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
UpdateLocationObjectStorageRequestPrivate::UpdateLocationObjectStorageRequestPrivate(
    const DataSyncRequest::Action action, UpdateLocationObjectStorageRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLocationObjectStorageRequest
 * class' copy constructor.
 */
UpdateLocationObjectStorageRequestPrivate::UpdateLocationObjectStorageRequestPrivate(
    const UpdateLocationObjectStorageRequestPrivate &other, UpdateLocationObjectStorageRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws

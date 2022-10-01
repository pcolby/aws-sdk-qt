// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlocationobjectstoragerequest.h"
#include "createlocationobjectstoragerequest_p.h"
#include "createlocationobjectstorageresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationObjectStorageRequest
 * \brief The CreateLocationObjectStorageRequest class provides an interface for DataSync CreateLocationObjectStorage requests.
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
 * \sa DataSyncClient::createLocationObjectStorage
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLocationObjectStorageRequest::CreateLocationObjectStorageRequest(const CreateLocationObjectStorageRequest &other)
    : DataSyncRequest(new CreateLocationObjectStorageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLocationObjectStorageRequest object.
 */
CreateLocationObjectStorageRequest::CreateLocationObjectStorageRequest()
    : DataSyncRequest(new CreateLocationObjectStorageRequestPrivate(DataSyncRequest::CreateLocationObjectStorageAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLocationObjectStorageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLocationObjectStorageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLocationObjectStorageRequest::response(QNetworkReply * const reply) const
{
    return new CreateLocationObjectStorageResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::CreateLocationObjectStorageRequestPrivate
 * \brief The CreateLocationObjectStorageRequestPrivate class provides private implementation for CreateLocationObjectStorageRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationObjectStorageRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
CreateLocationObjectStorageRequestPrivate::CreateLocationObjectStorageRequestPrivate(
    const DataSyncRequest::Action action, CreateLocationObjectStorageRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLocationObjectStorageRequest
 * class' copy constructor.
 */
CreateLocationObjectStorageRequestPrivate::CreateLocationObjectStorageRequestPrivate(
    const CreateLocationObjectStorageRequestPrivate &other, CreateLocationObjectStorageRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws

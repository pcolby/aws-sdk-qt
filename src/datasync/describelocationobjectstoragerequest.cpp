// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelocationobjectstoragerequest.h"
#include "describelocationobjectstoragerequest_p.h"
#include "describelocationobjectstorageresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationObjectStorageRequest
 * \brief The DescribeLocationObjectStorageRequest class provides an interface for DataSync DescribeLocationObjectStorage requests.
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
 * \sa DataSyncClient::describeLocationObjectStorage
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLocationObjectStorageRequest::DescribeLocationObjectStorageRequest(const DescribeLocationObjectStorageRequest &other)
    : DataSyncRequest(new DescribeLocationObjectStorageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLocationObjectStorageRequest object.
 */
DescribeLocationObjectStorageRequest::DescribeLocationObjectStorageRequest()
    : DataSyncRequest(new DescribeLocationObjectStorageRequestPrivate(DataSyncRequest::DescribeLocationObjectStorageAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLocationObjectStorageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLocationObjectStorageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLocationObjectStorageRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLocationObjectStorageResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::DescribeLocationObjectStorageRequestPrivate
 * \brief The DescribeLocationObjectStorageRequestPrivate class provides private implementation for DescribeLocationObjectStorageRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationObjectStorageRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
DescribeLocationObjectStorageRequestPrivate::DescribeLocationObjectStorageRequestPrivate(
    const DataSyncRequest::Action action, DescribeLocationObjectStorageRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLocationObjectStorageRequest
 * class' copy constructor.
 */
DescribeLocationObjectStorageRequestPrivate::DescribeLocationObjectStorageRequestPrivate(
    const DescribeLocationObjectStorageRequestPrivate &other, DescribeLocationObjectStorageRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws

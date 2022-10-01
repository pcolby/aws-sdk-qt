// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelocationsmbrequest.h"
#include "describelocationsmbrequest_p.h"
#include "describelocationsmbresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationSmbRequest
 * \brief The DescribeLocationSmbRequest class provides an interface for DataSync DescribeLocationSmb requests.
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
 * \sa DataSyncClient::describeLocationSmb
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLocationSmbRequest::DescribeLocationSmbRequest(const DescribeLocationSmbRequest &other)
    : DataSyncRequest(new DescribeLocationSmbRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLocationSmbRequest object.
 */
DescribeLocationSmbRequest::DescribeLocationSmbRequest()
    : DataSyncRequest(new DescribeLocationSmbRequestPrivate(DataSyncRequest::DescribeLocationSmbAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLocationSmbRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLocationSmbResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLocationSmbRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLocationSmbResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::DescribeLocationSmbRequestPrivate
 * \brief The DescribeLocationSmbRequestPrivate class provides private implementation for DescribeLocationSmbRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationSmbRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
DescribeLocationSmbRequestPrivate::DescribeLocationSmbRequestPrivate(
    const DataSyncRequest::Action action, DescribeLocationSmbRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLocationSmbRequest
 * class' copy constructor.
 */
DescribeLocationSmbRequestPrivate::DescribeLocationSmbRequestPrivate(
    const DescribeLocationSmbRequestPrivate &other, DescribeLocationSmbRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws

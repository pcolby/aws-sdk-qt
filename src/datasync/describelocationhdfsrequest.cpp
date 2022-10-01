// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelocationhdfsrequest.h"
#include "describelocationhdfsrequest_p.h"
#include "describelocationhdfsresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationHdfsRequest
 * \brief The DescribeLocationHdfsRequest class provides an interface for DataSync DescribeLocationHdfs requests.
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
 * \sa DataSyncClient::describeLocationHdfs
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLocationHdfsRequest::DescribeLocationHdfsRequest(const DescribeLocationHdfsRequest &other)
    : DataSyncRequest(new DescribeLocationHdfsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLocationHdfsRequest object.
 */
DescribeLocationHdfsRequest::DescribeLocationHdfsRequest()
    : DataSyncRequest(new DescribeLocationHdfsRequestPrivate(DataSyncRequest::DescribeLocationHdfsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLocationHdfsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLocationHdfsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLocationHdfsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLocationHdfsResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::DescribeLocationHdfsRequestPrivate
 * \brief The DescribeLocationHdfsRequestPrivate class provides private implementation for DescribeLocationHdfsRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationHdfsRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
DescribeLocationHdfsRequestPrivate::DescribeLocationHdfsRequestPrivate(
    const DataSyncRequest::Action action, DescribeLocationHdfsRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLocationHdfsRequest
 * class' copy constructor.
 */
DescribeLocationHdfsRequestPrivate::DescribeLocationHdfsRequestPrivate(
    const DescribeLocationHdfsRequestPrivate &other, DescribeLocationHdfsRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws

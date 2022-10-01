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

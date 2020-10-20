/*
    Copyright 2013-2020 Paul Colby

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

#include "describelocations3request.h"
#include "describelocations3request_p.h"
#include "describelocations3response.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationS3Request
 * \brief The DescribeLocationS3Request class provides an interface for DataSync DescribeLocationS3 requests.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>AWS DataSync</fullname>
 * 
 *  AWS DataSync is a managed data transfer service that makes it simpler for you to automate moving data between
 *  on-premises storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for AWS DataSync contains documentation for a programming interface that you can use to
 *  manage AWS
 *
 * \sa DataSyncClient::describeLocationS3
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLocationS3Request::DescribeLocationS3Request(const DescribeLocationS3Request &other)
    : DataSyncRequest(new DescribeLocationS3RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLocationS3Request object.
 */
DescribeLocationS3Request::DescribeLocationS3Request()
    : DataSyncRequest(new DescribeLocationS3RequestPrivate(DataSyncRequest::DescribeLocationS3Action, this))
{

}

/*!
 * \reimp
 */
bool DescribeLocationS3Request::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLocationS3Response object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLocationS3Request::response(QNetworkReply * const reply) const
{
    return new DescribeLocationS3Response(*this, reply);
}

/*!
 * \class QtAws::DataSync::DescribeLocationS3RequestPrivate
 * \brief The DescribeLocationS3RequestPrivate class provides private implementation for DescribeLocationS3Request.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationS3RequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
DescribeLocationS3RequestPrivate::DescribeLocationS3RequestPrivate(
    const DataSyncRequest::Action action, DescribeLocationS3Request * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLocationS3Request
 * class' copy constructor.
 */
DescribeLocationS3RequestPrivate::DescribeLocationS3RequestPrivate(
    const DescribeLocationS3RequestPrivate &other, DescribeLocationS3Request * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws

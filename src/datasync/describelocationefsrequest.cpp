/*
    Copyright 2013-2018 Paul Colby

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

#include "describelocationefsrequest.h"
#include "describelocationefsrequest_p.h"
#include "describelocationefsresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationEfsRequest
 * \brief The DescribeLocationEfsRequest class provides an interface for DataSync DescribeLocationEfs requests.
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
 * \sa DataSyncClient::describeLocationEfs
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLocationEfsRequest::DescribeLocationEfsRequest(const DescribeLocationEfsRequest &other)
    : DataSyncRequest(new DescribeLocationEfsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLocationEfsRequest object.
 */
DescribeLocationEfsRequest::DescribeLocationEfsRequest()
    : DataSyncRequest(new DescribeLocationEfsRequestPrivate(DataSyncRequest::DescribeLocationEfsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLocationEfsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLocationEfsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLocationEfsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLocationEfsResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::DescribeLocationEfsRequestPrivate
 * \brief The DescribeLocationEfsRequestPrivate class provides private implementation for DescribeLocationEfsRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationEfsRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
DescribeLocationEfsRequestPrivate::DescribeLocationEfsRequestPrivate(
    const DataSyncRequest::Action action, DescribeLocationEfsRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLocationEfsRequest
 * class' copy constructor.
 */
DescribeLocationEfsRequestPrivate::DescribeLocationEfsRequestPrivate(
    const DescribeLocationEfsRequestPrivate &other, DescribeLocationEfsRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws

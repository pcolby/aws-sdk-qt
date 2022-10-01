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

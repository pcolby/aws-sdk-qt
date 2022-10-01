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

#include "describelocationfsxlustrerequest.h"
#include "describelocationfsxlustrerequest_p.h"
#include "describelocationfsxlustreresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationFsxLustreRequest
 * \brief The DescribeLocationFsxLustreRequest class provides an interface for DataSync DescribeLocationFsxLustre requests.
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
 * \sa DataSyncClient::describeLocationFsxLustre
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLocationFsxLustreRequest::DescribeLocationFsxLustreRequest(const DescribeLocationFsxLustreRequest &other)
    : DataSyncRequest(new DescribeLocationFsxLustreRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLocationFsxLustreRequest object.
 */
DescribeLocationFsxLustreRequest::DescribeLocationFsxLustreRequest()
    : DataSyncRequest(new DescribeLocationFsxLustreRequestPrivate(DataSyncRequest::DescribeLocationFsxLustreAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLocationFsxLustreRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLocationFsxLustreResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLocationFsxLustreRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLocationFsxLustreResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::DescribeLocationFsxLustreRequestPrivate
 * \brief The DescribeLocationFsxLustreRequestPrivate class provides private implementation for DescribeLocationFsxLustreRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationFsxLustreRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
DescribeLocationFsxLustreRequestPrivate::DescribeLocationFsxLustreRequestPrivate(
    const DataSyncRequest::Action action, DescribeLocationFsxLustreRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLocationFsxLustreRequest
 * class' copy constructor.
 */
DescribeLocationFsxLustreRequestPrivate::DescribeLocationFsxLustreRequestPrivate(
    const DescribeLocationFsxLustreRequestPrivate &other, DescribeLocationFsxLustreRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws

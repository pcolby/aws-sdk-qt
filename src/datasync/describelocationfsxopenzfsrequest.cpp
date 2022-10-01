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

#include "describelocationfsxopenzfsrequest.h"
#include "describelocationfsxopenzfsrequest_p.h"
#include "describelocationfsxopenzfsresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationFsxOpenZfsRequest
 * \brief The DescribeLocationFsxOpenZfsRequest class provides an interface for DataSync DescribeLocationFsxOpenZfs requests.
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
 * \sa DataSyncClient::describeLocationFsxOpenZfs
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLocationFsxOpenZfsRequest::DescribeLocationFsxOpenZfsRequest(const DescribeLocationFsxOpenZfsRequest &other)
    : DataSyncRequest(new DescribeLocationFsxOpenZfsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLocationFsxOpenZfsRequest object.
 */
DescribeLocationFsxOpenZfsRequest::DescribeLocationFsxOpenZfsRequest()
    : DataSyncRequest(new DescribeLocationFsxOpenZfsRequestPrivate(DataSyncRequest::DescribeLocationFsxOpenZfsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLocationFsxOpenZfsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLocationFsxOpenZfsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLocationFsxOpenZfsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLocationFsxOpenZfsResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::DescribeLocationFsxOpenZfsRequestPrivate
 * \brief The DescribeLocationFsxOpenZfsRequestPrivate class provides private implementation for DescribeLocationFsxOpenZfsRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationFsxOpenZfsRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
DescribeLocationFsxOpenZfsRequestPrivate::DescribeLocationFsxOpenZfsRequestPrivate(
    const DataSyncRequest::Action action, DescribeLocationFsxOpenZfsRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLocationFsxOpenZfsRequest
 * class' copy constructor.
 */
DescribeLocationFsxOpenZfsRequestPrivate::DescribeLocationFsxOpenZfsRequestPrivate(
    const DescribeLocationFsxOpenZfsRequestPrivate &other, DescribeLocationFsxOpenZfsRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws

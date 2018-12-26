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

#include "describetaskrequest.h"
#include "describetaskrequest_p.h"
#include "describetaskresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeTaskRequest
 * \brief The DescribeTaskRequest class provides an interface for DataSync DescribeTask requests.
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
 * \sa DataSyncClient::describeTask
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTaskRequest::DescribeTaskRequest(const DescribeTaskRequest &other)
    : DataSyncRequest(new DescribeTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTaskRequest object.
 */
DescribeTaskRequest::DescribeTaskRequest()
    : DataSyncRequest(new DescribeTaskRequestPrivate(DataSyncRequest::DescribeTaskAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTaskRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTaskResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::DescribeTaskRequestPrivate
 * \brief The DescribeTaskRequestPrivate class provides private implementation for DescribeTaskRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeTaskRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
DescribeTaskRequestPrivate::DescribeTaskRequestPrivate(
    const DataSyncRequest::Action action, DescribeTaskRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTaskRequest
 * class' copy constructor.
 */
DescribeTaskRequestPrivate::DescribeTaskRequestPrivate(
    const DescribeTaskRequestPrivate &other, DescribeTaskRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws

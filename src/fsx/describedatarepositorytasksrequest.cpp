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

#include "describedatarepositorytasksrequest.h"
#include "describedatarepositorytasksrequest_p.h"
#include "describedatarepositorytasksresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DescribeDataRepositoryTasksRequest
 * \brief The DescribeDataRepositoryTasksRequest class provides an interface for FSx DescribeDataRepositoryTasks requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::describeDataRepositoryTasks
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDataRepositoryTasksRequest::DescribeDataRepositoryTasksRequest(const DescribeDataRepositoryTasksRequest &other)
    : FSxRequest(new DescribeDataRepositoryTasksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDataRepositoryTasksRequest object.
 */
DescribeDataRepositoryTasksRequest::DescribeDataRepositoryTasksRequest()
    : FSxRequest(new DescribeDataRepositoryTasksRequestPrivate(FSxRequest::DescribeDataRepositoryTasksAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDataRepositoryTasksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDataRepositoryTasksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDataRepositoryTasksRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDataRepositoryTasksResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::DescribeDataRepositoryTasksRequestPrivate
 * \brief The DescribeDataRepositoryTasksRequestPrivate class provides private implementation for DescribeDataRepositoryTasksRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DescribeDataRepositoryTasksRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
DescribeDataRepositoryTasksRequestPrivate::DescribeDataRepositoryTasksRequestPrivate(
    const FSxRequest::Action action, DescribeDataRepositoryTasksRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDataRepositoryTasksRequest
 * class' copy constructor.
 */
DescribeDataRepositoryTasksRequestPrivate::DescribeDataRepositoryTasksRequestPrivate(
    const DescribeDataRepositoryTasksRequestPrivate &other, DescribeDataRepositoryTasksRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws

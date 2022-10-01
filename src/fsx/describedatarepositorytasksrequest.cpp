// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

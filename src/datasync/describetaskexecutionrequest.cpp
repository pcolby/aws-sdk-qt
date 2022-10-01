// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetaskexecutionrequest.h"
#include "describetaskexecutionrequest_p.h"
#include "describetaskexecutionresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeTaskExecutionRequest
 * \brief The DescribeTaskExecutionRequest class provides an interface for DataSync DescribeTaskExecution requests.
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
 * \sa DataSyncClient::describeTaskExecution
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTaskExecutionRequest::DescribeTaskExecutionRequest(const DescribeTaskExecutionRequest &other)
    : DataSyncRequest(new DescribeTaskExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTaskExecutionRequest object.
 */
DescribeTaskExecutionRequest::DescribeTaskExecutionRequest()
    : DataSyncRequest(new DescribeTaskExecutionRequestPrivate(DataSyncRequest::DescribeTaskExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTaskExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTaskExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTaskExecutionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTaskExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::DescribeTaskExecutionRequestPrivate
 * \brief The DescribeTaskExecutionRequestPrivate class provides private implementation for DescribeTaskExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeTaskExecutionRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
DescribeTaskExecutionRequestPrivate::DescribeTaskExecutionRequestPrivate(
    const DataSyncRequest::Action action, DescribeTaskExecutionRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTaskExecutionRequest
 * class' copy constructor.
 */
DescribeTaskExecutionRequestPrivate::DescribeTaskExecutionRequestPrivate(
    const DescribeTaskExecutionRequestPrivate &other, DescribeTaskExecutionRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws

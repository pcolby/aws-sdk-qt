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

#include "starttaskexecutionrequest.h"
#include "starttaskexecutionrequest_p.h"
#include "starttaskexecutionresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::StartTaskExecutionRequest
 * \brief The StartTaskExecutionRequest class provides an interface for DataSync StartTaskExecution requests.
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
 * \sa DataSyncClient::startTaskExecution
 */

/*!
 * Constructs a copy of \a other.
 */
StartTaskExecutionRequest::StartTaskExecutionRequest(const StartTaskExecutionRequest &other)
    : DataSyncRequest(new StartTaskExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartTaskExecutionRequest object.
 */
StartTaskExecutionRequest::StartTaskExecutionRequest()
    : DataSyncRequest(new StartTaskExecutionRequestPrivate(DataSyncRequest::StartTaskExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool StartTaskExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartTaskExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartTaskExecutionRequest::response(QNetworkReply * const reply) const
{
    return new StartTaskExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::StartTaskExecutionRequestPrivate
 * \brief The StartTaskExecutionRequestPrivate class provides private implementation for StartTaskExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a StartTaskExecutionRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
StartTaskExecutionRequestPrivate::StartTaskExecutionRequestPrivate(
    const DataSyncRequest::Action action, StartTaskExecutionRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartTaskExecutionRequest
 * class' copy constructor.
 */
StartTaskExecutionRequestPrivate::StartTaskExecutionRequestPrivate(
    const StartTaskExecutionRequestPrivate &other, StartTaskExecutionRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws

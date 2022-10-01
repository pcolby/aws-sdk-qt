// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetaskexecutionrequest.h"
#include "updatetaskexecutionrequest_p.h"
#include "updatetaskexecutionresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::UpdateTaskExecutionRequest
 * \brief The UpdateTaskExecutionRequest class provides an interface for DataSync UpdateTaskExecution requests.
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
 * \sa DataSyncClient::updateTaskExecution
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTaskExecutionRequest::UpdateTaskExecutionRequest(const UpdateTaskExecutionRequest &other)
    : DataSyncRequest(new UpdateTaskExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTaskExecutionRequest object.
 */
UpdateTaskExecutionRequest::UpdateTaskExecutionRequest()
    : DataSyncRequest(new UpdateTaskExecutionRequestPrivate(DataSyncRequest::UpdateTaskExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTaskExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTaskExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTaskExecutionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTaskExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::UpdateTaskExecutionRequestPrivate
 * \brief The UpdateTaskExecutionRequestPrivate class provides private implementation for UpdateTaskExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a UpdateTaskExecutionRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
UpdateTaskExecutionRequestPrivate::UpdateTaskExecutionRequestPrivate(
    const DataSyncRequest::Action action, UpdateTaskExecutionRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTaskExecutionRequest
 * class' copy constructor.
 */
UpdateTaskExecutionRequestPrivate::UpdateTaskExecutionRequestPrivate(
    const UpdateTaskExecutionRequestPrivate &other, UpdateTaskExecutionRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws

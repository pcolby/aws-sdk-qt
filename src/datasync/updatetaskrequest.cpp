// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetaskrequest.h"
#include "updatetaskrequest_p.h"
#include "updatetaskresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::UpdateTaskRequest
 * \brief The UpdateTaskRequest class provides an interface for DataSync UpdateTask requests.
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
 * \sa DataSyncClient::updateTask
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTaskRequest::UpdateTaskRequest(const UpdateTaskRequest &other)
    : DataSyncRequest(new UpdateTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTaskRequest object.
 */
UpdateTaskRequest::UpdateTaskRequest()
    : DataSyncRequest(new UpdateTaskRequestPrivate(DataSyncRequest::UpdateTaskAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTaskRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTaskResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::UpdateTaskRequestPrivate
 * \brief The UpdateTaskRequestPrivate class provides private implementation for UpdateTaskRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a UpdateTaskRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
UpdateTaskRequestPrivate::UpdateTaskRequestPrivate(
    const DataSyncRequest::Action action, UpdateTaskRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTaskRequest
 * class' copy constructor.
 */
UpdateTaskRequestPrivate::UpdateTaskRequestPrivate(
    const UpdateTaskRequestPrivate &other, UpdateTaskRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetaskrequest.h"
#include "deletetaskrequest_p.h"
#include "deletetaskresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DeleteTaskRequest
 * \brief The DeleteTaskRequest class provides an interface for DataSync DeleteTask requests.
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
 * \sa DataSyncClient::deleteTask
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTaskRequest::DeleteTaskRequest(const DeleteTaskRequest &other)
    : DataSyncRequest(new DeleteTaskRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTaskRequest object.
 */
DeleteTaskRequest::DeleteTaskRequest()
    : DataSyncRequest(new DeleteTaskRequestPrivate(DataSyncRequest::DeleteTaskAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTaskRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTaskResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTaskRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTaskResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::DeleteTaskRequestPrivate
 * \brief The DeleteTaskRequestPrivate class provides private implementation for DeleteTaskRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DeleteTaskRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
DeleteTaskRequestPrivate::DeleteTaskRequestPrivate(
    const DataSyncRequest::Action action, DeleteTaskRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTaskRequest
 * class' copy constructor.
 */
DeleteTaskRequestPrivate::DeleteTaskRequestPrivate(
    const DeleteTaskRequestPrivate &other, DeleteTaskRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws

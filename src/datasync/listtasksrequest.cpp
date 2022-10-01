// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtasksrequest.h"
#include "listtasksrequest_p.h"
#include "listtasksresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::ListTasksRequest
 * \brief The ListTasksRequest class provides an interface for DataSync ListTasks requests.
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
 * \sa DataSyncClient::listTasks
 */

/*!
 * Constructs a copy of \a other.
 */
ListTasksRequest::ListTasksRequest(const ListTasksRequest &other)
    : DataSyncRequest(new ListTasksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTasksRequest object.
 */
ListTasksRequest::ListTasksRequest()
    : DataSyncRequest(new ListTasksRequestPrivate(DataSyncRequest::ListTasksAction, this))
{

}

/*!
 * \reimp
 */
bool ListTasksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTasksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTasksRequest::response(QNetworkReply * const reply) const
{
    return new ListTasksResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::ListTasksRequestPrivate
 * \brief The ListTasksRequestPrivate class provides private implementation for ListTasksRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a ListTasksRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
ListTasksRequestPrivate::ListTasksRequestPrivate(
    const DataSyncRequest::Action action, ListTasksRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTasksRequest
 * class' copy constructor.
 */
ListTasksRequestPrivate::ListTasksRequestPrivate(
    const ListTasksRequestPrivate &other, ListTasksRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws

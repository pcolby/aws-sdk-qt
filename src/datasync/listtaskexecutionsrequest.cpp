// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtaskexecutionsrequest.h"
#include "listtaskexecutionsrequest_p.h"
#include "listtaskexecutionsresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::ListTaskExecutionsRequest
 * \brief The ListTaskExecutionsRequest class provides an interface for DataSync ListTaskExecutions requests.
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
 * \sa DataSyncClient::listTaskExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
ListTaskExecutionsRequest::ListTaskExecutionsRequest(const ListTaskExecutionsRequest &other)
    : DataSyncRequest(new ListTaskExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTaskExecutionsRequest object.
 */
ListTaskExecutionsRequest::ListTaskExecutionsRequest()
    : DataSyncRequest(new ListTaskExecutionsRequestPrivate(DataSyncRequest::ListTaskExecutionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTaskExecutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTaskExecutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTaskExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListTaskExecutionsResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::ListTaskExecutionsRequestPrivate
 * \brief The ListTaskExecutionsRequestPrivate class provides private implementation for ListTaskExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a ListTaskExecutionsRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
ListTaskExecutionsRequestPrivate::ListTaskExecutionsRequestPrivate(
    const DataSyncRequest::Action action, ListTaskExecutionsRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTaskExecutionsRequest
 * class' copy constructor.
 */
ListTaskExecutionsRequestPrivate::ListTaskExecutionsRequestPrivate(
    const ListTaskExecutionsRequestPrivate &other, ListTaskExecutionsRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws

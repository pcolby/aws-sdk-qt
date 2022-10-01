// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listagentsrequest.h"
#include "listagentsrequest_p.h"
#include "listagentsresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::ListAgentsRequest
 * \brief The ListAgentsRequest class provides an interface for DataSync ListAgents requests.
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
 * \sa DataSyncClient::listAgents
 */

/*!
 * Constructs a copy of \a other.
 */
ListAgentsRequest::ListAgentsRequest(const ListAgentsRequest &other)
    : DataSyncRequest(new ListAgentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAgentsRequest object.
 */
ListAgentsRequest::ListAgentsRequest()
    : DataSyncRequest(new ListAgentsRequestPrivate(DataSyncRequest::ListAgentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAgentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAgentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAgentsRequest::response(QNetworkReply * const reply) const
{
    return new ListAgentsResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::ListAgentsRequestPrivate
 * \brief The ListAgentsRequestPrivate class provides private implementation for ListAgentsRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a ListAgentsRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
ListAgentsRequestPrivate::ListAgentsRequestPrivate(
    const DataSyncRequest::Action action, ListAgentsRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAgentsRequest
 * class' copy constructor.
 */
ListAgentsRequestPrivate::ListAgentsRequestPrivate(
    const ListAgentsRequestPrivate &other, ListAgentsRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws

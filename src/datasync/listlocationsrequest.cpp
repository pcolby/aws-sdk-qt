// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlocationsrequest.h"
#include "listlocationsrequest_p.h"
#include "listlocationsresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::ListLocationsRequest
 * \brief The ListLocationsRequest class provides an interface for DataSync ListLocations requests.
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
 * \sa DataSyncClient::listLocations
 */

/*!
 * Constructs a copy of \a other.
 */
ListLocationsRequest::ListLocationsRequest(const ListLocationsRequest &other)
    : DataSyncRequest(new ListLocationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLocationsRequest object.
 */
ListLocationsRequest::ListLocationsRequest()
    : DataSyncRequest(new ListLocationsRequestPrivate(DataSyncRequest::ListLocationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLocationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLocationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLocationsRequest::response(QNetworkReply * const reply) const
{
    return new ListLocationsResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::ListLocationsRequestPrivate
 * \brief The ListLocationsRequestPrivate class provides private implementation for ListLocationsRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a ListLocationsRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
ListLocationsRequestPrivate::ListLocationsRequestPrivate(
    const DataSyncRequest::Action action, ListLocationsRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLocationsRequest
 * class' copy constructor.
 */
ListLocationsRequestPrivate::ListLocationsRequestPrivate(
    const ListLocationsRequestPrivate &other, ListLocationsRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws

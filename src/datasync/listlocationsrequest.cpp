/*
    Copyright 2013-2021 Paul Colby

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

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

#include "listitemsrequest.h"
#include "listitemsrequest_p.h"
#include "listitemsresponse.h"
#include "mediastoredatarequest_p.h"

namespace QtAws {
namespace MediaStoreData {

/*!
 * \class QtAws::MediaStoreData::ListItemsRequest
 * \brief The ListItemsRequest class provides an interface for MediaStoreData ListItems requests.
 *
 * \inmodule QtAwsMediaStoreData
 *
 *  An AWS Elemental MediaStore asset is an object, similar to an object in the Amazon S3 service. Objects are the
 *  fundamental entities that are stored in AWS Elemental
 *
 * \sa MediaStoreDataClient::listItems
 */

/*!
 * Constructs a copy of \a other.
 */
ListItemsRequest::ListItemsRequest(const ListItemsRequest &other)
    : MediaStoreDataRequest(new ListItemsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListItemsRequest object.
 */
ListItemsRequest::ListItemsRequest()
    : MediaStoreDataRequest(new ListItemsRequestPrivate(MediaStoreDataRequest::ListItemsAction, this))
{

}

/*!
 * \reimp
 */
bool ListItemsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListItemsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListItemsRequest::response(QNetworkReply * const reply) const
{
    return new ListItemsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaStoreData::ListItemsRequestPrivate
 * \brief The ListItemsRequestPrivate class provides private implementation for ListItemsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaStoreData
 */

/*!
 * Constructs a ListItemsRequestPrivate object for MediaStoreData \a action,
 * with public implementation \a q.
 */
ListItemsRequestPrivate::ListItemsRequestPrivate(
    const MediaStoreDataRequest::Action action, ListItemsRequest * const q)
    : MediaStoreDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListItemsRequest
 * class' copy constructor.
 */
ListItemsRequestPrivate::ListItemsRequestPrivate(
    const ListItemsRequestPrivate &other, ListItemsRequest * const q)
    : MediaStoreDataRequestPrivate(other, q)
{

}

} // namespace MediaStoreData
} // namespace QtAws

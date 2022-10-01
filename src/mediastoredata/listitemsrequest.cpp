// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

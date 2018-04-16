/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listitemsrequest.h"
#include "listitemsrequest_p.h"
#include "listitemsresponse.h"
#include "mediastoredatarequest_p.h"

namespace QtAws {
namespace MediaStoreData {

/*!
 * \class QtAws::MediaStoreData::ListItemsRequest
 *
 * \brief The ListItemsRequest class encapsulates MediaStoreData ListItems requests.
 *
 * \ingroup MediaStoreData
 *
 *  An AWS Elemental MediaStore asset is an object, similar to an object in the Amazon S3 service. Objects are the
 *  fundamental entities that are stored in AWS Elemental
 *
 * \sa MediaStoreDataClient::listItems
 */

/*!
 * @brief  Constructs a new ListItemsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListItemsRequest::ListItemsRequest(const ListItemsRequest &other)
    : MediaStoreDataRequest(new ListItemsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListItemsRequest object.
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
 * @brief  Construct an ListItemsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListItemsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaStoreDataClient::send
 */
QtAws::Core::AwsAbstractResponse * ListItemsRequest::response(QNetworkReply * const reply) const
{
    return new ListItemsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListItemsRequestPrivate
 *
 * @brief  Private implementation for ListItemsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListItemsRequestPrivate object.
 *
 * @param  action  MediaStoreData action being performed.
 * @param  q       Pointer to this object's public ListItemsRequest instance.
 */
ListItemsRequestPrivate::ListItemsRequestPrivate(
    const MediaStoreDataRequest::Action action, ListItemsRequest * const q)
    : MediaStoreDataRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListItemsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListItemsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListItemsRequest instance.
 */
ListItemsRequestPrivate::ListItemsRequestPrivate(
    const ListItemsRequestPrivate &other, ListItemsRequest * const q)
    : MediaStoreDataRequestPrivate(other, q)
{

}

} // namespace MediaStoreData
} // namespace QtAws

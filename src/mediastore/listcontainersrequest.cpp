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

#include "listcontainersrequest.h"
#include "listcontainersrequest_p.h"
#include "listcontainersresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::ListContainersRequest
 *
 * \brief The ListContainersRequest class provides an interface for MediaStore ListContainers requests.
 *
 * \ingroup MediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::listContainers
 */

/*!
 * @brief  Constructs a new ListContainersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListContainersRequest::ListContainersRequest(const ListContainersRequest &other)
    : MediaStoreRequest(new ListContainersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListContainersRequest object.
 */
ListContainersRequest::ListContainersRequest()
    : MediaStoreRequest(new ListContainersRequestPrivate(MediaStoreRequest::ListContainersAction, this))
{

}

/*!
 * \reimp
 */
bool ListContainersRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListContainersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListContainersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaStoreClient::send
 */
QtAws::Core::AwsAbstractResponse * ListContainersRequest::response(QNetworkReply * const reply) const
{
    return new ListContainersResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListContainersRequestPrivate
 *
 * @brief  Private implementation for ListContainersRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListContainersRequestPrivate object.
 *
 * @param  action  MediaStore action being performed.
 * @param  q       Pointer to this object's public ListContainersRequest instance.
 */
ListContainersRequestPrivate::ListContainersRequestPrivate(
    const MediaStoreRequest::Action action, ListContainersRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListContainersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListContainersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListContainersRequest instance.
 */
ListContainersRequestPrivate::ListContainersRequestPrivate(
    const ListContainersRequestPrivate &other, ListContainersRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws

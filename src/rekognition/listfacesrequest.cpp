/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listfacesrequest.h"
#include "listfacesrequest_p.h"
#include "listfacesresponse.h"
#include "rekognitionrequest_p.h"

namespace AWS {
namespace Rekognition {

/**
 * @class  ListFacesRequest
 *
 * @brief  Implements Rekognition ListFaces requests.
 *
 * @see    RekognitionClient::listFaces
 */

/**
 * @brief  Constructs a new ListFacesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListFacesRequest::ListFacesRequest(const ListFacesRequest &other)
    : RekognitionRequest(new ListFacesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListFacesRequest object.
 */
ListFacesRequest::ListFacesRequest()
    : RekognitionRequest(new ListFacesRequestPrivate(RekognitionRequest::ListFacesAction, this))
{

}

bool ListFacesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListFacesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListFacesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RekognitionClient::send
 */
AwsAbstractResponse * ListFacesRequest::response(QNetworkReply * const reply) const
{
    return new ListFacesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListFacesRequestPrivate
 *
 * @brief  Private implementation for ListFacesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListFacesRequestPrivate object.
 *
 * @param  action  Rekognition action being performed.
 * @param  q       Pointer to this object's public ListFacesRequest instance.
 */
ListFacesRequestPrivate::ListFacesRequestPrivate(
    const RekognitionRequest::Action action, ListFacesRequest * const q)
    : ListFacesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListFacesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListFacesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListFacesRequest instance.
 */
ListFacesRequestPrivate::ListFacesRequestPrivate(
    const ListFacesRequestPrivate &other, ListFacesRequest * const q)
    : ListFacesPrivate(other, q)
{

}

} // namespace Rekognition
} // namespace AWS

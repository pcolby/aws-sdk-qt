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

#include "listindicesrequest.h"
#include "listindicesrequest_p.h"
#include "listindicesresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  ListIndicesRequest
 *
 * @brief  Implements IoT ListIndices requests.
 *
 * @see    IoTClient::listIndices
 */

/**
 * @brief  Constructs a new ListIndicesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListIndicesResponse::ListIndicesResponse(

/**
 * @brief  Constructs a new ListIndicesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListIndicesRequest::ListIndicesRequest(const ListIndicesRequest &other)
    : IoTRequest(new ListIndicesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListIndicesRequest object.
 */
ListIndicesRequest::ListIndicesRequest()
    : IoTRequest(new ListIndicesRequestPrivate(IoTRequest::ListIndicesAction, this))
{

}

bool ListIndicesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListIndicesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListIndicesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ListIndicesRequest::response(QNetworkReply * const reply) const
{
    return new ListIndicesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListIndicesRequestPrivate
 *
 * @brief  Private implementation for ListIndicesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListIndicesRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListIndicesRequest instance.
 */
ListIndicesRequestPrivate::ListIndicesRequestPrivate(
    const IoTRequest::Action action, ListIndicesRequest * const q)
    : ListIndicesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListIndicesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListIndicesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListIndicesRequest instance.
 */
ListIndicesRequestPrivate::ListIndicesRequestPrivate(
    const ListIndicesRequestPrivate &other, ListIndicesRequest * const q)
    : ListIndicesPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS

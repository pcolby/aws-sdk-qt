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

#include "listuploadsrequest.h"
#include "listuploadsrequest_p.h"
#include "listuploadsresponse.h"
#include "devicefarmrequest_p.h"

namespace AWS {
namespace DeviceFarm {

/**
 * @class  ListUploadsRequest
 *
 * @brief  Implements DeviceFarm ListUploads requests.
 *
 * @see    DeviceFarmClient::listUploads
 */

/**
 * @brief  Constructs a new ListUploadsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListUploadsResponse::ListUploadsResponse(

/**
 * @brief  Constructs a new ListUploadsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListUploadsRequest::ListUploadsRequest(const ListUploadsRequest &other)
    : DeviceFarmRequest(new ListUploadsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListUploadsRequest object.
 */
ListUploadsRequest::ListUploadsRequest()
    : DeviceFarmRequest(new ListUploadsRequestPrivate(DeviceFarmRequest::ListUploadsAction, this))
{

}

bool ListUploadsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListUploadsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListUploadsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * ListUploadsRequest::response(QNetworkReply * const reply) const
{
    return new ListUploadsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListUploadsRequestPrivate
 *
 * @brief  Private implementation for ListUploadsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListUploadsRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public ListUploadsRequest instance.
 */
ListUploadsRequestPrivate::ListUploadsRequestPrivate(
    const DeviceFarmRequest::Action action, ListUploadsRequest * const q)
    : ListUploadsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListUploadsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListUploadsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListUploadsRequest instance.
 */
ListUploadsRequestPrivate::ListUploadsRequestPrivate(
    const ListUploadsRequestPrivate &other, ListUploadsRequest * const q)
    : ListUploadsPrivate(other, q)
{

}

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

#include "listmfadevicesrequest.h"
#include "listmfadevicesrequest_p.h"
#include "listmfadevicesresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListMFADevicesRequest
 *
 * @brief  Implements IAM ListMFADevices requests.
 *
 * @see    IAMClient::listMFADevices
 */

/**
 * @brief  Constructs a new ListMFADevicesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListMFADevicesRequest::ListMFADevicesRequest(const ListMFADevicesRequest &other)
    : IAMRequest(new ListMFADevicesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListMFADevicesRequest object.
 */
ListMFADevicesRequest::ListMFADevicesRequest()
    : IAMRequest(new ListMFADevicesRequestPrivate(IAMRequest::ListMFADevicesAction, this))
{

}

bool ListMFADevicesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListMFADevicesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListMFADevicesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListMFADevicesRequest::response(QNetworkReply * const reply) const
{
    return new ListMFADevicesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListMFADevicesRequestPrivate
 *
 * @brief  Private implementation for ListMFADevicesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListMFADevicesRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListMFADevicesRequest instance.
 */
ListMFADevicesRequestPrivate::ListMFADevicesRequestPrivate(
    const IAMRequest::Action action, ListMFADevicesRequest * const q)
    : ListMFADevicesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListMFADevicesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListMFADevicesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListMFADevicesRequest instance.
 */
ListMFADevicesRequestPrivate::ListMFADevicesRequestPrivate(
    const ListMFADevicesRequestPrivate &other, ListMFADevicesRequest * const q)
    : ListMFADevicesPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS

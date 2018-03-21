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

#include "listvirtualmfadevicesrequest.h"
#include "listvirtualmfadevicesrequest_p.h"
#include "listvirtualmfadevicesresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListVirtualMFADevicesRequest
 *
 * @brief  Implements IAM ListVirtualMFADevices requests.
 *
 * @see    IAMClient::listVirtualMFADevices
 */

/**
 * @brief  Constructs a new ListVirtualMFADevicesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListVirtualMFADevicesResponse::ListVirtualMFADevicesResponse(

/**
 * @brief  Constructs a new ListVirtualMFADevicesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListVirtualMFADevicesRequest::ListVirtualMFADevicesRequest(const ListVirtualMFADevicesRequest &other)
    : IAMRequest(new ListVirtualMFADevicesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListVirtualMFADevicesRequest object.
 */
ListVirtualMFADevicesRequest::ListVirtualMFADevicesRequest()
    : IAMRequest(new ListVirtualMFADevicesRequestPrivate(IAMRequest::ListVirtualMFADevicesAction, this))
{

}

bool ListVirtualMFADevicesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListVirtualMFADevicesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListVirtualMFADevicesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListVirtualMFADevicesRequest::response(QNetworkReply * const reply) const
{
    return new ListVirtualMFADevicesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListVirtualMFADevicesRequestPrivate
 *
 * @brief  Private implementation for ListVirtualMFADevicesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListVirtualMFADevicesRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListVirtualMFADevicesRequest instance.
 */
ListVirtualMFADevicesRequestPrivate::ListVirtualMFADevicesRequestPrivate(
    const IAMRequest::Action action, ListVirtualMFADevicesRequest * const q)
    : ListVirtualMFADevicesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListVirtualMFADevicesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListVirtualMFADevicesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListVirtualMFADevicesRequest instance.
 */
ListVirtualMFADevicesRequestPrivate::ListVirtualMFADevicesRequestPrivate(
    const ListVirtualMFADevicesRequestPrivate &other, ListVirtualMFADevicesRequest * const q)
    : ListVirtualMFADevicesPrivate(other, q)
{

}

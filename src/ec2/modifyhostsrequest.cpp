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

#include "modifyhostsrequest.h"
#include "modifyhostsrequest_p.h"
#include "modifyhostsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  ModifyHostsRequest
 *
 * @brief  Implements EC2 ModifyHosts requests.
 *
 * @see    EC2Client::modifyHosts
 */

/**
 * @brief  Constructs a new ModifyHostsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyHostsRequest::ModifyHostsRequest(const ModifyHostsRequest &other)
    : EC2Request(new ModifyHostsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyHostsRequest object.
 */
ModifyHostsRequest::ModifyHostsRequest()
    : EC2Request(new ModifyHostsRequestPrivate(EC2Request::ModifyHostsAction, this))
{

}

bool ModifyHostsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyHostsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyHostsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * ModifyHostsRequest::response(QNetworkReply * const reply) const
{
    return new ModifyHostsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyHostsRequestPrivate
 *
 * @brief  Private implementation for ModifyHostsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyHostsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ModifyHostsRequest instance.
 */
ModifyHostsRequestPrivate::ModifyHostsRequestPrivate(
    const EC2Request::Action action, ModifyHostsRequest * const q)
    : ModifyHostsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyHostsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyHostsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyHostsRequest instance.
 */
ModifyHostsRequestPrivate::ModifyHostsRequestPrivate(
    const ModifyHostsRequestPrivate &other, ModifyHostsRequest * const q)
    : ModifyHostsPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws

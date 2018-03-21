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

#include "resetnetworkinterfaceattributerequest.h"
#include "resetnetworkinterfaceattributerequest_p.h"
#include "resetnetworkinterfaceattributeresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ResetNetworkInterfaceAttributeRequest
 *
 * @brief  Implements EC2 ResetNetworkInterfaceAttribute requests.
 *
 * @see    EC2Client::resetNetworkInterfaceAttribute
 */

/**
 * @brief  Constructs a new ResetNetworkInterfaceAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResetNetworkInterfaceAttributeResponse::ResetNetworkInterfaceAttributeResponse(

/**
 * @brief  Constructs a new ResetNetworkInterfaceAttributeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResetNetworkInterfaceAttributeRequest::ResetNetworkInterfaceAttributeRequest(const ResetNetworkInterfaceAttributeRequest &other)
    : EC2Request(new ResetNetworkInterfaceAttributeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ResetNetworkInterfaceAttributeRequest object.
 */
ResetNetworkInterfaceAttributeRequest::ResetNetworkInterfaceAttributeRequest()
    : EC2Request(new ResetNetworkInterfaceAttributeRequestPrivate(EC2Request::ResetNetworkInterfaceAttributeAction, this))
{

}

bool ResetNetworkInterfaceAttributeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ResetNetworkInterfaceAttributeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ResetNetworkInterfaceAttributeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ResetNetworkInterfaceAttributeRequest::response(QNetworkReply * const reply) const
{
    return new ResetNetworkInterfaceAttributeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ResetNetworkInterfaceAttributeRequestPrivate
 *
 * @brief  Private implementation for ResetNetworkInterfaceAttributeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetNetworkInterfaceAttributeRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ResetNetworkInterfaceAttributeRequest instance.
 */
ResetNetworkInterfaceAttributeRequestPrivate::ResetNetworkInterfaceAttributeRequestPrivate(
    const EC2Request::Action action, ResetNetworkInterfaceAttributeRequest * const q)
    : ResetNetworkInterfaceAttributePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResetNetworkInterfaceAttributeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ResetNetworkInterfaceAttributeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResetNetworkInterfaceAttributeRequest instance.
 */
ResetNetworkInterfaceAttributeRequestPrivate::ResetNetworkInterfaceAttributeRequestPrivate(
    const ResetNetworkInterfaceAttributeRequestPrivate &other, ResetNetworkInterfaceAttributeRequest * const q)
    : ResetNetworkInterfaceAttributePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS

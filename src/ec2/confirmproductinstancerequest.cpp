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

#include "confirmproductinstancerequest.h"
#include "confirmproductinstancerequest_p.h"
#include "confirmproductinstanceresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ConfirmProductInstanceRequest
 *
 * @brief  Implements EC2 ConfirmProductInstance requests.
 *
 * @see    EC2Client::confirmProductInstance
 */

/**
 * @brief  Constructs a new ConfirmProductInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ConfirmProductInstanceResponse::ConfirmProductInstanceResponse(

/**
 * @brief  Constructs a new ConfirmProductInstanceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ConfirmProductInstanceRequest::ConfirmProductInstanceRequest(const ConfirmProductInstanceRequest &other)
    : EC2Request(new ConfirmProductInstanceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ConfirmProductInstanceRequest object.
 */
ConfirmProductInstanceRequest::ConfirmProductInstanceRequest()
    : EC2Request(new ConfirmProductInstanceRequestPrivate(EC2Request::ConfirmProductInstanceAction, this))
{

}

bool ConfirmProductInstanceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ConfirmProductInstanceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ConfirmProductInstanceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ConfirmProductInstanceRequest::response(QNetworkReply * const reply) const
{
    return new ConfirmProductInstanceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ConfirmProductInstanceRequestPrivate
 *
 * @brief  Private implementation for ConfirmProductInstanceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConfirmProductInstanceRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ConfirmProductInstanceRequest instance.
 */
ConfirmProductInstanceRequestPrivate::ConfirmProductInstanceRequestPrivate(
    const EC2Request::Action action, ConfirmProductInstanceRequest * const q)
    : ConfirmProductInstancePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ConfirmProductInstanceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ConfirmProductInstanceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ConfirmProductInstanceRequest instance.
 */
ConfirmProductInstanceRequestPrivate::ConfirmProductInstanceRequestPrivate(
    const ConfirmProductInstanceRequestPrivate &other, ConfirmProductInstanceRequest * const q)
    : ConfirmProductInstancePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS

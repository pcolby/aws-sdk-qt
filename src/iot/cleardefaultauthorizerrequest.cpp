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

#include "cleardefaultauthorizerrequest.h"
#include "cleardefaultauthorizerrequest_p.h"
#include "cleardefaultauthorizerresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  ClearDefaultAuthorizerRequest
 *
 * @brief  Implements IoT ClearDefaultAuthorizer requests.
 *
 * @see    IoTClient::clearDefaultAuthorizer
 */

/**
 * @brief  Constructs a new ClearDefaultAuthorizerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ClearDefaultAuthorizerResponse::ClearDefaultAuthorizerResponse(

/**
 * @brief  Constructs a new ClearDefaultAuthorizerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ClearDefaultAuthorizerRequest::ClearDefaultAuthorizerRequest(const ClearDefaultAuthorizerRequest &other)
    : IoTRequest(new ClearDefaultAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ClearDefaultAuthorizerRequest object.
 */
ClearDefaultAuthorizerRequest::ClearDefaultAuthorizerRequest()
    : IoTRequest(new ClearDefaultAuthorizerRequestPrivate(IoTRequest::ClearDefaultAuthorizerAction, this))
{

}

bool ClearDefaultAuthorizerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ClearDefaultAuthorizerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ClearDefaultAuthorizerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * ClearDefaultAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new ClearDefaultAuthorizerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ClearDefaultAuthorizerRequestPrivate
 *
 * @brief  Private implementation for ClearDefaultAuthorizerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ClearDefaultAuthorizerRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ClearDefaultAuthorizerRequest instance.
 */
ClearDefaultAuthorizerRequestPrivate::ClearDefaultAuthorizerRequestPrivate(
    const IoTRequest::Action action, ClearDefaultAuthorizerRequest * const q)
    : ClearDefaultAuthorizerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ClearDefaultAuthorizerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ClearDefaultAuthorizerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ClearDefaultAuthorizerRequest instance.
 */
ClearDefaultAuthorizerRequestPrivate::ClearDefaultAuthorizerRequestPrivate(
    const ClearDefaultAuthorizerRequestPrivate &other, ClearDefaultAuthorizerRequest * const q)
    : ClearDefaultAuthorizerPrivate(other, q)
{

}

} // namespace IoT
} // namespace AWS

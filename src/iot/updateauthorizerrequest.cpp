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

#include "updateauthorizerrequest.h"
#include "updateauthorizerrequest_p.h"
#include "updateauthorizerresponse.h"
#include "iotrequest_p.h"

namespace AWS {
namespace IoT {

/**
 * @class  UpdateAuthorizerRequest
 *
 * @brief  Implements IoT UpdateAuthorizer requests.
 *
 * @see    IoTClient::updateAuthorizer
 */

/**
 * @brief  Constructs a new UpdateAuthorizerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAuthorizerResponse::UpdateAuthorizerResponse(

/**
 * @brief  Constructs a new UpdateAuthorizerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateAuthorizerRequest::UpdateAuthorizerRequest(const UpdateAuthorizerRequest &other)
    : IoTRequest(new UpdateAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateAuthorizerRequest object.
 */
UpdateAuthorizerRequest::UpdateAuthorizerRequest()
    : IoTRequest(new UpdateAuthorizerRequestPrivate(IoTRequest::UpdateAuthorizerAction, this))
{

}

bool UpdateAuthorizerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateAuthorizerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateAuthorizerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * UpdateAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAuthorizerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateAuthorizerRequestPrivate
 *
 * @brief  Private implementation for UpdateAuthorizerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAuthorizerRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public UpdateAuthorizerRequest instance.
 */
UpdateAuthorizerRequestPrivate::UpdateAuthorizerRequestPrivate(
    const IoTRequest::Action action, UpdateAuthorizerRequest * const q)
    : UpdateAuthorizerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAuthorizerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateAuthorizerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateAuthorizerRequest instance.
 */
UpdateAuthorizerRequestPrivate::UpdateAuthorizerRequestPrivate(
    const UpdateAuthorizerRequestPrivate &other, UpdateAuthorizerRequest * const q)
    : UpdateAuthorizerPrivate(other, q)
{

}

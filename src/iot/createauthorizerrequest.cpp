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

#include "createauthorizerrequest.h"
#include "createauthorizerrequest_p.h"
#include "createauthorizerresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  CreateAuthorizerRequest
 *
 * @brief  Implements IoT CreateAuthorizer requests.
 *
 * @see    IoTClient::createAuthorizer
 */

/**
 * @brief  Constructs a new CreateAuthorizerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateAuthorizerRequest::CreateAuthorizerRequest(const CreateAuthorizerRequest &other)
    : IoTRequest(new CreateAuthorizerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateAuthorizerRequest object.
 */
CreateAuthorizerRequest::CreateAuthorizerRequest()
    : IoTRequest(new CreateAuthorizerRequestPrivate(IoTRequest::CreateAuthorizerAction, this))
{

}

bool CreateAuthorizerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateAuthorizerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateAuthorizerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IoTClient::send
 */
AwsAbstractResponse * CreateAuthorizerRequest::response(QNetworkReply * const reply) const
{
    return new CreateAuthorizerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateAuthorizerRequestPrivate
 *
 * @brief  Private implementation for CreateAuthorizerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAuthorizerRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public CreateAuthorizerRequest instance.
 */
CreateAuthorizerRequestPrivate::CreateAuthorizerRequestPrivate(
    const IoTRequest::Action action, CreateAuthorizerRequest * const q)
    : CreateAuthorizerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateAuthorizerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateAuthorizerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateAuthorizerRequest instance.
 */
CreateAuthorizerRequestPrivate::CreateAuthorizerRequestPrivate(
    const CreateAuthorizerRequestPrivate &other, CreateAuthorizerRequest * const q)
    : CreateAuthorizerPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws

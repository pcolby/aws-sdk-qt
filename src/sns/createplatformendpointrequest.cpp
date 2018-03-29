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

#include "createplatformendpointrequest.h"
#include "createplatformendpointrequest_p.h"
#include "createplatformendpointresponse.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/**
 * @class  CreatePlatformEndpointRequest
 *
 * @brief  Implements SNS CreatePlatformEndpoint requests.
 *
 * @see    SNSClient::createPlatformEndpoint
 */

/**
 * @brief  Constructs a new CreatePlatformEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePlatformEndpointRequest::CreatePlatformEndpointRequest(const CreatePlatformEndpointRequest &other)
    : SNSRequest(new CreatePlatformEndpointRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreatePlatformEndpointRequest object.
 */
CreatePlatformEndpointRequest::CreatePlatformEndpointRequest()
    : SNSRequest(new CreatePlatformEndpointRequestPrivate(SNSRequest::CreatePlatformEndpointAction, this))
{

}

bool CreatePlatformEndpointRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreatePlatformEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePlatformEndpointResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SNSClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePlatformEndpointRequest::response(QNetworkReply * const reply) const
{
    return new CreatePlatformEndpointResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreatePlatformEndpointRequestPrivate
 *
 * @brief  Private implementation for CreatePlatformEndpointRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePlatformEndpointRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public CreatePlatformEndpointRequest instance.
 */
CreatePlatformEndpointRequestPrivate::CreatePlatformEndpointRequestPrivate(
    const SNSRequest::Action action, CreatePlatformEndpointRequest * const q)
    : CreatePlatformEndpointPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreatePlatformEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePlatformEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePlatformEndpointRequest instance.
 */
CreatePlatformEndpointRequestPrivate::CreatePlatformEndpointRequestPrivate(
    const CreatePlatformEndpointRequestPrivate &other, CreatePlatformEndpointRequest * const q)
    : CreatePlatformEndpointPrivate(other, q)
{

}

} // namespace SNS
} // namespace QtAws

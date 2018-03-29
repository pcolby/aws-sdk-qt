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

#include "createplatformapplicationrequest.h"
#include "createplatformapplicationrequest_p.h"
#include "createplatformapplicationresponse.h"
#include "snsrequest_p.h"

namespace AWS {
namespace SNS {

/**
 * @class  CreatePlatformApplicationRequest
 *
 * @brief  Implements SNS CreatePlatformApplication requests.
 *
 * @see    SNSClient::createPlatformApplication
 */

/**
 * @brief  Constructs a new CreatePlatformApplicationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePlatformApplicationRequest::CreatePlatformApplicationRequest(const CreatePlatformApplicationRequest &other)
    : SNSRequest(new CreatePlatformApplicationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreatePlatformApplicationRequest object.
 */
CreatePlatformApplicationRequest::CreatePlatformApplicationRequest()
    : SNSRequest(new CreatePlatformApplicationRequestPrivate(SNSRequest::CreatePlatformApplicationAction, this))
{

}

bool CreatePlatformApplicationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreatePlatformApplicationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePlatformApplicationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * CreatePlatformApplicationRequest::response(QNetworkReply * const reply) const
{
    return new CreatePlatformApplicationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreatePlatformApplicationRequestPrivate
 *
 * @brief  Private implementation for CreatePlatformApplicationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePlatformApplicationRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public CreatePlatformApplicationRequest instance.
 */
CreatePlatformApplicationRequestPrivate::CreatePlatformApplicationRequestPrivate(
    const SNSRequest::Action action, CreatePlatformApplicationRequest * const q)
    : CreatePlatformApplicationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreatePlatformApplicationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePlatformApplicationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePlatformApplicationRequest instance.
 */
CreatePlatformApplicationRequestPrivate::CreatePlatformApplicationRequestPrivate(
    const CreatePlatformApplicationRequestPrivate &other, CreatePlatformApplicationRequest * const q)
    : CreatePlatformApplicationPrivate(other, q)
{

}

} // namespace SNS
} // namespace AWS

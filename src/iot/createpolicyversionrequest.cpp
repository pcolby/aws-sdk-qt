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

#include "createpolicyversionrequest.h"
#include "createpolicyversionrequest_p.h"
#include "createpolicyversionresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  CreatePolicyVersionRequest
 *
 * @brief  Implements IoT CreatePolicyVersion requests.
 *
 * @see    IoTClient::createPolicyVersion
 */

/**
 * @brief  Constructs a new CreatePolicyVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePolicyVersionRequest::CreatePolicyVersionRequest(const CreatePolicyVersionRequest &other)
    : IoTRequest(new CreatePolicyVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreatePolicyVersionRequest object.
 */
CreatePolicyVersionRequest::CreatePolicyVersionRequest()
    : IoTRequest(new CreatePolicyVersionRequestPrivate(IoTRequest::CreatePolicyVersionAction, this))
{

}

bool CreatePolicyVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreatePolicyVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePolicyVersionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePolicyVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreatePolicyVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreatePolicyVersionRequestPrivate
 *
 * @brief  Private implementation for CreatePolicyVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePolicyVersionRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public CreatePolicyVersionRequest instance.
 */
CreatePolicyVersionRequestPrivate::CreatePolicyVersionRequestPrivate(
    const IoTRequest::Action action, CreatePolicyVersionRequest * const q)
    : CreatePolicyVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreatePolicyVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePolicyVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePolicyVersionRequest instance.
 */
CreatePolicyVersionRequestPrivate::CreatePolicyVersionRequestPrivate(
    const CreatePolicyVersionRequestPrivate &other, CreatePolicyVersionRequest * const q)
    : CreatePolicyVersionPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws

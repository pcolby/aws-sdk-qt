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

#include "createstackrequest.h"
#include "createstackrequest_p.h"
#include "createstackresponse.h"
#include "cloudformationrequest_p.h"

namespace AWS {
namespace CloudFormation {

/**
 * @class  CreateStackRequest
 *
 * @brief  Implements CloudFormation CreateStack requests.
 *
 * @see    CloudFormationClient::createStack
 */

/**
 * @brief  Constructs a new CreateStackRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateStackRequest::CreateStackRequest(const CreateStackRequest &other)
    : CloudFormationRequest(new CreateStackRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateStackRequest object.
 */
CreateStackRequest::CreateStackRequest()
    : CloudFormationRequest(new CreateStackRequestPrivate(CloudFormationRequest::CreateStackAction, this))
{

}

bool CreateStackRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateStackResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateStackResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * CreateStackRequest::response(QNetworkReply * const reply) const
{
    return new CreateStackResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateStackRequestPrivate
 *
 * @brief  Private implementation for CreateStackRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStackRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public CreateStackRequest instance.
 */
CreateStackRequestPrivate::CreateStackRequestPrivate(
    const CloudFormationRequest::Action action, CreateStackRequest * const q)
    : CreateStackPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateStackRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateStackRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateStackRequest instance.
 */
CreateStackRequestPrivate::CreateStackRequestPrivate(
    const CreateStackRequestPrivate &other, CreateStackRequest * const q)
    : CreateStackPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace AWS

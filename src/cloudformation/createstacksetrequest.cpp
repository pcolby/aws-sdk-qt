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

#include "createstacksetrequest.h"
#include "createstacksetrequest_p.h"
#include "createstacksetresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  CreateStackSetRequest
 *
 * @brief  Implements CloudFormation CreateStackSet requests.
 *
 * @see    CloudFormationClient::createStackSet
 */

/**
 * @brief  Constructs a new CreateStackSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateStackSetRequest::CreateStackSetRequest(const CreateStackSetRequest &other)
    : CloudFormationRequest(new CreateStackSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateStackSetRequest object.
 */
CreateStackSetRequest::CreateStackSetRequest()
    : CloudFormationRequest(new CreateStackSetRequestPrivate(CloudFormationRequest::CreateStackSetAction, this))
{

}

bool CreateStackSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateStackSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateStackSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStackSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateStackSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateStackSetRequestPrivate
 *
 * @brief  Private implementation for CreateStackSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStackSetRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public CreateStackSetRequest instance.
 */
CreateStackSetRequestPrivate::CreateStackSetRequestPrivate(
    const CloudFormationRequest::Action action, CreateStackSetRequest * const q)
    : CreateStackSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateStackSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateStackSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateStackSetRequest instance.
 */
CreateStackSetRequestPrivate::CreateStackSetRequestPrivate(
    const CreateStackSetRequestPrivate &other, CreateStackSetRequest * const q)
    : CreateStackSetPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws

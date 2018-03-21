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

#include "createstackinstancesrequest.h"
#include "createstackinstancesrequest_p.h"
#include "createstackinstancesresponse.h"
#include "cloudformationrequest_p.h"

namespace AWS {
namespace CloudFormation {

/**
 * @class  CreateStackInstancesRequest
 *
 * @brief  Implements CloudFormation CreateStackInstances requests.
 *
 * @see    CloudFormationClient::createStackInstances
 */

/**
 * @brief  Constructs a new CreateStackInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStackInstancesResponse::CreateStackInstancesResponse(

/**
 * @brief  Constructs a new CreateStackInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateStackInstancesRequest::CreateStackInstancesRequest(const CreateStackInstancesRequest &other)
    : CloudFormationRequest(new CreateStackInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateStackInstancesRequest object.
 */
CreateStackInstancesRequest::CreateStackInstancesRequest()
    : CloudFormationRequest(new CreateStackInstancesRequestPrivate(CloudFormationRequest::CreateStackInstancesAction, this))
{

}

bool CreateStackInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateStackInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateStackInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * CreateStackInstancesRequest::response(QNetworkReply * const reply) const
{
    return new CreateStackInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateStackInstancesRequestPrivate
 *
 * @brief  Private implementation for CreateStackInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStackInstancesRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public CreateStackInstancesRequest instance.
 */
CreateStackInstancesRequestPrivate::CreateStackInstancesRequestPrivate(
    const CloudFormationRequest::Action action, CreateStackInstancesRequest * const q)
    : CreateStackInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateStackInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateStackInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateStackInstancesRequest instance.
 */
CreateStackInstancesRequestPrivate::CreateStackInstancesRequestPrivate(
    const CreateStackInstancesRequestPrivate &other, CreateStackInstancesRequest * const q)
    : CreateStackInstancesPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace AWS

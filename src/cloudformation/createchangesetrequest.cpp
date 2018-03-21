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

#include "createchangesetrequest.h"
#include "createchangesetrequest_p.h"
#include "createchangesetresponse.h"
#include "cloudformationrequest_p.h"

namespace AWS {
namespace CloudFormation {

/**
 * @class  CreateChangeSetRequest
 *
 * @brief  Implements CloudFormation CreateChangeSet requests.
 *
 * @see    CloudFormationClient::createChangeSet
 */

/**
 * @brief  Constructs a new CreateChangeSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateChangeSetResponse::CreateChangeSetResponse(

/**
 * @brief  Constructs a new CreateChangeSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateChangeSetRequest::CreateChangeSetRequest(const CreateChangeSetRequest &other)
    : CloudFormationRequest(new CreateChangeSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateChangeSetRequest object.
 */
CreateChangeSetRequest::CreateChangeSetRequest()
    : CloudFormationRequest(new CreateChangeSetRequestPrivate(CloudFormationRequest::CreateChangeSetAction, this))
{

}

bool CreateChangeSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateChangeSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateChangeSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * CreateChangeSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateChangeSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateChangeSetRequestPrivate
 *
 * @brief  Private implementation for CreateChangeSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateChangeSetRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public CreateChangeSetRequest instance.
 */
CreateChangeSetRequestPrivate::CreateChangeSetRequestPrivate(
    const CloudFormationRequest::Action action, CreateChangeSetRequest * const q)
    : CreateChangeSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateChangeSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateChangeSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateChangeSetRequest instance.
 */
CreateChangeSetRequestPrivate::CreateChangeSetRequestPrivate(
    const CreateChangeSetRequestPrivate &other, CreateChangeSetRequest * const q)
    : CreateChangeSetPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace AWS

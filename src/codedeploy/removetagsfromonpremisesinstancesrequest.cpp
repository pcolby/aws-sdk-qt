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

#include "removetagsfromonpremisesinstancesrequest.h"
#include "removetagsfromonpremisesinstancesrequest_p.h"
#include "removetagsfromonpremisesinstancesresponse.h"
#include "codedeployrequest_p.h"

namespace AWS {
namespace CodeDeploy {

/**
 * @class  RemoveTagsFromOnPremisesInstancesRequest
 *
 * @brief  Implements CodeDeploy RemoveTagsFromOnPremisesInstances requests.
 *
 * @see    CodeDeployClient::removeTagsFromOnPremisesInstances
 */

/**
 * @brief  Constructs a new RemoveTagsFromOnPremisesInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RemoveTagsFromOnPremisesInstancesRequest::RemoveTagsFromOnPremisesInstancesRequest(const RemoveTagsFromOnPremisesInstancesRequest &other)
    : CodeDeployRequest(new RemoveTagsFromOnPremisesInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RemoveTagsFromOnPremisesInstancesRequest object.
 */
RemoveTagsFromOnPremisesInstancesRequest::RemoveTagsFromOnPremisesInstancesRequest()
    : CodeDeployRequest(new RemoveTagsFromOnPremisesInstancesRequestPrivate(CodeDeployRequest::RemoveTagsFromOnPremisesInstancesAction, this))
{

}

bool RemoveTagsFromOnPremisesInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RemoveTagsFromOnPremisesInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RemoveTagsFromOnPremisesInstancesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * RemoveTagsFromOnPremisesInstancesRequest::response(QNetworkReply * const reply) const
{
    return new RemoveTagsFromOnPremisesInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RemoveTagsFromOnPremisesInstancesRequestPrivate
 *
 * @brief  Private implementation for RemoveTagsFromOnPremisesInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsFromOnPremisesInstancesRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public RemoveTagsFromOnPremisesInstancesRequest instance.
 */
RemoveTagsFromOnPremisesInstancesRequestPrivate::RemoveTagsFromOnPremisesInstancesRequestPrivate(
    const CodeDeployRequest::Action action, RemoveTagsFromOnPremisesInstancesRequest * const q)
    : RemoveTagsFromOnPremisesInstancesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsFromOnPremisesInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RemoveTagsFromOnPremisesInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RemoveTagsFromOnPremisesInstancesRequest instance.
 */
RemoveTagsFromOnPremisesInstancesRequestPrivate::RemoveTagsFromOnPremisesInstancesRequestPrivate(
    const RemoveTagsFromOnPremisesInstancesRequestPrivate &other, RemoveTagsFromOnPremisesInstancesRequest * const q)
    : RemoveTagsFromOnPremisesInstancesPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace AWS

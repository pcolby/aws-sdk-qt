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

#include "batchgetdeploymentgroupsrequest.h"
#include "batchgetdeploymentgroupsrequest_p.h"
#include "batchgetdeploymentgroupsresponse.h"
#include "codedeployrequest_p.h"

namespace AWS {
namespace CodeDeploy {

/**
 * @class  BatchGetDeploymentGroupsRequest
 *
 * @brief  Implements CodeDeploy BatchGetDeploymentGroups requests.
 *
 * @see    CodeDeployClient::batchGetDeploymentGroups
 */

/**
 * @brief  Constructs a new BatchGetDeploymentGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchGetDeploymentGroupsRequest::BatchGetDeploymentGroupsRequest(const BatchGetDeploymentGroupsRequest &other)
    : CodeDeployRequest(new BatchGetDeploymentGroupsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchGetDeploymentGroupsRequest object.
 */
BatchGetDeploymentGroupsRequest::BatchGetDeploymentGroupsRequest()
    : CodeDeployRequest(new BatchGetDeploymentGroupsRequestPrivate(CodeDeployRequest::BatchGetDeploymentGroupsAction, this))
{

}

bool BatchGetDeploymentGroupsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchGetDeploymentGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchGetDeploymentGroupsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * BatchGetDeploymentGroupsRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetDeploymentGroupsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchGetDeploymentGroupsRequestPrivate
 *
 * @brief  Private implementation for BatchGetDeploymentGroupsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetDeploymentGroupsRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public BatchGetDeploymentGroupsRequest instance.
 */
BatchGetDeploymentGroupsRequestPrivate::BatchGetDeploymentGroupsRequestPrivate(
    const CodeDeployRequest::Action action, BatchGetDeploymentGroupsRequest * const q)
    : BatchGetDeploymentGroupsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetDeploymentGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchGetDeploymentGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchGetDeploymentGroupsRequest instance.
 */
BatchGetDeploymentGroupsRequestPrivate::BatchGetDeploymentGroupsRequestPrivate(
    const BatchGetDeploymentGroupsRequestPrivate &other, BatchGetDeploymentGroupsRequest * const q)
    : BatchGetDeploymentGroupsPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace AWS

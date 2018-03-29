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

#include "batchgetdeploymentinstancesrequest.h"
#include "batchgetdeploymentinstancesrequest_p.h"
#include "batchgetdeploymentinstancesresponse.h"
#include "codedeployrequest_p.h"

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  BatchGetDeploymentInstancesRequest
 *
 * @brief  Implements CodeDeploy BatchGetDeploymentInstances requests.
 *
 * @see    CodeDeployClient::batchGetDeploymentInstances
 */

/**
 * @brief  Constructs a new BatchGetDeploymentInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchGetDeploymentInstancesRequest::BatchGetDeploymentInstancesRequest(const BatchGetDeploymentInstancesRequest &other)
    : CodeDeployRequest(new BatchGetDeploymentInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchGetDeploymentInstancesRequest object.
 */
BatchGetDeploymentInstancesRequest::BatchGetDeploymentInstancesRequest()
    : CodeDeployRequest(new BatchGetDeploymentInstancesRequestPrivate(CodeDeployRequest::BatchGetDeploymentInstancesAction, this))
{

}

bool BatchGetDeploymentInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchGetDeploymentInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchGetDeploymentInstancesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetDeploymentInstancesRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetDeploymentInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchGetDeploymentInstancesRequestPrivate
 *
 * @brief  Private implementation for BatchGetDeploymentInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetDeploymentInstancesRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public BatchGetDeploymentInstancesRequest instance.
 */
BatchGetDeploymentInstancesRequestPrivate::BatchGetDeploymentInstancesRequestPrivate(
    const CodeDeployRequest::Action action, BatchGetDeploymentInstancesRequest * const q)
    : CodeDeployRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetDeploymentInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchGetDeploymentInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchGetDeploymentInstancesRequest instance.
 */
BatchGetDeploymentInstancesRequestPrivate::BatchGetDeploymentInstancesRequestPrivate(
    const BatchGetDeploymentInstancesRequestPrivate &other, BatchGetDeploymentInstancesRequest * const q)
    : CodeDeployRequestPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace QtAws

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

#include "batchgetdeploymentsrequest.h"
#include "batchgetdeploymentsrequest_p.h"
#include "batchgetdeploymentsresponse.h"
#include "codedeployrequest_p.h"

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  BatchGetDeploymentsRequest
 *
 * @brief  Implements CodeDeploy BatchGetDeployments requests.
 *
 * @see    CodeDeployClient::batchGetDeployments
 */

/**
 * @brief  Constructs a new BatchGetDeploymentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchGetDeploymentsRequest::BatchGetDeploymentsRequest(const BatchGetDeploymentsRequest &other)
    : CodeDeployRequest(new BatchGetDeploymentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchGetDeploymentsRequest object.
 */
BatchGetDeploymentsRequest::BatchGetDeploymentsRequest()
    : CodeDeployRequest(new BatchGetDeploymentsRequestPrivate(CodeDeployRequest::BatchGetDeploymentsAction, this))
{

}

bool BatchGetDeploymentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchGetDeploymentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchGetDeploymentsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetDeploymentsRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetDeploymentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchGetDeploymentsRequestPrivate
 *
 * @brief  Private implementation for BatchGetDeploymentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetDeploymentsRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public BatchGetDeploymentsRequest instance.
 */
BatchGetDeploymentsRequestPrivate::BatchGetDeploymentsRequestPrivate(
    const CodeDeployRequest::Action action, BatchGetDeploymentsRequest * const q)
    : BatchGetDeploymentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetDeploymentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchGetDeploymentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchGetDeploymentsRequest instance.
 */
BatchGetDeploymentsRequestPrivate::BatchGetDeploymentsRequestPrivate(
    const BatchGetDeploymentsRequestPrivate &other, BatchGetDeploymentsRequest * const q)
    : BatchGetDeploymentsPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace QtAws

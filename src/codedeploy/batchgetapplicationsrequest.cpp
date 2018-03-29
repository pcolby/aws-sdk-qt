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

#include "batchgetapplicationsrequest.h"
#include "batchgetapplicationsrequest_p.h"
#include "batchgetapplicationsresponse.h"
#include "codedeployrequest_p.h"

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  BatchGetApplicationsRequest
 *
 * @brief  Implements CodeDeploy BatchGetApplications requests.
 *
 * @see    CodeDeployClient::batchGetApplications
 */

/**
 * @brief  Constructs a new BatchGetApplicationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchGetApplicationsRequest::BatchGetApplicationsRequest(const BatchGetApplicationsRequest &other)
    : CodeDeployRequest(new BatchGetApplicationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchGetApplicationsRequest object.
 */
BatchGetApplicationsRequest::BatchGetApplicationsRequest()
    : CodeDeployRequest(new BatchGetApplicationsRequestPrivate(CodeDeployRequest::BatchGetApplicationsAction, this))
{

}

bool BatchGetApplicationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchGetApplicationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchGetApplicationsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetApplicationsRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetApplicationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchGetApplicationsRequestPrivate
 *
 * @brief  Private implementation for BatchGetApplicationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetApplicationsRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public BatchGetApplicationsRequest instance.
 */
BatchGetApplicationsRequestPrivate::BatchGetApplicationsRequestPrivate(
    const CodeDeployRequest::Action action, BatchGetApplicationsRequest * const q)
    : CodeDeployRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetApplicationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchGetApplicationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchGetApplicationsRequest instance.
 */
BatchGetApplicationsRequestPrivate::BatchGetApplicationsRequestPrivate(
    const BatchGetApplicationsRequestPrivate &other, BatchGetApplicationsRequest * const q)
    : CodeDeployRequestPrivate(other, q)
{

}

} // namespace CodeDeploy
} // namespace QtAws

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

#include "batchgetprojectsrequest.h"
#include "batchgetprojectsrequest_p.h"
#include "batchgetprojectsresponse.h"
#include "codebuildrequest_p.h"

namespace AWS {
namespace CodeBuild {

/**
 * @class  BatchGetProjectsRequest
 *
 * @brief  Implements CodeBuild BatchGetProjects requests.
 *
 * @see    CodeBuildClient::batchGetProjects
 */

/**
 * @brief  Constructs a new BatchGetProjectsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetProjectsResponse::BatchGetProjectsResponse(

/**
 * @brief  Constructs a new BatchGetProjectsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchGetProjectsRequest::BatchGetProjectsRequest(const BatchGetProjectsRequest &other)
    : CodeBuildRequest(new BatchGetProjectsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchGetProjectsRequest object.
 */
BatchGetProjectsRequest::BatchGetProjectsRequest()
    : CodeBuildRequest(new BatchGetProjectsRequestPrivate(CodeBuildRequest::BatchGetProjectsAction, this))
{

}

bool BatchGetProjectsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchGetProjectsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchGetProjectsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeBuildClient::send
 */
AwsAbstractResponse * BatchGetProjectsRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetProjectsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchGetProjectsRequestPrivate
 *
 * @brief  Private implementation for BatchGetProjectsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetProjectsRequestPrivate object.
 *
 * @param  action  CodeBuild action being performed.
 * @param  q       Pointer to this object's public BatchGetProjectsRequest instance.
 */
BatchGetProjectsRequestPrivate::BatchGetProjectsRequestPrivate(
    const CodeBuildRequest::Action action, BatchGetProjectsRequest * const q)
    : BatchGetProjectsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetProjectsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchGetProjectsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchGetProjectsRequest instance.
 */
BatchGetProjectsRequestPrivate::BatchGetProjectsRequestPrivate(
    const BatchGetProjectsRequestPrivate &other, BatchGetProjectsRequest * const q)
    : BatchGetProjectsPrivate(other, q)
{

}

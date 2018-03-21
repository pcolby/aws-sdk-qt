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

#include "batchgetbuildsrequest.h"
#include "batchgetbuildsrequest_p.h"
#include "batchgetbuildsresponse.h"
#include "codebuildrequest_p.h"

namespace AWS {
namespace CodeBuild {

/**
 * @class  BatchGetBuildsRequest
 *
 * @brief  Implements CodeBuild BatchGetBuilds requests.
 *
 * @see    CodeBuildClient::batchGetBuilds
 */

/**
 * @brief  Constructs a new BatchGetBuildsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetBuildsResponse::BatchGetBuildsResponse(

/**
 * @brief  Constructs a new BatchGetBuildsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchGetBuildsRequest::BatchGetBuildsRequest(const BatchGetBuildsRequest &other)
    : CodeBuildRequest(new BatchGetBuildsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchGetBuildsRequest object.
 */
BatchGetBuildsRequest::BatchGetBuildsRequest()
    : CodeBuildRequest(new BatchGetBuildsRequestPrivate(CodeBuildRequest::BatchGetBuildsAction, this))
{

}

bool BatchGetBuildsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchGetBuildsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchGetBuildsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeBuildClient::send
 */
AwsAbstractResponse * BatchGetBuildsRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetBuildsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchGetBuildsRequestPrivate
 *
 * @brief  Private implementation for BatchGetBuildsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetBuildsRequestPrivate object.
 *
 * @param  action  CodeBuild action being performed.
 * @param  q       Pointer to this object's public BatchGetBuildsRequest instance.
 */
BatchGetBuildsRequestPrivate::BatchGetBuildsRequestPrivate(
    const CodeBuildRequest::Action action, BatchGetBuildsRequest * const q)
    : BatchGetBuildsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetBuildsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchGetBuildsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchGetBuildsRequest instance.
 */
BatchGetBuildsRequestPrivate::BatchGetBuildsRequestPrivate(
    const BatchGetBuildsRequestPrivate &other, BatchGetBuildsRequest * const q)
    : BatchGetBuildsPrivate(other, q)
{

}

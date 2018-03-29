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

#include "batchdeletebuildsrequest.h"
#include "batchdeletebuildsrequest_p.h"
#include "batchdeletebuildsresponse.h"
#include "codebuildrequest_p.h"

namespace AWS {
namespace CodeBuild {

/**
 * @class  BatchDeleteBuildsRequest
 *
 * @brief  Implements CodeBuild BatchDeleteBuilds requests.
 *
 * @see    CodeBuildClient::batchDeleteBuilds
 */

/**
 * @brief  Constructs a new BatchDeleteBuildsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchDeleteBuildsRequest::BatchDeleteBuildsRequest(const BatchDeleteBuildsRequest &other)
    : CodeBuildRequest(new BatchDeleteBuildsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchDeleteBuildsRequest object.
 */
BatchDeleteBuildsRequest::BatchDeleteBuildsRequest()
    : CodeBuildRequest(new BatchDeleteBuildsRequestPrivate(CodeBuildRequest::BatchDeleteBuildsAction, this))
{

}

bool BatchDeleteBuildsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchDeleteBuildsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchDeleteBuildsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeBuildClient::send
 */
AwsAbstractResponse * BatchDeleteBuildsRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteBuildsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchDeleteBuildsRequestPrivate
 *
 * @brief  Private implementation for BatchDeleteBuildsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDeleteBuildsRequestPrivate object.
 *
 * @param  action  CodeBuild action being performed.
 * @param  q       Pointer to this object's public BatchDeleteBuildsRequest instance.
 */
BatchDeleteBuildsRequestPrivate::BatchDeleteBuildsRequestPrivate(
    const CodeBuildRequest::Action action, BatchDeleteBuildsRequest * const q)
    : BatchDeleteBuildsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchDeleteBuildsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteBuildsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchDeleteBuildsRequest instance.
 */
BatchDeleteBuildsRequestPrivate::BatchDeleteBuildsRequestPrivate(
    const BatchDeleteBuildsRequestPrivate &other, BatchDeleteBuildsRequest * const q)
    : BatchDeleteBuildsPrivate(other, q)
{

}

} // namespace CodeBuild
} // namespace AWS

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

#include "batchgetapplicationrevisionsrequest.h"
#include "batchgetapplicationrevisionsrequest_p.h"
#include "batchgetapplicationrevisionsresponse.h"
#include "codedeployrequest_p.h"

namespace AWS {
namespace CodeDeploy {

/**
 * @class  BatchGetApplicationRevisionsRequest
 *
 * @brief  Implements CodeDeploy BatchGetApplicationRevisions requests.
 *
 * @see    CodeDeployClient::batchGetApplicationRevisions
 */

/**
 * @brief  Constructs a new BatchGetApplicationRevisionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetApplicationRevisionsResponse::BatchGetApplicationRevisionsResponse(

/**
 * @brief  Constructs a new BatchGetApplicationRevisionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchGetApplicationRevisionsRequest::BatchGetApplicationRevisionsRequest(const BatchGetApplicationRevisionsRequest &other)
    : CodeDeployRequest(new BatchGetApplicationRevisionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BatchGetApplicationRevisionsRequest object.
 */
BatchGetApplicationRevisionsRequest::BatchGetApplicationRevisionsRequest()
    : CodeDeployRequest(new BatchGetApplicationRevisionsRequestPrivate(CodeDeployRequest::BatchGetApplicationRevisionsAction, this))
{

}

bool BatchGetApplicationRevisionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BatchGetApplicationRevisionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchGetApplicationRevisionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodeDeployClient::send
 */
AwsAbstractResponse * BatchGetApplicationRevisionsRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetApplicationRevisionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BatchGetApplicationRevisionsRequestPrivate
 *
 * @brief  Private implementation for BatchGetApplicationRevisionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetApplicationRevisionsRequestPrivate object.
 *
 * @param  action  CodeDeploy action being performed.
 * @param  q       Pointer to this object's public BatchGetApplicationRevisionsRequest instance.
 */
BatchGetApplicationRevisionsRequestPrivate::BatchGetApplicationRevisionsRequestPrivate(
    const CodeDeployRequest::Action action, BatchGetApplicationRevisionsRequest * const q)
    : BatchGetApplicationRevisionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetApplicationRevisionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchGetApplicationRevisionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchGetApplicationRevisionsRequest instance.
 */
BatchGetApplicationRevisionsRequestPrivate::BatchGetApplicationRevisionsRequestPrivate(
    const BatchGetApplicationRevisionsRequestPrivate &other, BatchGetApplicationRevisionsRequest * const q)
    : BatchGetApplicationRevisionsPrivate(other, q)
{

}

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

#include "putapprovalresultrequest.h"
#include "putapprovalresultrequest_p.h"
#include "putapprovalresultresponse.h"
#include "codepipelinerequest_p.h"

namespace AWS {
namespace CodePipeline {

/**
 * @class  PutApprovalResultRequest
 *
 * @brief  Implements CodePipeline PutApprovalResult requests.
 *
 * @see    CodePipelineClient::putApprovalResult
 */

/**
 * @brief  Constructs a new PutApprovalResultResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutApprovalResultResponse::PutApprovalResultResponse(

/**
 * @brief  Constructs a new PutApprovalResultRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutApprovalResultRequest::PutApprovalResultRequest(const PutApprovalResultRequest &other)
    : CodePipelineRequest(new PutApprovalResultRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutApprovalResultRequest object.
 */
PutApprovalResultRequest::PutApprovalResultRequest()
    : CodePipelineRequest(new PutApprovalResultRequestPrivate(CodePipelineRequest::PutApprovalResultAction, this))
{

}

bool PutApprovalResultRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutApprovalResultResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutApprovalResultResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
AwsAbstractResponse * PutApprovalResultRequest::response(QNetworkReply * const reply) const
{
    return new PutApprovalResultResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutApprovalResultRequestPrivate
 *
 * @brief  Private implementation for PutApprovalResultRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutApprovalResultRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public PutApprovalResultRequest instance.
 */
PutApprovalResultRequestPrivate::PutApprovalResultRequestPrivate(
    const CodePipelineRequest::Action action, PutApprovalResultRequest * const q)
    : PutApprovalResultPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutApprovalResultRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutApprovalResultRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutApprovalResultRequest instance.
 */
PutApprovalResultRequestPrivate::PutApprovalResultRequestPrivate(
    const PutApprovalResultRequestPrivate &other, PutApprovalResultRequest * const q)
    : PutApprovalResultPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace AWS

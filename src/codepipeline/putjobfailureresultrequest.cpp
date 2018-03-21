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

#include "putjobfailureresultrequest.h"
#include "putjobfailureresultrequest_p.h"
#include "putjobfailureresultresponse.h"
#include "codepipelinerequest_p.h"

namespace AWS {
namespace CodePipeline {

/**
 * @class  PutJobFailureResultRequest
 *
 * @brief  Implements CodePipeline PutJobFailureResult requests.
 *
 * @see    CodePipelineClient::putJobFailureResult
 */

/**
 * @brief  Constructs a new PutJobFailureResultResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutJobFailureResultResponse::PutJobFailureResultResponse(

/**
 * @brief  Constructs a new PutJobFailureResultRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutJobFailureResultRequest::PutJobFailureResultRequest(const PutJobFailureResultRequest &other)
    : CodePipelineRequest(new PutJobFailureResultRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutJobFailureResultRequest object.
 */
PutJobFailureResultRequest::PutJobFailureResultRequest()
    : CodePipelineRequest(new PutJobFailureResultRequestPrivate(CodePipelineRequest::PutJobFailureResultAction, this))
{

}

bool PutJobFailureResultRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutJobFailureResultResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutJobFailureResultResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
AwsAbstractResponse * PutJobFailureResultRequest::response(QNetworkReply * const reply) const
{
    return new PutJobFailureResultResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutJobFailureResultRequestPrivate
 *
 * @brief  Private implementation for PutJobFailureResultRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutJobFailureResultRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public PutJobFailureResultRequest instance.
 */
PutJobFailureResultRequestPrivate::PutJobFailureResultRequestPrivate(
    const CodePipelineRequest::Action action, PutJobFailureResultRequest * const q)
    : PutJobFailureResultPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutJobFailureResultRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutJobFailureResultRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutJobFailureResultRequest instance.
 */
PutJobFailureResultRequestPrivate::PutJobFailureResultRequestPrivate(
    const PutJobFailureResultRequestPrivate &other, PutJobFailureResultRequest * const q)
    : PutJobFailureResultPrivate(other, q)
{

}

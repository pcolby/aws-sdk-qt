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

#include "putjobsuccessresultrequest.h"
#include "putjobsuccessresultrequest_p.h"
#include "putjobsuccessresultresponse.h"
#include "codepipelinerequest_p.h"

namespace QtAws {
namespace CodePipeline {

/**
 * @class  PutJobSuccessResultRequest
 *
 * @brief  Implements CodePipeline PutJobSuccessResult requests.
 *
 * @see    CodePipelineClient::putJobSuccessResult
 */

/**
 * @brief  Constructs a new PutJobSuccessResultRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutJobSuccessResultRequest::PutJobSuccessResultRequest(const PutJobSuccessResultRequest &other)
    : CodePipelineRequest(new PutJobSuccessResultRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutJobSuccessResultRequest object.
 */
PutJobSuccessResultRequest::PutJobSuccessResultRequest()
    : CodePipelineRequest(new PutJobSuccessResultRequestPrivate(CodePipelineRequest::PutJobSuccessResultAction, this))
{

}

bool PutJobSuccessResultRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutJobSuccessResultResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutJobSuccessResultResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
QtAws::Core::AwsAbstractResponse * PutJobSuccessResultRequest::response(QNetworkReply * const reply) const
{
    return new PutJobSuccessResultResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutJobSuccessResultRequestPrivate
 *
 * @brief  Private implementation for PutJobSuccessResultRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutJobSuccessResultRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public PutJobSuccessResultRequest instance.
 */
PutJobSuccessResultRequestPrivate::PutJobSuccessResultRequestPrivate(
    const CodePipelineRequest::Action action, PutJobSuccessResultRequest * const q)
    : PutJobSuccessResultPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutJobSuccessResultRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutJobSuccessResultRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutJobSuccessResultRequest instance.
 */
PutJobSuccessResultRequestPrivate::PutJobSuccessResultRequestPrivate(
    const PutJobSuccessResultRequestPrivate &other, PutJobSuccessResultRequest * const q)
    : PutJobSuccessResultPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace QtAws

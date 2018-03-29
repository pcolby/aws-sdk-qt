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

#include "getjobdetailsrequest.h"
#include "getjobdetailsrequest_p.h"
#include "getjobdetailsresponse.h"
#include "codepipelinerequest_p.h"

namespace QtAws {
namespace CodePipeline {

/**
 * @class  GetJobDetailsRequest
 *
 * @brief  Implements CodePipeline GetJobDetails requests.
 *
 * @see    CodePipelineClient::getJobDetails
 */

/**
 * @brief  Constructs a new GetJobDetailsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetJobDetailsRequest::GetJobDetailsRequest(const GetJobDetailsRequest &other)
    : CodePipelineRequest(new GetJobDetailsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetJobDetailsRequest object.
 */
GetJobDetailsRequest::GetJobDetailsRequest()
    : CodePipelineRequest(new GetJobDetailsRequestPrivate(CodePipelineRequest::GetJobDetailsAction, this))
{

}

bool GetJobDetailsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetJobDetailsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetJobDetailsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJobDetailsRequest::response(QNetworkReply * const reply) const
{
    return new GetJobDetailsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetJobDetailsRequestPrivate
 *
 * @brief  Private implementation for GetJobDetailsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobDetailsRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public GetJobDetailsRequest instance.
 */
GetJobDetailsRequestPrivate::GetJobDetailsRequestPrivate(
    const CodePipelineRequest::Action action, GetJobDetailsRequest * const q)
    : CodePipelineRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetJobDetailsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetJobDetailsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetJobDetailsRequest instance.
 */
GetJobDetailsRequestPrivate::GetJobDetailsRequestPrivate(
    const GetJobDetailsRequestPrivate &other, GetJobDetailsRequest * const q)
    : CodePipelineRequestPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace QtAws

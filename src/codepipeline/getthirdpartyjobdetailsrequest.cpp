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

#include "getthirdpartyjobdetailsrequest.h"
#include "getthirdpartyjobdetailsrequest_p.h"
#include "getthirdpartyjobdetailsresponse.h"
#include "codepipelinerequest_p.h"

namespace QtAws {
namespace CodePipeline {

/**
 * @class  GetThirdPartyJobDetailsRequest
 *
 * @brief  Implements CodePipeline GetThirdPartyJobDetails requests.
 *
 * @see    CodePipelineClient::getThirdPartyJobDetails
 */

/**
 * @brief  Constructs a new GetThirdPartyJobDetailsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetThirdPartyJobDetailsRequest::GetThirdPartyJobDetailsRequest(const GetThirdPartyJobDetailsRequest &other)
    : CodePipelineRequest(new GetThirdPartyJobDetailsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetThirdPartyJobDetailsRequest object.
 */
GetThirdPartyJobDetailsRequest::GetThirdPartyJobDetailsRequest()
    : CodePipelineRequest(new GetThirdPartyJobDetailsRequestPrivate(CodePipelineRequest::GetThirdPartyJobDetailsAction, this))
{

}

bool GetThirdPartyJobDetailsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetThirdPartyJobDetailsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetThirdPartyJobDetailsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
QtAws::Core::AwsAbstractResponse * GetThirdPartyJobDetailsRequest::response(QNetworkReply * const reply) const
{
    return new GetThirdPartyJobDetailsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetThirdPartyJobDetailsRequestPrivate
 *
 * @brief  Private implementation for GetThirdPartyJobDetailsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetThirdPartyJobDetailsRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public GetThirdPartyJobDetailsRequest instance.
 */
GetThirdPartyJobDetailsRequestPrivate::GetThirdPartyJobDetailsRequestPrivate(
    const CodePipelineRequest::Action action, GetThirdPartyJobDetailsRequest * const q)
    : CodePipelineRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetThirdPartyJobDetailsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetThirdPartyJobDetailsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetThirdPartyJobDetailsRequest instance.
 */
GetThirdPartyJobDetailsRequestPrivate::GetThirdPartyJobDetailsRequestPrivate(
    const GetThirdPartyJobDetailsRequestPrivate &other, GetThirdPartyJobDetailsRequest * const q)
    : CodePipelineRequestPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace QtAws

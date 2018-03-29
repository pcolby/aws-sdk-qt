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

#include "gettemplatesummaryrequest.h"
#include "gettemplatesummaryrequest_p.h"
#include "gettemplatesummaryresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  GetTemplateSummaryRequest
 *
 * @brief  Implements CloudFormation GetTemplateSummary requests.
 *
 * @see    CloudFormationClient::getTemplateSummary
 */

/**
 * @brief  Constructs a new GetTemplateSummaryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTemplateSummaryRequest::GetTemplateSummaryRequest(const GetTemplateSummaryRequest &other)
    : CloudFormationRequest(new GetTemplateSummaryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetTemplateSummaryRequest object.
 */
GetTemplateSummaryRequest::GetTemplateSummaryRequest()
    : CloudFormationRequest(new GetTemplateSummaryRequestPrivate(CloudFormationRequest::GetTemplateSummaryAction, this))
{

}

bool GetTemplateSummaryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetTemplateSummaryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTemplateSummaryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
AwsAbstractResponse * GetTemplateSummaryRequest::response(QNetworkReply * const reply) const
{
    return new GetTemplateSummaryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetTemplateSummaryRequestPrivate
 *
 * @brief  Private implementation for GetTemplateSummaryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTemplateSummaryRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public GetTemplateSummaryRequest instance.
 */
GetTemplateSummaryRequestPrivate::GetTemplateSummaryRequestPrivate(
    const CloudFormationRequest::Action action, GetTemplateSummaryRequest * const q)
    : GetTemplateSummaryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetTemplateSummaryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTemplateSummaryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTemplateSummaryRequest instance.
 */
GetTemplateSummaryRequestPrivate::GetTemplateSummaryRequestPrivate(
    const GetTemplateSummaryRequestPrivate &other, GetTemplateSummaryRequest * const q)
    : GetTemplateSummaryPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws

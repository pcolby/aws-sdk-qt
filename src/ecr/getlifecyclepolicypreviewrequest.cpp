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

#include "getlifecyclepolicypreviewrequest.h"
#include "getlifecyclepolicypreviewrequest_p.h"
#include "getlifecyclepolicypreviewresponse.h"
#include "ecrrequest_p.h"

namespace AWS {
namespace ECR {

/**
 * @class  GetLifecyclePolicyPreviewRequest
 *
 * @brief  Implements ECR GetLifecyclePolicyPreview requests.
 *
 * @see    ECRClient::getLifecyclePolicyPreview
 */

/**
 * @brief  Constructs a new GetLifecyclePolicyPreviewRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetLifecyclePolicyPreviewRequest::GetLifecyclePolicyPreviewRequest(const GetLifecyclePolicyPreviewRequest &other)
    : ECRRequest(new GetLifecyclePolicyPreviewRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetLifecyclePolicyPreviewRequest object.
 */
GetLifecyclePolicyPreviewRequest::GetLifecyclePolicyPreviewRequest()
    : ECRRequest(new GetLifecyclePolicyPreviewRequestPrivate(ECRRequest::GetLifecyclePolicyPreviewAction, this))
{

}

bool GetLifecyclePolicyPreviewRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetLifecyclePolicyPreviewResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetLifecyclePolicyPreviewResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECRClient::send
 */
AwsAbstractResponse * GetLifecyclePolicyPreviewRequest::response(QNetworkReply * const reply) const
{
    return new GetLifecyclePolicyPreviewResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetLifecyclePolicyPreviewRequestPrivate
 *
 * @brief  Private implementation for GetLifecyclePolicyPreviewRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLifecyclePolicyPreviewRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public GetLifecyclePolicyPreviewRequest instance.
 */
GetLifecyclePolicyPreviewRequestPrivate::GetLifecyclePolicyPreviewRequestPrivate(
    const ECRRequest::Action action, GetLifecyclePolicyPreviewRequest * const q)
    : GetLifecyclePolicyPreviewPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetLifecyclePolicyPreviewRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetLifecyclePolicyPreviewRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetLifecyclePolicyPreviewRequest instance.
 */
GetLifecyclePolicyPreviewRequestPrivate::GetLifecyclePolicyPreviewRequestPrivate(
    const GetLifecyclePolicyPreviewRequestPrivate &other, GetLifecyclePolicyPreviewRequest * const q)
    : GetLifecyclePolicyPreviewPrivate(other, q)
{

}

} // namespace ECR
} // namespace AWS

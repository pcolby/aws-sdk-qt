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

#include "getrepositorypolicyrequest.h"
#include "getrepositorypolicyrequest_p.h"
#include "getrepositorypolicyresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/**
 * @class  GetRepositoryPolicyRequest
 *
 * @brief  Implements ECR GetRepositoryPolicy requests.
 *
 * @see    ECRClient::getRepositoryPolicy
 */

/**
 * @brief  Constructs a new GetRepositoryPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRepositoryPolicyRequest::GetRepositoryPolicyRequest(const GetRepositoryPolicyRequest &other)
    : ECRRequest(new GetRepositoryPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRepositoryPolicyRequest object.
 */
GetRepositoryPolicyRequest::GetRepositoryPolicyRequest()
    : ECRRequest(new GetRepositoryPolicyRequestPrivate(ECRRequest::GetRepositoryPolicyAction, this))
{

}

bool GetRepositoryPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRepositoryPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRepositoryPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ECRClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRepositoryPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetRepositoryPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRepositoryPolicyRequestPrivate
 *
 * @brief  Private implementation for GetRepositoryPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRepositoryPolicyRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public GetRepositoryPolicyRequest instance.
 */
GetRepositoryPolicyRequestPrivate::GetRepositoryPolicyRequestPrivate(
    const ECRRequest::Action action, GetRepositoryPolicyRequest * const q)
    : GetRepositoryPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRepositoryPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRepositoryPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRepositoryPolicyRequest instance.
 */
GetRepositoryPolicyRequestPrivate::GetRepositoryPolicyRequestPrivate(
    const GetRepositoryPolicyRequestPrivate &other, GetRepositoryPolicyRequest * const q)
    : GetRepositoryPolicyPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws

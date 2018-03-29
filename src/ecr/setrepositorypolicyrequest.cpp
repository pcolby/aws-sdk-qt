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

#include "setrepositorypolicyrequest.h"
#include "setrepositorypolicyrequest_p.h"
#include "setrepositorypolicyresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/**
 * @class  SetRepositoryPolicyRequest
 *
 * @brief  Implements ECR SetRepositoryPolicy requests.
 *
 * @see    ECRClient::setRepositoryPolicy
 */

/**
 * @brief  Constructs a new SetRepositoryPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetRepositoryPolicyRequest::SetRepositoryPolicyRequest(const SetRepositoryPolicyRequest &other)
    : ECRRequest(new SetRepositoryPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetRepositoryPolicyRequest object.
 */
SetRepositoryPolicyRequest::SetRepositoryPolicyRequest()
    : ECRRequest(new SetRepositoryPolicyRequestPrivate(ECRRequest::SetRepositoryPolicyAction, this))
{

}

bool SetRepositoryPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetRepositoryPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetRepositoryPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ECRClient::send
 */
QtAws::Core::AwsAbstractResponse * SetRepositoryPolicyRequest::response(QNetworkReply * const reply) const
{
    return new SetRepositoryPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetRepositoryPolicyRequestPrivate
 *
 * @brief  Private implementation for SetRepositoryPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetRepositoryPolicyRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public SetRepositoryPolicyRequest instance.
 */
SetRepositoryPolicyRequestPrivate::SetRepositoryPolicyRequestPrivate(
    const ECRRequest::Action action, SetRepositoryPolicyRequest * const q)
    : SetRepositoryPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetRepositoryPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetRepositoryPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetRepositoryPolicyRequest instance.
 */
SetRepositoryPolicyRequestPrivate::SetRepositoryPolicyRequestPrivate(
    const SetRepositoryPolicyRequestPrivate &other, SetRepositoryPolicyRequest * const q)
    : SetRepositoryPolicyPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws

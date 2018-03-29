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

#include "deleteidentitypolicyrequest.h"
#include "deleteidentitypolicyrequest_p.h"
#include "deleteidentitypolicyresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/**
 * @class  DeleteIdentityPolicyRequest
 *
 * @brief  Implements SES DeleteIdentityPolicy requests.
 *
 * @see    SESClient::deleteIdentityPolicy
 */

/**
 * @brief  Constructs a new DeleteIdentityPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteIdentityPolicyRequest::DeleteIdentityPolicyRequest(const DeleteIdentityPolicyRequest &other)
    : SESRequest(new DeleteIdentityPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteIdentityPolicyRequest object.
 */
DeleteIdentityPolicyRequest::DeleteIdentityPolicyRequest()
    : SESRequest(new DeleteIdentityPolicyRequestPrivate(SESRequest::DeleteIdentityPolicyAction, this))
{

}

bool DeleteIdentityPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteIdentityPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteIdentityPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SESClient::send
 */
AwsAbstractResponse * DeleteIdentityPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIdentityPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteIdentityPolicyRequestPrivate
 *
 * @brief  Private implementation for DeleteIdentityPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIdentityPolicyRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public DeleteIdentityPolicyRequest instance.
 */
DeleteIdentityPolicyRequestPrivate::DeleteIdentityPolicyRequestPrivate(
    const SESRequest::Action action, DeleteIdentityPolicyRequest * const q)
    : DeleteIdentityPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteIdentityPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteIdentityPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteIdentityPolicyRequest instance.
 */
DeleteIdentityPolicyRequestPrivate::DeleteIdentityPolicyRequestPrivate(
    const DeleteIdentityPolicyRequestPrivate &other, DeleteIdentityPolicyRequest * const q)
    : DeleteIdentityPolicyPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws

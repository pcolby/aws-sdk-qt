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

#include "createpolicyrequest.h"
#include "createpolicyrequest_p.h"
#include "createpolicyresponse.h"
#include "organizationsrequest_p.h"

namespace QtAws {
namespace Organizations {

/**
 * @class  CreatePolicyRequest
 *
 * @brief  Implements Organizations CreatePolicy requests.
 *
 * @see    OrganizationsClient::createPolicy
 */

/**
 * @brief  Constructs a new CreatePolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePolicyRequest::CreatePolicyRequest(const CreatePolicyRequest &other)
    : OrganizationsRequest(new CreatePolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreatePolicyRequest object.
 */
CreatePolicyRequest::CreatePolicyRequest()
    : OrganizationsRequest(new CreatePolicyRequestPrivate(OrganizationsRequest::CreatePolicyAction, this))
{

}

bool CreatePolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreatePolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * CreatePolicyRequest::response(QNetworkReply * const reply) const
{
    return new CreatePolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreatePolicyRequestPrivate
 *
 * @brief  Private implementation for CreatePolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePolicyRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public CreatePolicyRequest instance.
 */
CreatePolicyRequestPrivate::CreatePolicyRequestPrivate(
    const OrganizationsRequest::Action action, CreatePolicyRequest * const q)
    : CreatePolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreatePolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePolicyRequest instance.
 */
CreatePolicyRequestPrivate::CreatePolicyRequestPrivate(
    const CreatePolicyRequestPrivate &other, CreatePolicyRequest * const q)
    : CreatePolicyPrivate(other, q)
{

}

} // namespace Organizations
} // namespace QtAws

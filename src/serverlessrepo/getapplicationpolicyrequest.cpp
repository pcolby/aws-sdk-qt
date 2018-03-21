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

#include "getapplicationpolicyrequest.h"
#include "getapplicationpolicyrequest_p.h"
#include "getapplicationpolicyresponse.h"
#include "serverlessapplicationrepositoryrequest_p.h"

namespace AWS {
namespace ServerlessApplicationRepository {

/**
 * @class  GetApplicationPolicyRequest
 *
 * @brief  Implements ServerlessApplicationRepository GetApplicationPolicy requests.
 *
 * @see    ServerlessApplicationRepositoryClient::getApplicationPolicy
 */

/**
 * @brief  Constructs a new GetApplicationPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetApplicationPolicyRequest::GetApplicationPolicyRequest(const GetApplicationPolicyRequest &other)
    : ServerlessApplicationRepositoryRequest(new GetApplicationPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetApplicationPolicyRequest object.
 */
GetApplicationPolicyRequest::GetApplicationPolicyRequest()
    : ServerlessApplicationRepositoryRequest(new GetApplicationPolicyRequestPrivate(ServerlessApplicationRepositoryRequest::GetApplicationPolicyAction, this))
{

}

bool GetApplicationPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetApplicationPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetApplicationPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServerlessApplicationRepositoryClient::send
 */
AwsAbstractResponse * GetApplicationPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetApplicationPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetApplicationPolicyRequestPrivate
 *
 * @brief  Private implementation for GetApplicationPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetApplicationPolicyRequestPrivate object.
 *
 * @param  action  ServerlessApplicationRepository action being performed.
 * @param  q       Pointer to this object's public GetApplicationPolicyRequest instance.
 */
GetApplicationPolicyRequestPrivate::GetApplicationPolicyRequestPrivate(
    const ServerlessApplicationRepositoryRequest::Action action, GetApplicationPolicyRequest * const q)
    : GetApplicationPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetApplicationPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetApplicationPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetApplicationPolicyRequest instance.
 */
GetApplicationPolicyRequestPrivate::GetApplicationPolicyRequestPrivate(
    const GetApplicationPolicyRequestPrivate &other, GetApplicationPolicyRequest * const q)
    : GetApplicationPolicyPrivate(other, q)
{

}

} // namespace ServerlessApplicationRepository
} // namespace AWS

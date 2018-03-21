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

#include "assumerolewithwebidentityrequest.h"
#include "assumerolewithwebidentityrequest_p.h"
#include "assumerolewithwebidentityresponse.h"
#include "stsrequest_p.h"

namespace AWS {
namespace STS {

/**
 * @class  AssumeRoleWithWebIdentityRequest
 *
 * @brief  Implements STS AssumeRoleWithWebIdentity requests.
 *
 * @see    STSClient::assumeRoleWithWebIdentity
 */

/**
 * @brief  Constructs a new AssumeRoleWithWebIdentityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssumeRoleWithWebIdentityResponse::AssumeRoleWithWebIdentityResponse(

/**
 * @brief  Constructs a new AssumeRoleWithWebIdentityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssumeRoleWithWebIdentityRequest::AssumeRoleWithWebIdentityRequest(const AssumeRoleWithWebIdentityRequest &other)
    : STSRequest(new AssumeRoleWithWebIdentityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssumeRoleWithWebIdentityRequest object.
 */
AssumeRoleWithWebIdentityRequest::AssumeRoleWithWebIdentityRequest()
    : STSRequest(new AssumeRoleWithWebIdentityRequestPrivate(STSRequest::AssumeRoleWithWebIdentityAction, this))
{

}

bool AssumeRoleWithWebIdentityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssumeRoleWithWebIdentityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssumeRoleWithWebIdentityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  STSClient::send
 */
AwsAbstractResponse * AssumeRoleWithWebIdentityRequest::response(QNetworkReply * const reply) const
{
    return new AssumeRoleWithWebIdentityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssumeRoleWithWebIdentityRequestPrivate
 *
 * @brief  Private implementation for AssumeRoleWithWebIdentityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssumeRoleWithWebIdentityRequestPrivate object.
 *
 * @param  action  STS action being performed.
 * @param  q       Pointer to this object's public AssumeRoleWithWebIdentityRequest instance.
 */
AssumeRoleWithWebIdentityRequestPrivate::AssumeRoleWithWebIdentityRequestPrivate(
    const STSRequest::Action action, AssumeRoleWithWebIdentityRequest * const q)
    : AssumeRoleWithWebIdentityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssumeRoleWithWebIdentityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssumeRoleWithWebIdentityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssumeRoleWithWebIdentityRequest instance.
 */
AssumeRoleWithWebIdentityRequestPrivate::AssumeRoleWithWebIdentityRequestPrivate(
    const AssumeRoleWithWebIdentityRequestPrivate &other, AssumeRoleWithWebIdentityRequest * const q)
    : AssumeRoleWithWebIdentityPrivate(other, q)
{

}

} // namespace STS
} // namespace AWS

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

#include "authorizesecuritygroupegressrequest.h"
#include "authorizesecuritygroupegressrequest_p.h"
#include "authorizesecuritygroupegressresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  AuthorizeSecurityGroupEgressRequest
 *
 * @brief  Implements EC2 AuthorizeSecurityGroupEgress requests.
 *
 * @see    EC2Client::authorizeSecurityGroupEgress
 */

/**
 * @brief  Constructs a new AuthorizeSecurityGroupEgressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AuthorizeSecurityGroupEgressRequest::AuthorizeSecurityGroupEgressRequest(const AuthorizeSecurityGroupEgressRequest &other)
    : EC2Request(new AuthorizeSecurityGroupEgressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AuthorizeSecurityGroupEgressRequest object.
 */
AuthorizeSecurityGroupEgressRequest::AuthorizeSecurityGroupEgressRequest()
    : EC2Request(new AuthorizeSecurityGroupEgressRequestPrivate(EC2Request::AuthorizeSecurityGroupEgressAction, this))
{

}

bool AuthorizeSecurityGroupEgressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AuthorizeSecurityGroupEgressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AuthorizeSecurityGroupEgressResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * AuthorizeSecurityGroupEgressRequest::response(QNetworkReply * const reply) const
{
    return new AuthorizeSecurityGroupEgressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AuthorizeSecurityGroupEgressRequestPrivate
 *
 * @brief  Private implementation for AuthorizeSecurityGroupEgressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AuthorizeSecurityGroupEgressRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AuthorizeSecurityGroupEgressRequest instance.
 */
AuthorizeSecurityGroupEgressRequestPrivate::AuthorizeSecurityGroupEgressRequestPrivate(
    const EC2Request::Action action, AuthorizeSecurityGroupEgressRequest * const q)
    : AuthorizeSecurityGroupEgressPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AuthorizeSecurityGroupEgressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AuthorizeSecurityGroupEgressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AuthorizeSecurityGroupEgressRequest instance.
 */
AuthorizeSecurityGroupEgressRequestPrivate::AuthorizeSecurityGroupEgressRequestPrivate(
    const AuthorizeSecurityGroupEgressRequestPrivate &other, AuthorizeSecurityGroupEgressRequest * const q)
    : AuthorizeSecurityGroupEgressPrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS

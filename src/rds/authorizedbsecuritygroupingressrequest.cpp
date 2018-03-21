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

#include "authorizedbsecuritygroupingressrequest.h"
#include "authorizedbsecuritygroupingressrequest_p.h"
#include "authorizedbsecuritygroupingressresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  AuthorizeDBSecurityGroupIngressRequest
 *
 * @brief  Implements RDS AuthorizeDBSecurityGroupIngress requests.
 *
 * @see    RDSClient::authorizeDBSecurityGroupIngress
 */

/**
 * @brief  Constructs a new AuthorizeDBSecurityGroupIngressResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AuthorizeDBSecurityGroupIngressResponse::AuthorizeDBSecurityGroupIngressResponse(

/**
 * @brief  Constructs a new AuthorizeDBSecurityGroupIngressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AuthorizeDBSecurityGroupIngressRequest::AuthorizeDBSecurityGroupIngressRequest(const AuthorizeDBSecurityGroupIngressRequest &other)
    : RDSRequest(new AuthorizeDBSecurityGroupIngressRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AuthorizeDBSecurityGroupIngressRequest object.
 */
AuthorizeDBSecurityGroupIngressRequest::AuthorizeDBSecurityGroupIngressRequest()
    : RDSRequest(new AuthorizeDBSecurityGroupIngressRequestPrivate(RDSRequest::AuthorizeDBSecurityGroupIngressAction, this))
{

}

bool AuthorizeDBSecurityGroupIngressRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AuthorizeDBSecurityGroupIngressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AuthorizeDBSecurityGroupIngressResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * AuthorizeDBSecurityGroupIngressRequest::response(QNetworkReply * const reply) const
{
    return new AuthorizeDBSecurityGroupIngressResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AuthorizeDBSecurityGroupIngressRequestPrivate
 *
 * @brief  Private implementation for AuthorizeDBSecurityGroupIngressRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AuthorizeDBSecurityGroupIngressRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public AuthorizeDBSecurityGroupIngressRequest instance.
 */
AuthorizeDBSecurityGroupIngressRequestPrivate::AuthorizeDBSecurityGroupIngressRequestPrivate(
    const RDSRequest::Action action, AuthorizeDBSecurityGroupIngressRequest * const q)
    : AuthorizeDBSecurityGroupIngressPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AuthorizeDBSecurityGroupIngressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AuthorizeDBSecurityGroupIngressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AuthorizeDBSecurityGroupIngressRequest instance.
 */
AuthorizeDBSecurityGroupIngressRequestPrivate::AuthorizeDBSecurityGroupIngressRequestPrivate(
    const AuthorizeDBSecurityGroupIngressRequestPrivate &other, AuthorizeDBSecurityGroupIngressRequest * const q)
    : AuthorizeDBSecurityGroupIngressPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS

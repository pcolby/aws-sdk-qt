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

#include "authorizesecuritygroupingressrequest.h"
#include "authorizesecuritygroupingressrequest_p.h"
#include "authorizesecuritygroupingressresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AuthorizeSecurityGroupIngressRequest
 *
 * \brief The AuthorizeSecurityGroupIngressRequest class encapsulates EC2 AuthorizeSecurityGroupIngress requests.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::authorizeSecurityGroupIngress
 */

/*!
 * @brief  Constructs a new AuthorizeSecurityGroupIngressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AuthorizeSecurityGroupIngressRequest::AuthorizeSecurityGroupIngressRequest(const AuthorizeSecurityGroupIngressRequest &other)
    : EC2Request(new AuthorizeSecurityGroupIngressRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new AuthorizeSecurityGroupIngressRequest object.
 */
AuthorizeSecurityGroupIngressRequest::AuthorizeSecurityGroupIngressRequest()
    : EC2Request(new AuthorizeSecurityGroupIngressRequestPrivate(EC2Request::AuthorizeSecurityGroupIngressAction, this))
{

}

/*!
 * \reimp
 */
bool AuthorizeSecurityGroupIngressRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an AuthorizeSecurityGroupIngressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AuthorizeSecurityGroupIngressResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * AuthorizeSecurityGroupIngressRequest::response(QNetworkReply * const reply) const
{
    return new AuthorizeSecurityGroupIngressResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  AuthorizeSecurityGroupIngressRequestPrivate
 *
 * @brief  Private implementation for AuthorizeSecurityGroupIngressRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AuthorizeSecurityGroupIngressRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public AuthorizeSecurityGroupIngressRequest instance.
 */
AuthorizeSecurityGroupIngressRequestPrivate::AuthorizeSecurityGroupIngressRequestPrivate(
    const EC2Request::Action action, AuthorizeSecurityGroupIngressRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new AuthorizeSecurityGroupIngressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AuthorizeSecurityGroupIngressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AuthorizeSecurityGroupIngressRequest instance.
 */
AuthorizeSecurityGroupIngressRequestPrivate::AuthorizeSecurityGroupIngressRequestPrivate(
    const AuthorizeSecurityGroupIngressRequestPrivate &other, AuthorizeSecurityGroupIngressRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws

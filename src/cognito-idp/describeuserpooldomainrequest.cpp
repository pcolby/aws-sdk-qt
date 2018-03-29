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

#include "describeuserpooldomainrequest.h"
#include "describeuserpooldomainrequest_p.h"
#include "describeuserpooldomainresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  DescribeUserPoolDomainRequest
 *
 * @brief  Implements CognitoIdentityProvider DescribeUserPoolDomain requests.
 *
 * @see    CognitoIdentityProviderClient::describeUserPoolDomain
 */

/**
 * @brief  Constructs a new DescribeUserPoolDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeUserPoolDomainRequest::DescribeUserPoolDomainRequest(const DescribeUserPoolDomainRequest &other)
    : CognitoIdentityProviderRequest(new DescribeUserPoolDomainRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeUserPoolDomainRequest object.
 */
DescribeUserPoolDomainRequest::DescribeUserPoolDomainRequest()
    : CognitoIdentityProviderRequest(new DescribeUserPoolDomainRequestPrivate(CognitoIdentityProviderRequest::DescribeUserPoolDomainAction, this))
{

}

bool DescribeUserPoolDomainRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeUserPoolDomainResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeUserPoolDomainResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
AwsAbstractResponse * DescribeUserPoolDomainRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUserPoolDomainResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeUserPoolDomainRequestPrivate
 *
 * @brief  Private implementation for DescribeUserPoolDomainRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUserPoolDomainRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public DescribeUserPoolDomainRequest instance.
 */
DescribeUserPoolDomainRequestPrivate::DescribeUserPoolDomainRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, DescribeUserPoolDomainRequest * const q)
    : DescribeUserPoolDomainPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUserPoolDomainRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeUserPoolDomainRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeUserPoolDomainRequest instance.
 */
DescribeUserPoolDomainRequestPrivate::DescribeUserPoolDomainRequestPrivate(
    const DescribeUserPoolDomainRequestPrivate &other, DescribeUserPoolDomainRequest * const q)
    : DescribeUserPoolDomainPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace AWS

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

#include "describeidentitypoolrequest.h"
#include "describeidentitypoolrequest_p.h"
#include "describeidentitypoolresponse.h"
#include "cognitoidentityrequest_p.h"

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  DescribeIdentityPoolRequest
 *
 * @brief  Implements CognitoIdentity DescribeIdentityPool requests.
 *
 * @see    CognitoIdentityClient::describeIdentityPool
 */

/**
 * @brief  Constructs a new DescribeIdentityPoolRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeIdentityPoolRequest::DescribeIdentityPoolRequest(const DescribeIdentityPoolRequest &other)
    : CognitoIdentityRequest(new DescribeIdentityPoolRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeIdentityPoolRequest object.
 */
DescribeIdentityPoolRequest::DescribeIdentityPoolRequest()
    : CognitoIdentityRequest(new DescribeIdentityPoolRequestPrivate(CognitoIdentityRequest::DescribeIdentityPoolAction, this))
{

}

bool DescribeIdentityPoolRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeIdentityPoolResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeIdentityPoolResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityClient::send
 */
AwsAbstractResponse * DescribeIdentityPoolRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIdentityPoolResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeIdentityPoolRequestPrivate
 *
 * @brief  Private implementation for DescribeIdentityPoolRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIdentityPoolRequestPrivate object.
 *
 * @param  action  CognitoIdentity action being performed.
 * @param  q       Pointer to this object's public DescribeIdentityPoolRequest instance.
 */
DescribeIdentityPoolRequestPrivate::DescribeIdentityPoolRequestPrivate(
    const CognitoIdentityRequest::Action action, DescribeIdentityPoolRequest * const q)
    : DescribeIdentityPoolPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIdentityPoolRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeIdentityPoolRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeIdentityPoolRequest instance.
 */
DescribeIdentityPoolRequestPrivate::DescribeIdentityPoolRequestPrivate(
    const DescribeIdentityPoolRequestPrivate &other, DescribeIdentityPoolRequest * const q)
    : DescribeIdentityPoolPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace AWS

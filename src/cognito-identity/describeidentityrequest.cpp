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

#include "describeidentityrequest.h"
#include "describeidentityrequest_p.h"
#include "describeidentityresponse.h"
#include "cognitoidentityrequest_p.h"

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  DescribeIdentityRequest
 *
 * @brief  Implements CognitoIdentity DescribeIdentity requests.
 *
 * @see    CognitoIdentityClient::describeIdentity
 */

/**
 * @brief  Constructs a new DescribeIdentityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeIdentityResponse::DescribeIdentityResponse(

/**
 * @brief  Constructs a new DescribeIdentityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeIdentityRequest::DescribeIdentityRequest(const DescribeIdentityRequest &other)
    : CognitoIdentityRequest(new DescribeIdentityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeIdentityRequest object.
 */
DescribeIdentityRequest::DescribeIdentityRequest()
    : CognitoIdentityRequest(new DescribeIdentityRequestPrivate(CognitoIdentityRequest::DescribeIdentityAction, this))
{

}

bool DescribeIdentityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeIdentityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeIdentityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoIdentityClient::send
 */
AwsAbstractResponse * DescribeIdentityRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIdentityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeIdentityRequestPrivate
 *
 * @brief  Private implementation for DescribeIdentityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIdentityRequestPrivate object.
 *
 * @param  action  CognitoIdentity action being performed.
 * @param  q       Pointer to this object's public DescribeIdentityRequest instance.
 */
DescribeIdentityRequestPrivate::DescribeIdentityRequestPrivate(
    const CognitoIdentityRequest::Action action, DescribeIdentityRequest * const q)
    : DescribeIdentityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIdentityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeIdentityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeIdentityRequest instance.
 */
DescribeIdentityRequestPrivate::DescribeIdentityRequestPrivate(
    const DescribeIdentityRequestPrivate &other, DescribeIdentityRequest * const q)
    : DescribeIdentityPrivate(other, q)
{

}

} // namespace CognitoIdentity
} // namespace AWS

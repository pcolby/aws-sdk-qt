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

#include "describeidentitypoolusagerequest.h"
#include "describeidentitypoolusagerequest_p.h"
#include "describeidentitypoolusageresponse.h"
#include "cognitosyncrequest_p.h"

namespace AWS {
namespace CognitoSync {

/**
 * @class  DescribeIdentityPoolUsageRequest
 *
 * @brief  Implements CognitoSync DescribeIdentityPoolUsage requests.
 *
 * @see    CognitoSyncClient::describeIdentityPoolUsage
 */

/**
 * @brief  Constructs a new DescribeIdentityPoolUsageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeIdentityPoolUsageResponse::DescribeIdentityPoolUsageResponse(

/**
 * @brief  Constructs a new DescribeIdentityPoolUsageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeIdentityPoolUsageRequest::DescribeIdentityPoolUsageRequest(const DescribeIdentityPoolUsageRequest &other)
    : CognitoSyncRequest(new DescribeIdentityPoolUsageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeIdentityPoolUsageRequest object.
 */
DescribeIdentityPoolUsageRequest::DescribeIdentityPoolUsageRequest()
    : CognitoSyncRequest(new DescribeIdentityPoolUsageRequestPrivate(CognitoSyncRequest::DescribeIdentityPoolUsageAction, this))
{

}

bool DescribeIdentityPoolUsageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeIdentityPoolUsageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeIdentityPoolUsageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoSyncClient::send
 */
AwsAbstractResponse * DescribeIdentityPoolUsageRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIdentityPoolUsageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeIdentityPoolUsageRequestPrivate
 *
 * @brief  Private implementation for DescribeIdentityPoolUsageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIdentityPoolUsageRequestPrivate object.
 *
 * @param  action  CognitoSync action being performed.
 * @param  q       Pointer to this object's public DescribeIdentityPoolUsageRequest instance.
 */
DescribeIdentityPoolUsageRequestPrivate::DescribeIdentityPoolUsageRequestPrivate(
    const CognitoSyncRequest::Action action, DescribeIdentityPoolUsageRequest * const q)
    : DescribeIdentityPoolUsagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIdentityPoolUsageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeIdentityPoolUsageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeIdentityPoolUsageRequest instance.
 */
DescribeIdentityPoolUsageRequestPrivate::DescribeIdentityPoolUsageRequestPrivate(
    const DescribeIdentityPoolUsageRequestPrivate &other, DescribeIdentityPoolUsageRequest * const q)
    : DescribeIdentityPoolUsagePrivate(other, q)
{

}

} // namespace CognitoSync
} // namespace AWS

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

#include "describeidentityusagerequest.h"
#include "describeidentityusagerequest_p.h"
#include "describeidentityusageresponse.h"
#include "cognitosyncrequest_p.h"

namespace AWS {
namespace CognitoSync {

/**
 * @class  DescribeIdentityUsageRequest
 *
 * @brief  Implements CognitoSync DescribeIdentityUsage requests.
 *
 * @see    CognitoSyncClient::describeIdentityUsage
 */

/**
 * @brief  Constructs a new DescribeIdentityUsageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeIdentityUsageResponse::DescribeIdentityUsageResponse(

/**
 * @brief  Constructs a new DescribeIdentityUsageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeIdentityUsageRequest::DescribeIdentityUsageRequest(const DescribeIdentityUsageRequest &other)
    : CognitoSyncRequest(new DescribeIdentityUsageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeIdentityUsageRequest object.
 */
DescribeIdentityUsageRequest::DescribeIdentityUsageRequest()
    : CognitoSyncRequest(new DescribeIdentityUsageRequestPrivate(CognitoSyncRequest::DescribeIdentityUsageAction, this))
{

}

bool DescribeIdentityUsageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeIdentityUsageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeIdentityUsageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoSyncClient::send
 */
AwsAbstractResponse * DescribeIdentityUsageRequest::response(QNetworkReply * const reply) const
{
    return new DescribeIdentityUsageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeIdentityUsageRequestPrivate
 *
 * @brief  Private implementation for DescribeIdentityUsageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIdentityUsageRequestPrivate object.
 *
 * @param  action  CognitoSync action being performed.
 * @param  q       Pointer to this object's public DescribeIdentityUsageRequest instance.
 */
DescribeIdentityUsageRequestPrivate::DescribeIdentityUsageRequestPrivate(
    const CognitoSyncRequest::Action action, DescribeIdentityUsageRequest * const q)
    : DescribeIdentityUsagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIdentityUsageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeIdentityUsageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeIdentityUsageRequest instance.
 */
DescribeIdentityUsageRequestPrivate::DescribeIdentityUsageRequestPrivate(
    const DescribeIdentityUsageRequestPrivate &other, DescribeIdentityUsageRequest * const q)
    : DescribeIdentityUsagePrivate(other, q)
{

}

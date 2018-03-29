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

#include "describedatasetrequest.h"
#include "describedatasetrequest_p.h"
#include "describedatasetresponse.h"
#include "cognitosyncrequest_p.h"

namespace QtAws {
namespace CognitoSync {

/**
 * @class  DescribeDatasetRequest
 *
 * @brief  Implements CognitoSync DescribeDataset requests.
 *
 * @see    CognitoSyncClient::describeDataset
 */

/**
 * @brief  Constructs a new DescribeDatasetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDatasetRequest::DescribeDatasetRequest(const DescribeDatasetRequest &other)
    : CognitoSyncRequest(new DescribeDatasetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDatasetRequest object.
 */
DescribeDatasetRequest::DescribeDatasetRequest()
    : CognitoSyncRequest(new DescribeDatasetRequestPrivate(CognitoSyncRequest::DescribeDatasetAction, this))
{

}

bool DescribeDatasetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDatasetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDatasetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDatasetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDatasetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDatasetRequestPrivate
 *
 * @brief  Private implementation for DescribeDatasetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDatasetRequestPrivate object.
 *
 * @param  action  CognitoSync action being performed.
 * @param  q       Pointer to this object's public DescribeDatasetRequest instance.
 */
DescribeDatasetRequestPrivate::DescribeDatasetRequestPrivate(
    const CognitoSyncRequest::Action action, DescribeDatasetRequest * const q)
    : DescribeDatasetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDatasetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDatasetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDatasetRequest instance.
 */
DescribeDatasetRequestPrivate::DescribeDatasetRequestPrivate(
    const DescribeDatasetRequestPrivate &other, DescribeDatasetRequest * const q)
    : DescribeDatasetPrivate(other, q)
{

}

} // namespace CognitoSync
} // namespace QtAws

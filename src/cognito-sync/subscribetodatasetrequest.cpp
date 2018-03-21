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

#include "subscribetodatasetrequest.h"
#include "subscribetodatasetrequest_p.h"
#include "subscribetodatasetresponse.h"
#include "cognitosyncrequest_p.h"

namespace AWS {
namespace CognitoSync {

/**
 * @class  SubscribeToDatasetRequest
 *
 * @brief  Implements CognitoSync SubscribeToDataset requests.
 *
 * @see    CognitoSyncClient::subscribeToDataset
 */

/**
 * @brief  Constructs a new SubscribeToDatasetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SubscribeToDatasetRequest::SubscribeToDatasetRequest(const SubscribeToDatasetRequest &other)
    : CognitoSyncRequest(new SubscribeToDatasetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SubscribeToDatasetRequest object.
 */
SubscribeToDatasetRequest::SubscribeToDatasetRequest()
    : CognitoSyncRequest(new SubscribeToDatasetRequestPrivate(CognitoSyncRequest::SubscribeToDatasetAction, this))
{

}

bool SubscribeToDatasetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SubscribeToDatasetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SubscribeToDatasetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoSyncClient::send
 */
AwsAbstractResponse * SubscribeToDatasetRequest::response(QNetworkReply * const reply) const
{
    return new SubscribeToDatasetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SubscribeToDatasetRequestPrivate
 *
 * @brief  Private implementation for SubscribeToDatasetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SubscribeToDatasetRequestPrivate object.
 *
 * @param  action  CognitoSync action being performed.
 * @param  q       Pointer to this object's public SubscribeToDatasetRequest instance.
 */
SubscribeToDatasetRequestPrivate::SubscribeToDatasetRequestPrivate(
    const CognitoSyncRequest::Action action, SubscribeToDatasetRequest * const q)
    : SubscribeToDatasetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SubscribeToDatasetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SubscribeToDatasetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SubscribeToDatasetRequest instance.
 */
SubscribeToDatasetRequestPrivate::SubscribeToDatasetRequestPrivate(
    const SubscribeToDatasetRequestPrivate &other, SubscribeToDatasetRequest * const q)
    : SubscribeToDatasetPrivate(other, q)
{

}

} // namespace CognitoSync
} // namespace AWS

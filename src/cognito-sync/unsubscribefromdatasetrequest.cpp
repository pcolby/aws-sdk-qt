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

#include "unsubscribefromdatasetrequest.h"
#include "unsubscribefromdatasetrequest_p.h"
#include "unsubscribefromdatasetresponse.h"
#include "cognitosyncrequest_p.h"

namespace QtAws {
namespace CognitoSync {

/**
 * @class  UnsubscribeFromDatasetRequest
 *
 * @brief  Implements CognitoSync UnsubscribeFromDataset requests.
 *
 * @see    CognitoSyncClient::unsubscribeFromDataset
 */

/**
 * @brief  Constructs a new UnsubscribeFromDatasetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UnsubscribeFromDatasetRequest::UnsubscribeFromDatasetRequest(const UnsubscribeFromDatasetRequest &other)
    : CognitoSyncRequest(new UnsubscribeFromDatasetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UnsubscribeFromDatasetRequest object.
 */
UnsubscribeFromDatasetRequest::UnsubscribeFromDatasetRequest()
    : CognitoSyncRequest(new UnsubscribeFromDatasetRequestPrivate(CognitoSyncRequest::UnsubscribeFromDatasetAction, this))
{

}

bool UnsubscribeFromDatasetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UnsubscribeFromDatasetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UnsubscribeFromDatasetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * UnsubscribeFromDatasetRequest::response(QNetworkReply * const reply) const
{
    return new UnsubscribeFromDatasetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UnsubscribeFromDatasetRequestPrivate
 *
 * @brief  Private implementation for UnsubscribeFromDatasetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnsubscribeFromDatasetRequestPrivate object.
 *
 * @param  action  CognitoSync action being performed.
 * @param  q       Pointer to this object's public UnsubscribeFromDatasetRequest instance.
 */
UnsubscribeFromDatasetRequestPrivate::UnsubscribeFromDatasetRequestPrivate(
    const CognitoSyncRequest::Action action, UnsubscribeFromDatasetRequest * const q)
    : UnsubscribeFromDatasetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UnsubscribeFromDatasetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UnsubscribeFromDatasetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UnsubscribeFromDatasetRequest instance.
 */
UnsubscribeFromDatasetRequestPrivate::UnsubscribeFromDatasetRequestPrivate(
    const UnsubscribeFromDatasetRequestPrivate &other, UnsubscribeFromDatasetRequest * const q)
    : UnsubscribeFromDatasetPrivate(other, q)
{

}

} // namespace CognitoSync
} // namespace QtAws

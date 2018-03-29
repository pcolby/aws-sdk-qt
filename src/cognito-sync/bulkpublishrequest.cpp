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

#include "bulkpublishrequest.h"
#include "bulkpublishrequest_p.h"
#include "bulkpublishresponse.h"
#include "cognitosyncrequest_p.h"

namespace AWS {
namespace CognitoSync {

/**
 * @class  BulkPublishRequest
 *
 * @brief  Implements CognitoSync BulkPublish requests.
 *
 * @see    CognitoSyncClient::bulkPublish
 */

/**
 * @brief  Constructs a new BulkPublishRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BulkPublishRequest::BulkPublishRequest(const BulkPublishRequest &other)
    : CognitoSyncRequest(new BulkPublishRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new BulkPublishRequest object.
 */
BulkPublishRequest::BulkPublishRequest()
    : CognitoSyncRequest(new BulkPublishRequestPrivate(CognitoSyncRequest::BulkPublishAction, this))
{

}

bool BulkPublishRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an BulkPublishResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BulkPublishResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoSyncClient::send
 */
AwsAbstractResponse * BulkPublishRequest::response(QNetworkReply * const reply) const
{
    return new BulkPublishResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  BulkPublishRequestPrivate
 *
 * @brief  Private implementation for BulkPublishRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BulkPublishRequestPrivate object.
 *
 * @param  action  CognitoSync action being performed.
 * @param  q       Pointer to this object's public BulkPublishRequest instance.
 */
BulkPublishRequestPrivate::BulkPublishRequestPrivate(
    const CognitoSyncRequest::Action action, BulkPublishRequest * const q)
    : BulkPublishPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new BulkPublishRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BulkPublishRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BulkPublishRequest instance.
 */
BulkPublishRequestPrivate::BulkPublishRequestPrivate(
    const BulkPublishRequestPrivate &other, BulkPublishRequest * const q)
    : BulkPublishPrivate(other, q)
{

}

} // namespace CognitoSync
} // namespace AWS

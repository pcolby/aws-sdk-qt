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

#include "gettagkeysrequest.h"
#include "gettagkeysrequest_p.h"
#include "gettagkeysresponse.h"
#include "resourcegroupstaggingapirequest_p.h"

namespace AWS {
namespace ResourceGroupsTaggingAPI {

/**
 * @class  GetTagKeysRequest
 *
 * @brief  Implements ResourceGroupsTaggingAPI GetTagKeys requests.
 *
 * @see    ResourceGroupsTaggingAPIClient::getTagKeys
 */

/**
 * @brief  Constructs a new GetTagKeysResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetTagKeysResponse::GetTagKeysResponse(

/**
 * @brief  Constructs a new GetTagKeysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTagKeysRequest::GetTagKeysRequest(const GetTagKeysRequest &other)
    : ResourceGroupsTaggingAPIRequest(new GetTagKeysRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetTagKeysRequest object.
 */
GetTagKeysRequest::GetTagKeysRequest()
    : ResourceGroupsTaggingAPIRequest(new GetTagKeysRequestPrivate(ResourceGroupsTaggingAPIRequest::GetTagKeysAction, this))
{

}

bool GetTagKeysRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetTagKeysResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTagKeysResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ResourceGroupsTaggingAPIClient::send
 */
AwsAbstractResponse * GetTagKeysRequest::response(QNetworkReply * const reply) const
{
    return new GetTagKeysResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetTagKeysRequestPrivate
 *
 * @brief  Private implementation for GetTagKeysRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTagKeysRequestPrivate object.
 *
 * @param  action  ResourceGroupsTaggingAPI action being performed.
 * @param  q       Pointer to this object's public GetTagKeysRequest instance.
 */
GetTagKeysRequestPrivate::GetTagKeysRequestPrivate(
    const ResourceGroupsTaggingAPIRequest::Action action, GetTagKeysRequest * const q)
    : GetTagKeysPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetTagKeysRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTagKeysRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTagKeysRequest instance.
 */
GetTagKeysRequestPrivate::GetTagKeysRequestPrivate(
    const GetTagKeysRequestPrivate &other, GetTagKeysRequest * const q)
    : GetTagKeysPrivate(other, q)
{

}

} // namespace ResourceGroupsTaggingAPI
} // namespace AWS

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

#include "gettagvaluesrequest.h"
#include "gettagvaluesrequest_p.h"
#include "gettagvaluesresponse.h"
#include "resourcegroupstaggingapirequest_p.h"

namespace AWS {
namespace ResourceGroupsTaggingAPI {

/**
 * @class  GetTagValuesRequest
 *
 * @brief  Implements ResourceGroupsTaggingAPI GetTagValues requests.
 *
 * @see    ResourceGroupsTaggingAPIClient::getTagValues
 */

/**
 * @brief  Constructs a new GetTagValuesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTagValuesRequest::GetTagValuesRequest(const GetTagValuesRequest &other)
    : ResourceGroupsTaggingAPIRequest(new GetTagValuesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetTagValuesRequest object.
 */
GetTagValuesRequest::GetTagValuesRequest()
    : ResourceGroupsTaggingAPIRequest(new GetTagValuesRequestPrivate(ResourceGroupsTaggingAPIRequest::GetTagValuesAction, this))
{

}

bool GetTagValuesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetTagValuesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTagValuesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ResourceGroupsTaggingAPIClient::send
 */
AwsAbstractResponse * GetTagValuesRequest::response(QNetworkReply * const reply) const
{
    return new GetTagValuesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetTagValuesRequestPrivate
 *
 * @brief  Private implementation for GetTagValuesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTagValuesRequestPrivate object.
 *
 * @param  action  ResourceGroupsTaggingAPI action being performed.
 * @param  q       Pointer to this object's public GetTagValuesRequest instance.
 */
GetTagValuesRequestPrivate::GetTagValuesRequestPrivate(
    const ResourceGroupsTaggingAPIRequest::Action action, GetTagValuesRequest * const q)
    : GetTagValuesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetTagValuesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTagValuesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTagValuesRequest instance.
 */
GetTagValuesRequestPrivate::GetTagValuesRequestPrivate(
    const GetTagValuesRequestPrivate &other, GetTagValuesRequest * const q)
    : GetTagValuesPrivate(other, q)
{

}

} // namespace ResourceGroupsTaggingAPI
} // namespace AWS

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

#include "getgroupqueryrequest.h"
#include "getgroupqueryrequest_p.h"
#include "getgroupqueryresponse.h"
#include "resourcegroupsrequest_p.h"

namespace AWS {
namespace ResourceGroups {

/**
 * @class  GetGroupQueryRequest
 *
 * @brief  Implements ResourceGroups GetGroupQuery requests.
 *
 * @see    ResourceGroupsClient::getGroupQuery
 */

/**
 * @brief  Constructs a new GetGroupQueryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetGroupQueryResponse::GetGroupQueryResponse(

/**
 * @brief  Constructs a new GetGroupQueryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetGroupQueryRequest::GetGroupQueryRequest(const GetGroupQueryRequest &other)
    : ResourceGroupsRequest(new GetGroupQueryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetGroupQueryRequest object.
 */
GetGroupQueryRequest::GetGroupQueryRequest()
    : ResourceGroupsRequest(new GetGroupQueryRequestPrivate(ResourceGroupsRequest::GetGroupQueryAction, this))
{

}

bool GetGroupQueryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetGroupQueryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetGroupQueryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ResourceGroupsClient::send
 */
AwsAbstractResponse * GetGroupQueryRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupQueryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetGroupQueryRequestPrivate
 *
 * @brief  Private implementation for GetGroupQueryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGroupQueryRequestPrivate object.
 *
 * @param  action  ResourceGroups action being performed.
 * @param  q       Pointer to this object's public GetGroupQueryRequest instance.
 */
GetGroupQueryRequestPrivate::GetGroupQueryRequestPrivate(
    const ResourceGroupsRequest::Action action, GetGroupQueryRequest * const q)
    : GetGroupQueryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetGroupQueryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetGroupQueryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetGroupQueryRequest instance.
 */
GetGroupQueryRequestPrivate::GetGroupQueryRequestPrivate(
    const GetGroupQueryRequestPrivate &other, GetGroupQueryRequest * const q)
    : GetGroupQueryPrivate(other, q)
{

}

} // namespace ResourceGroups
} // namespace AWS

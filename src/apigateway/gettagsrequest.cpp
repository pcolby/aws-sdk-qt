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

#include "gettagsrequest.h"
#include "gettagsrequest_p.h"
#include "gettagsresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetTagsRequest
 *
 * @brief  Implements APIGateway GetTags requests.
 *
 * @see    APIGatewayClient::getTags
 */

/**
 * @brief  Constructs a new GetTagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTagsRequest::GetTagsRequest(const GetTagsRequest &other)
    : APIGatewayRequest(new GetTagsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetTagsRequest object.
 */
GetTagsRequest::GetTagsRequest()
    : APIGatewayRequest(new GetTagsRequestPrivate(APIGatewayRequest::GetTagsAction, this))
{

}

bool GetTagsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetTagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTagsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTagsRequest::response(QNetworkReply * const reply) const
{
    return new GetTagsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetTagsRequestPrivate
 *
 * @brief  Private implementation for GetTagsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTagsRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetTagsRequest instance.
 */
GetTagsRequestPrivate::GetTagsRequestPrivate(
    const APIGatewayRequest::Action action, GetTagsRequest * const q)
    : GetTagsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetTagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTagsRequest instance.
 */
GetTagsRequestPrivate::GetTagsRequestPrivate(
    const GetTagsRequestPrivate &other, GetTagsRequest * const q)
    : GetTagsPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws

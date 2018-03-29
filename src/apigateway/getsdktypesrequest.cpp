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

#include "getsdktypesrequest.h"
#include "getsdktypesrequest_p.h"
#include "getsdktypesresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetSdkTypesRequest
 *
 * @brief  Implements APIGateway GetSdkTypes requests.
 *
 * @see    APIGatewayClient::getSdkTypes
 */

/**
 * @brief  Constructs a new GetSdkTypesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSdkTypesRequest::GetSdkTypesRequest(const GetSdkTypesRequest &other)
    : APIGatewayRequest(new GetSdkTypesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetSdkTypesRequest object.
 */
GetSdkTypesRequest::GetSdkTypesRequest()
    : APIGatewayRequest(new GetSdkTypesRequestPrivate(APIGatewayRequest::GetSdkTypesAction, this))
{

}

bool GetSdkTypesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetSdkTypesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSdkTypesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSdkTypesRequest::response(QNetworkReply * const reply) const
{
    return new GetSdkTypesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetSdkTypesRequestPrivate
 *
 * @brief  Private implementation for GetSdkTypesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSdkTypesRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetSdkTypesRequest instance.
 */
GetSdkTypesRequestPrivate::GetSdkTypesRequestPrivate(
    const APIGatewayRequest::Action action, GetSdkTypesRequest * const q)
    : GetSdkTypesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetSdkTypesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSdkTypesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSdkTypesRequest instance.
 */
GetSdkTypesRequestPrivate::GetSdkTypesRequestPrivate(
    const GetSdkTypesRequestPrivate &other, GetSdkTypesRequest * const q)
    : GetSdkTypesPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws

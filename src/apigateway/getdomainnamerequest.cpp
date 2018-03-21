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

#include "getdomainnamerequest.h"
#include "getdomainnamerequest_p.h"
#include "getdomainnameresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  GetDomainNameRequest
 *
 * @brief  Implements APIGateway GetDomainName requests.
 *
 * @see    APIGatewayClient::getDomainName
 */

/**
 * @brief  Constructs a new GetDomainNameResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDomainNameResponse::GetDomainNameResponse(

/**
 * @brief  Constructs a new GetDomainNameRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDomainNameRequest::GetDomainNameRequest(const GetDomainNameRequest &other)
    : APIGatewayRequest(new GetDomainNameRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDomainNameRequest object.
 */
GetDomainNameRequest::GetDomainNameRequest()
    : APIGatewayRequest(new GetDomainNameRequestPrivate(APIGatewayRequest::GetDomainNameAction, this))
{

}

bool GetDomainNameRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDomainNameResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDomainNameResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetDomainNameRequest::response(QNetworkReply * const reply) const
{
    return new GetDomainNameResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDomainNameRequestPrivate
 *
 * @brief  Private implementation for GetDomainNameRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDomainNameRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetDomainNameRequest instance.
 */
GetDomainNameRequestPrivate::GetDomainNameRequestPrivate(
    const APIGatewayRequest::Action action, GetDomainNameRequest * const q)
    : GetDomainNamePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDomainNameRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDomainNameRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDomainNameRequest instance.
 */
GetDomainNameRequestPrivate::GetDomainNameRequestPrivate(
    const GetDomainNameRequestPrivate &other, GetDomainNameRequest * const q)
    : GetDomainNamePrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS

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

#include "getrequestvalidatorrequest.h"
#include "getrequestvalidatorrequest_p.h"
#include "getrequestvalidatorresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetRequestValidatorRequest
 *
 * @brief  Implements APIGateway GetRequestValidator requests.
 *
 * @see    APIGatewayClient::getRequestValidator
 */

/**
 * @brief  Constructs a new GetRequestValidatorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRequestValidatorRequest::GetRequestValidatorRequest(const GetRequestValidatorRequest &other)
    : APIGatewayRequest(new GetRequestValidatorRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetRequestValidatorRequest object.
 */
GetRequestValidatorRequest::GetRequestValidatorRequest()
    : APIGatewayRequest(new GetRequestValidatorRequestPrivate(APIGatewayRequest::GetRequestValidatorAction, this))
{

}

bool GetRequestValidatorRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetRequestValidatorResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRequestValidatorResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * GetRequestValidatorRequest::response(QNetworkReply * const reply) const
{
    return new GetRequestValidatorResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetRequestValidatorRequestPrivate
 *
 * @brief  Private implementation for GetRequestValidatorRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRequestValidatorRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public GetRequestValidatorRequest instance.
 */
GetRequestValidatorRequestPrivate::GetRequestValidatorRequestPrivate(
    const APIGatewayRequest::Action action, GetRequestValidatorRequest * const q)
    : GetRequestValidatorPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetRequestValidatorRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRequestValidatorRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRequestValidatorRequest instance.
 */
GetRequestValidatorRequestPrivate::GetRequestValidatorRequestPrivate(
    const GetRequestValidatorRequestPrivate &other, GetRequestValidatorRequest * const q)
    : GetRequestValidatorPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws

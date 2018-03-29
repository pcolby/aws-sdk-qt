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

#include "createrequestvalidatorrequest.h"
#include "createrequestvalidatorrequest_p.h"
#include "createrequestvalidatorresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  CreateRequestValidatorRequest
 *
 * @brief  Implements APIGateway CreateRequestValidator requests.
 *
 * @see    APIGatewayClient::createRequestValidator
 */

/**
 * @brief  Constructs a new CreateRequestValidatorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateRequestValidatorRequest::CreateRequestValidatorRequest(const CreateRequestValidatorRequest &other)
    : APIGatewayRequest(new CreateRequestValidatorRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateRequestValidatorRequest object.
 */
CreateRequestValidatorRequest::CreateRequestValidatorRequest()
    : APIGatewayRequest(new CreateRequestValidatorRequestPrivate(APIGatewayRequest::CreateRequestValidatorAction, this))
{

}

bool CreateRequestValidatorRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateRequestValidatorResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateRequestValidatorResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRequestValidatorRequest::response(QNetworkReply * const reply) const
{
    return new CreateRequestValidatorResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateRequestValidatorRequestPrivate
 *
 * @brief  Private implementation for CreateRequestValidatorRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRequestValidatorRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public CreateRequestValidatorRequest instance.
 */
CreateRequestValidatorRequestPrivate::CreateRequestValidatorRequestPrivate(
    const APIGatewayRequest::Action action, CreateRequestValidatorRequest * const q)
    : CreateRequestValidatorPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateRequestValidatorRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateRequestValidatorRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateRequestValidatorRequest instance.
 */
CreateRequestValidatorRequestPrivate::CreateRequestValidatorRequestPrivate(
    const CreateRequestValidatorRequestPrivate &other, CreateRequestValidatorRequest * const q)
    : CreateRequestValidatorPrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws

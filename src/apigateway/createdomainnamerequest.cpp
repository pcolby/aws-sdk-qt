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

#include "createdomainnamerequest.h"
#include "createdomainnamerequest_p.h"
#include "createdomainnameresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  CreateDomainNameRequest
 *
 * @brief  Implements APIGateway CreateDomainName requests.
 *
 * @see    APIGatewayClient::createDomainName
 */

/**
 * @brief  Constructs a new CreateDomainNameResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDomainNameResponse::CreateDomainNameResponse(

/**
 * @brief  Constructs a new CreateDomainNameRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDomainNameRequest::CreateDomainNameRequest(const CreateDomainNameRequest &other)
    : APIGatewayRequest(new CreateDomainNameRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDomainNameRequest object.
 */
CreateDomainNameRequest::CreateDomainNameRequest()
    : APIGatewayRequest(new CreateDomainNameRequestPrivate(APIGatewayRequest::CreateDomainNameAction, this))
{

}

bool CreateDomainNameRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDomainNameResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDomainNameResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * CreateDomainNameRequest::response(QNetworkReply * const reply) const
{
    return new CreateDomainNameResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDomainNameRequestPrivate
 *
 * @brief  Private implementation for CreateDomainNameRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDomainNameRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public CreateDomainNameRequest instance.
 */
CreateDomainNameRequestPrivate::CreateDomainNameRequestPrivate(
    const APIGatewayRequest::Action action, CreateDomainNameRequest * const q)
    : CreateDomainNamePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDomainNameRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDomainNameRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDomainNameRequest instance.
 */
CreateDomainNameRequestPrivate::CreateDomainNameRequestPrivate(
    const CreateDomainNameRequestPrivate &other, CreateDomainNameRequest * const q)
    : CreateDomainNamePrivate(other, q)
{

}

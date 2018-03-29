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

#include "deletedomainnamerequest.h"
#include "deletedomainnamerequest_p.h"
#include "deletedomainnameresponse.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/**
 * @class  DeleteDomainNameRequest
 *
 * @brief  Implements APIGateway DeleteDomainName requests.
 *
 * @see    APIGatewayClient::deleteDomainName
 */

/**
 * @brief  Constructs a new DeleteDomainNameRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDomainNameRequest::DeleteDomainNameRequest(const DeleteDomainNameRequest &other)
    : APIGatewayRequest(new DeleteDomainNameRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDomainNameRequest object.
 */
DeleteDomainNameRequest::DeleteDomainNameRequest()
    : APIGatewayRequest(new DeleteDomainNameRequestPrivate(APIGatewayRequest::DeleteDomainNameAction, this))
{

}

bool DeleteDomainNameRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDomainNameResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDomainNameResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * DeleteDomainNameRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDomainNameResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDomainNameRequestPrivate
 *
 * @brief  Private implementation for DeleteDomainNameRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDomainNameRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteDomainNameRequest instance.
 */
DeleteDomainNameRequestPrivate::DeleteDomainNameRequestPrivate(
    const APIGatewayRequest::Action action, DeleteDomainNameRequest * const q)
    : DeleteDomainNamePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDomainNameRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDomainNameRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDomainNameRequest instance.
 */
DeleteDomainNameRequestPrivate::DeleteDomainNameRequestPrivate(
    const DeleteDomainNameRequestPrivate &other, DeleteDomainNameRequest * const q)
    : DeleteDomainNamePrivate(other, q)
{

}

} // namespace APIGateway
} // namespace QtAws

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

#include "updatedomainnamerequest.h"
#include "updatedomainnamerequest_p.h"
#include "updatedomainnameresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateDomainNameRequest
 *
 * @brief  Implements APIGateway UpdateDomainName requests.
 *
 * @see    APIGatewayClient::updateDomainName
 */

/**
 * @brief  Constructs a new UpdateDomainNameResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDomainNameResponse::UpdateDomainNameResponse(

/**
 * @brief  Constructs a new UpdateDomainNameRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateDomainNameRequest::UpdateDomainNameRequest(const UpdateDomainNameRequest &other)
    : APIGatewayRequest(new UpdateDomainNameRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateDomainNameRequest object.
 */
UpdateDomainNameRequest::UpdateDomainNameRequest()
    : APIGatewayRequest(new UpdateDomainNameRequestPrivate(APIGatewayRequest::UpdateDomainNameAction, this))
{

}

bool UpdateDomainNameRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateDomainNameResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateDomainNameResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * UpdateDomainNameRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainNameResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateDomainNameRequestPrivate
 *
 * @brief  Private implementation for UpdateDomainNameRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDomainNameRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public UpdateDomainNameRequest instance.
 */
UpdateDomainNameRequestPrivate::UpdateDomainNameRequestPrivate(
    const APIGatewayRequest::Action action, UpdateDomainNameRequest * const q)
    : UpdateDomainNamePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDomainNameRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainNameRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateDomainNameRequest instance.
 */
UpdateDomainNameRequestPrivate::UpdateDomainNameRequestPrivate(
    const UpdateDomainNameRequestPrivate &other, UpdateDomainNameRequest * const q)
    : UpdateDomainNamePrivate(other, q)
{

}

} // namespace APIGateway
} // namespace AWS

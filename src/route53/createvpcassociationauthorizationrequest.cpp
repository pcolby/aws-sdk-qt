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

#include "createvpcassociationauthorizationrequest.h"
#include "createvpcassociationauthorizationrequest_p.h"
#include "createvpcassociationauthorizationresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  CreateVPCAssociationAuthorizationRequest
 *
 * @brief  Implements Route53 CreateVPCAssociationAuthorization requests.
 *
 * @see    Route53Client::createVPCAssociationAuthorization
 */

/**
 * @brief  Constructs a new CreateVPCAssociationAuthorizationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateVPCAssociationAuthorizationRequest::CreateVPCAssociationAuthorizationRequest(const CreateVPCAssociationAuthorizationRequest &other)
    : Route53Request(new CreateVPCAssociationAuthorizationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateVPCAssociationAuthorizationRequest object.
 */
CreateVPCAssociationAuthorizationRequest::CreateVPCAssociationAuthorizationRequest()
    : Route53Request(new CreateVPCAssociationAuthorizationRequestPrivate(Route53Request::CreateVPCAssociationAuthorizationAction, this))
{

}

bool CreateVPCAssociationAuthorizationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateVPCAssociationAuthorizationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateVPCAssociationAuthorizationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * CreateVPCAssociationAuthorizationRequest::response(QNetworkReply * const reply) const
{
    return new CreateVPCAssociationAuthorizationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateVPCAssociationAuthorizationRequestPrivate
 *
 * @brief  Private implementation for CreateVPCAssociationAuthorizationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVPCAssociationAuthorizationRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public CreateVPCAssociationAuthorizationRequest instance.
 */
CreateVPCAssociationAuthorizationRequestPrivate::CreateVPCAssociationAuthorizationRequestPrivate(
    const Route53Request::Action action, CreateVPCAssociationAuthorizationRequest * const q)
    : CreateVPCAssociationAuthorizationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateVPCAssociationAuthorizationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateVPCAssociationAuthorizationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateVPCAssociationAuthorizationRequest instance.
 */
CreateVPCAssociationAuthorizationRequestPrivate::CreateVPCAssociationAuthorizationRequestPrivate(
    const CreateVPCAssociationAuthorizationRequestPrivate &other, CreateVPCAssociationAuthorizationRequest * const q)
    : CreateVPCAssociationAuthorizationPrivate(other, q)
{

}

} // namespace Route53
} // namespace AWS

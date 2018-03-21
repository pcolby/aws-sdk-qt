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

#include "associatevpcwithhostedzonerequest.h"
#include "associatevpcwithhostedzonerequest_p.h"
#include "associatevpcwithhostedzoneresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  AssociateVPCWithHostedZoneRequest
 *
 * @brief  Implements Route53 AssociateVPCWithHostedZone requests.
 *
 * @see    Route53Client::associateVPCWithHostedZone
 */

/**
 * @brief  Constructs a new AssociateVPCWithHostedZoneResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateVPCWithHostedZoneResponse::AssociateVPCWithHostedZoneResponse(

/**
 * @brief  Constructs a new AssociateVPCWithHostedZoneRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateVPCWithHostedZoneRequest::AssociateVPCWithHostedZoneRequest(const AssociateVPCWithHostedZoneRequest &other)
    : Route53Request(new AssociateVPCWithHostedZoneRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateVPCWithHostedZoneRequest object.
 */
AssociateVPCWithHostedZoneRequest::AssociateVPCWithHostedZoneRequest()
    : Route53Request(new AssociateVPCWithHostedZoneRequestPrivate(Route53Request::AssociateVPCWithHostedZoneAction, this))
{

}

bool AssociateVPCWithHostedZoneRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateVPCWithHostedZoneResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateVPCWithHostedZoneResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * AssociateVPCWithHostedZoneRequest::response(QNetworkReply * const reply) const
{
    return new AssociateVPCWithHostedZoneResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateVPCWithHostedZoneRequestPrivate
 *
 * @brief  Private implementation for AssociateVPCWithHostedZoneRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateVPCWithHostedZoneRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public AssociateVPCWithHostedZoneRequest instance.
 */
AssociateVPCWithHostedZoneRequestPrivate::AssociateVPCWithHostedZoneRequestPrivate(
    const Route53Request::Action action, AssociateVPCWithHostedZoneRequest * const q)
    : AssociateVPCWithHostedZonePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateVPCWithHostedZoneRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateVPCWithHostedZoneRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateVPCWithHostedZoneRequest instance.
 */
AssociateVPCWithHostedZoneRequestPrivate::AssociateVPCWithHostedZoneRequestPrivate(
    const AssociateVPCWithHostedZoneRequestPrivate &other, AssociateVPCWithHostedZoneRequest * const q)
    : AssociateVPCWithHostedZonePrivate(other, q)
{

}

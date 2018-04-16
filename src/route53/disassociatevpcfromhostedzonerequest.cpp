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

#include "disassociatevpcfromhostedzonerequest.h"
#include "disassociatevpcfromhostedzonerequest_p.h"
#include "disassociatevpcfromhostedzoneresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DisassociateVPCFromHostedZoneRequest
 *
 * \brief The DisassociateVPCFromHostedZoneRequest class provides an interface for Route53 DisassociateVPCFromHostedZone requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::disassociateVPCFromHostedZone
 */

/*!
 * @brief  Constructs a new DisassociateVPCFromHostedZoneRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateVPCFromHostedZoneRequest::DisassociateVPCFromHostedZoneRequest(const DisassociateVPCFromHostedZoneRequest &other)
    : Route53Request(new DisassociateVPCFromHostedZoneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DisassociateVPCFromHostedZoneRequest object.
 */
DisassociateVPCFromHostedZoneRequest::DisassociateVPCFromHostedZoneRequest()
    : Route53Request(new DisassociateVPCFromHostedZoneRequestPrivate(Route53Request::DisassociateVPCFromHostedZoneAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateVPCFromHostedZoneRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DisassociateVPCFromHostedZoneResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateVPCFromHostedZoneResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateVPCFromHostedZoneRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateVPCFromHostedZoneResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DisassociateVPCFromHostedZoneRequestPrivate
 *
 * @brief  Private implementation for DisassociateVPCFromHostedZoneRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DisassociateVPCFromHostedZoneRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public DisassociateVPCFromHostedZoneRequest instance.
 */
DisassociateVPCFromHostedZoneRequestPrivate::DisassociateVPCFromHostedZoneRequestPrivate(
    const Route53Request::Action action, DisassociateVPCFromHostedZoneRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DisassociateVPCFromHostedZoneRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateVPCFromHostedZoneRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateVPCFromHostedZoneRequest instance.
 */
DisassociateVPCFromHostedZoneRequestPrivate::DisassociateVPCFromHostedZoneRequestPrivate(
    const DisassociateVPCFromHostedZoneRequestPrivate &other, DisassociateVPCFromHostedZoneRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws

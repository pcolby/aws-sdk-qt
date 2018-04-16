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

#include "deletedirectconnectgatewayrequest.h"
#include "deletedirectconnectgatewayrequest_p.h"
#include "deletedirectconnectgatewayresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DeleteDirectConnectGatewayRequest
 *
 * \brief The DeleteDirectConnectGatewayRequest class provides an interface for DirectConnect DeleteDirectConnectGateway requests.
 *
 * \ingroup DirectConnect
 *
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard 1 gigabit or 10 gigabit
 *  Ethernet fiber-optic cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router.
 *  With this connection in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon
 *  Elastic Compute Cloud (Amazon EC2) and Amazon Simple Storage Service (Amazon S3)) and to Amazon Virtual Private Cloud
 *  (Amazon VPC), bypassing Internet service providers in your network path. An AWS Direct Connect location provides access
 *  to AWS in the region it is associated with, as well as access to other US regions. For example, you can provision a
 *  single connection to any AWS Direct Connect location in the US and use it to access public AWS services in all US
 *  Regions and AWS GovCloud
 *
 * \sa DirectConnectClient::deleteDirectConnectGateway
 */

/*!
 * @brief  Constructs a new DeleteDirectConnectGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDirectConnectGatewayRequest::DeleteDirectConnectGatewayRequest(const DeleteDirectConnectGatewayRequest &other)
    : DirectConnectRequest(new DeleteDirectConnectGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteDirectConnectGatewayRequest object.
 */
DeleteDirectConnectGatewayRequest::DeleteDirectConnectGatewayRequest()
    : DirectConnectRequest(new DeleteDirectConnectGatewayRequestPrivate(DirectConnectRequest::DeleteDirectConnectGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDirectConnectGatewayRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteDirectConnectGatewayResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDirectConnectGatewayResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDirectConnectGatewayRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDirectConnectGatewayResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteDirectConnectGatewayRequestPrivate
 *
 * @brief  Private implementation for DeleteDirectConnectGatewayRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteDirectConnectGatewayRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DeleteDirectConnectGatewayRequest instance.
 */
DeleteDirectConnectGatewayRequestPrivate::DeleteDirectConnectGatewayRequestPrivate(
    const DirectConnectRequest::Action action, DeleteDirectConnectGatewayRequest * const q)
    : DirectConnectRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteDirectConnectGatewayRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDirectConnectGatewayRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDirectConnectGatewayRequest instance.
 */
DeleteDirectConnectGatewayRequestPrivate::DeleteDirectConnectGatewayRequestPrivate(
    const DeleteDirectConnectGatewayRequestPrivate &other, DeleteDirectConnectGatewayRequest * const q)
    : DirectConnectRequestPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws

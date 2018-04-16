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

#include "createnatgatewayrequest.h"
#include "createnatgatewayrequest_p.h"
#include "createnatgatewayresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateNatGatewayRequest
 *
 * \brief The CreateNatGatewayRequest class provides an interface for EC2 CreateNatGateway requests.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::createNatGateway
 */

/*!
 * @brief  Constructs a new CreateNatGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateNatGatewayRequest::CreateNatGatewayRequest(const CreateNatGatewayRequest &other)
    : EC2Request(new CreateNatGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateNatGatewayRequest object.
 */
CreateNatGatewayRequest::CreateNatGatewayRequest()
    : EC2Request(new CreateNatGatewayRequestPrivate(EC2Request::CreateNatGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool CreateNatGatewayRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateNatGatewayResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateNatGatewayResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EC2Client::send
 */
QtAws::Core::AwsAbstractResponse * CreateNatGatewayRequest::response(QNetworkReply * const reply) const
{
    return new CreateNatGatewayResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateNatGatewayRequestPrivate
 *
 * @brief  Private implementation for CreateNatGatewayRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateNatGatewayRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateNatGatewayRequest instance.
 */
CreateNatGatewayRequestPrivate::CreateNatGatewayRequestPrivate(
    const EC2Request::Action action, CreateNatGatewayRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateNatGatewayRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateNatGatewayRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateNatGatewayRequest instance.
 */
CreateNatGatewayRequestPrivate::CreateNatGatewayRequestPrivate(
    const CreateNatGatewayRequestPrivate &other, CreateNatGatewayRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws

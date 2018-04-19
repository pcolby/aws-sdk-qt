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

#include "createcustomergatewayrequest.h"
#include "createcustomergatewayrequest_p.h"
#include "createcustomergatewayresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateCustomerGatewayRequest
 * \brief The CreateCustomerGatewayRequest class provides an interface for EC2 CreateCustomerGateway requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::createCustomerGateway
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCustomerGatewayRequest::CreateCustomerGatewayRequest(const CreateCustomerGatewayRequest &other)
    : EC2Request(new CreateCustomerGatewayRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCustomerGatewayRequest object.
 */
CreateCustomerGatewayRequest::CreateCustomerGatewayRequest()
    : EC2Request(new CreateCustomerGatewayRequestPrivate(EC2Request::CreateCustomerGatewayAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCustomerGatewayRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCustomerGatewayResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCustomerGatewayRequest::response(QNetworkReply * const reply) const
{
    return new CreateCustomerGatewayResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::CreateCustomerGatewayRequestPrivate
 * \brief The CreateCustomerGatewayRequestPrivate class provides private implementation for CreateCustomerGatewayRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateCustomerGatewayRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
CreateCustomerGatewayRequestPrivate::CreateCustomerGatewayRequestPrivate(
    const EC2Request::Action action, CreateCustomerGatewayRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCustomerGatewayRequest
 * class' copy constructor.
 */
CreateCustomerGatewayRequestPrivate::CreateCustomerGatewayRequestPrivate(
    const CreateCustomerGatewayRequestPrivate &other, CreateCustomerGatewayRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws

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

#include "createvpcendpointrequest.h"
#include "createvpcendpointrequest_p.h"
#include "createvpcendpointresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateVpcEndpointRequest
 * \brief The CreateVpcEndpointRequest class provides an interface for EC2 CreateVpcEndpoint requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::createVpcEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVpcEndpointRequest::CreateVpcEndpointRequest(const CreateVpcEndpointRequest &other)
    : EC2Request(new CreateVpcEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVpcEndpointRequest object.
 */
CreateVpcEndpointRequest::CreateVpcEndpointRequest()
    : EC2Request(new CreateVpcEndpointRequestPrivate(EC2Request::CreateVpcEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVpcEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVpcEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVpcEndpointRequest::response(QNetworkReply * const reply) const
{
    return new CreateVpcEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::CreateVpcEndpointRequestPrivate
 * \brief The CreateVpcEndpointRequestPrivate class provides private implementation for CreateVpcEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateVpcEndpointRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
CreateVpcEndpointRequestPrivate::CreateVpcEndpointRequestPrivate(
    const EC2Request::Action action, CreateVpcEndpointRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVpcEndpointRequest
 * class' copy constructor.
 */
CreateVpcEndpointRequestPrivate::CreateVpcEndpointRequestPrivate(
    const CreateVpcEndpointRequestPrivate &other, CreateVpcEndpointRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws

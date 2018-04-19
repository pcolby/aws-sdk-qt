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

#include "createvpcrequest.h"
#include "createvpcrequest_p.h"
#include "createvpcresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateVpcRequest
 * \brief The CreateVpcRequest class provides an interface for EC2 CreateVpc requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::createVpc
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVpcRequest::CreateVpcRequest(const CreateVpcRequest &other)
    : EC2Request(new CreateVpcRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVpcRequest object.
 */
CreateVpcRequest::CreateVpcRequest()
    : EC2Request(new CreateVpcRequestPrivate(EC2Request::CreateVpcAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVpcRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVpcResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVpcRequest::response(QNetworkReply * const reply) const
{
    return new CreateVpcResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::CreateVpcRequestPrivate
 * \brief The CreateVpcRequestPrivate class provides private implementation for CreateVpcRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 *
 * Constructs a CreateVpcRequestPrivate object for EC2 \a action with,
 * public implementation \a q.
 */
CreateVpcRequestPrivate::CreateVpcRequestPrivate(
    const EC2Request::Action action, CreateVpcRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVpcRequest
 * class' copy constructor.
 */
CreateVpcRequestPrivate::CreateVpcRequestPrivate(
    const CreateVpcRequestPrivate &other, CreateVpcRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws

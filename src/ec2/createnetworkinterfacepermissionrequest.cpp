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

#include "createnetworkinterfacepermissionrequest.h"
#include "createnetworkinterfacepermissionrequest_p.h"
#include "createnetworkinterfacepermissionresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateNetworkInterfacePermissionRequest
 * \brief The CreateNetworkInterfacePermissionRequest class provides an interface for EC2 CreateNetworkInterfacePermission requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::createNetworkInterfacePermission
 */

/*!
 * Constructs a copy of \a other.
 */
CreateNetworkInterfacePermissionRequest::CreateNetworkInterfacePermissionRequest(const CreateNetworkInterfacePermissionRequest &other)
    : EC2Request(new CreateNetworkInterfacePermissionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateNetworkInterfacePermissionRequest object.
 */
CreateNetworkInterfacePermissionRequest::CreateNetworkInterfacePermissionRequest()
    : EC2Request(new CreateNetworkInterfacePermissionRequestPrivate(EC2Request::CreateNetworkInterfacePermissionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateNetworkInterfacePermissionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateNetworkInterfacePermissionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateNetworkInterfacePermissionRequest::response(QNetworkReply * const reply) const
{
    return new CreateNetworkInterfacePermissionResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::CreateNetworkInterfacePermissionRequestPrivate
 * \brief The CreateNetworkInterfacePermissionRequestPrivate class provides private implementation for CreateNetworkInterfacePermissionRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateNetworkInterfacePermissionRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
CreateNetworkInterfacePermissionRequestPrivate::CreateNetworkInterfacePermissionRequestPrivate(
    const EC2Request::Action action, CreateNetworkInterfacePermissionRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateNetworkInterfacePermissionRequest
 * class' copy constructor.
 */
CreateNetworkInterfacePermissionRequestPrivate::CreateNetworkInterfacePermissionRequestPrivate(
    const CreateNetworkInterfacePermissionRequestPrivate &other, CreateNetworkInterfacePermissionRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws

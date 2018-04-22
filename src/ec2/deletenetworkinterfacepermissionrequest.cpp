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

#include "deletenetworkinterfacepermissionrequest.h"
#include "deletenetworkinterfacepermissionrequest_p.h"
#include "deletenetworkinterfacepermissionresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteNetworkInterfacePermissionRequest
 * \brief The DeleteNetworkInterfacePermissionRequest class provides an interface for EC2 DeleteNetworkInterfacePermission requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteNetworkInterfacePermission
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteNetworkInterfacePermissionRequest::DeleteNetworkInterfacePermissionRequest(const DeleteNetworkInterfacePermissionRequest &other)
    : Ec2Request(new DeleteNetworkInterfacePermissionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteNetworkInterfacePermissionRequest object.
 */
DeleteNetworkInterfacePermissionRequest::DeleteNetworkInterfacePermissionRequest()
    : Ec2Request(new DeleteNetworkInterfacePermissionRequestPrivate(Ec2Request::DeleteNetworkInterfacePermissionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteNetworkInterfacePermissionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteNetworkInterfacePermissionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNetworkInterfacePermissionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNetworkInterfacePermissionResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DeleteNetworkInterfacePermissionRequestPrivate
 * \brief The DeleteNetworkInterfacePermissionRequestPrivate class provides private implementation for DeleteNetworkInterfacePermissionRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteNetworkInterfacePermissionRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DeleteNetworkInterfacePermissionRequestPrivate::DeleteNetworkInterfacePermissionRequestPrivate(
    const Ec2Request::Action action, DeleteNetworkInterfacePermissionRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteNetworkInterfacePermissionRequest
 * class' copy constructor.
 */
DeleteNetworkInterfacePermissionRequestPrivate::DeleteNetworkInterfacePermissionRequestPrivate(
    const DeleteNetworkInterfacePermissionRequestPrivate &other, DeleteNetworkInterfacePermissionRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws

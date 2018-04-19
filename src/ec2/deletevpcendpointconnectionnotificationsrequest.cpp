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

#include "deletevpcendpointconnectionnotificationsrequest.h"
#include "deletevpcendpointconnectionnotificationsrequest_p.h"
#include "deletevpcendpointconnectionnotificationsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteVpcEndpointConnectionNotificationsRequest
 * \brief The DeleteVpcEndpointConnectionNotificationsRequest class provides an interface for EC2 DeleteVpcEndpointConnectionNotifications requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::deleteVpcEndpointConnectionNotifications
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVpcEndpointConnectionNotificationsRequest::DeleteVpcEndpointConnectionNotificationsRequest(const DeleteVpcEndpointConnectionNotificationsRequest &other)
    : EC2Request(new DeleteVpcEndpointConnectionNotificationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVpcEndpointConnectionNotificationsRequest object.
 */
DeleteVpcEndpointConnectionNotificationsRequest::DeleteVpcEndpointConnectionNotificationsRequest()
    : EC2Request(new DeleteVpcEndpointConnectionNotificationsRequestPrivate(EC2Request::DeleteVpcEndpointConnectionNotificationsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVpcEndpointConnectionNotificationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVpcEndpointConnectionNotificationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVpcEndpointConnectionNotificationsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVpcEndpointConnectionNotificationsResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DeleteVpcEndpointConnectionNotificationsRequestPrivate
 * \brief The DeleteVpcEndpointConnectionNotificationsRequestPrivate class provides private implementation for DeleteVpcEndpointConnectionNotificationsRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 *
 * Constructs a DeleteVpcEndpointConnectionNotificationsRequestPrivate object for EC2 \a action with,
 * public implementation \a q.
 */
DeleteVpcEndpointConnectionNotificationsRequestPrivate::DeleteVpcEndpointConnectionNotificationsRequestPrivate(
    const EC2Request::Action action, DeleteVpcEndpointConnectionNotificationsRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVpcEndpointConnectionNotificationsRequest
 * class' copy constructor.
 */
DeleteVpcEndpointConnectionNotificationsRequestPrivate::DeleteVpcEndpointConnectionNotificationsRequestPrivate(
    const DeleteVpcEndpointConnectionNotificationsRequestPrivate &other, DeleteVpcEndpointConnectionNotificationsRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
